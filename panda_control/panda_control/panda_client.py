import time
import numpy as np

from panda_interface.srv import ApplyCommands, Connect, GetSensors, Close
import rclpy
from rclpy.node import Node
from panda_interface.msg import PandaCommand


def generate_joint_space_min_jerk(
    start, goal, time_to_go: float, dt: float):
    # Adapted from : https://github.com/vikashplus/robohive/blob/main/robohive/utils/min_jerk.py

    def _min_jerk_spaces(N: int, T: float):
        assert N > 1, "Number of planning steps must be larger than 1."

        t_traj = np.linspace(0, 1, N)
        p_traj = 10 * t_traj**3 - 15 * t_traj**4 + 6 * t_traj**5
        pd_traj = (30 * t_traj**2 - 60 * t_traj**3 + 30 * t_traj**4) / T
        pdd_traj = (60 * t_traj - 180 * t_traj**2 + 120 * t_traj**3) / (T**2)

        return p_traj, pd_traj, pdd_traj

    steps =  int(time_to_go/dt)

    p_traj, pd_traj, pdd_traj = _min_jerk_spaces(steps, time_to_go)

    D = goal - start
    q_traj = start[None, :] + D[None, :] * p_traj[:, None]
    qd_traj = D[None, :] * pd_traj[:, None]
    qdd_traj = D[None, :] * pdd_traj[:, None]

    waypoints = [
        {
            "time_from_start": i * dt,
            "position": q_traj[i, :],
            "velocity": qd_traj[i, :],
            "acceleration": qdd_traj[i, :],
        }
        for i in range(steps)
    ]

    return waypoints

class PandaClient(Node):

    interfaces = {
        'apply_commands': ApplyCommands,
        'get_sensors': GetSensors,
        'connect': Connect,
        'close': Close
    }

    def __init__(self):
        rclpy.init()

        super().__init__('panda_client')

        self.client_names = {}
        for name, type in PandaClient.interfaces.items():
            client = self.create_client(type, name)

            while not client.wait_for_service(timeout_sec=1.0):
                self.get_logger().info(f'service {name} not available, waiting again...')

            self.client_names[name] = client

    def connect(self):
        request = PandaClient.interfaces['connect'].Request()
        self.future = self.client_names['connect'].call_async(request)

        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


    def apply_commands(self, q_desired, gain=4.):

        request = PandaClient.interfaces['apply_commands'].Request()

        request.command = PandaCommand(position=q_desired, gain=self.gain)
        self.future = self.client_names['apply_commands'].call_async(request)

        return

    def get_sensors(self):
        request = PandaClient.interfaces['get_sensors'].Request()

        self.future = self.client_names['get_sensors'].call_async(request)
        rclpy.spin_until_future_complete(self, self.future)

        return self.future.result()

    def close(self):
        self.reset()

        request = PandaClient.interfaces['close'].Request()
        self.future = self.client_names['close'].call_async(request)

        rclpy.shutdown()

    def reset(self, reset_pos=None, time_to_go=5):
        home = np.array([0.035972153270453736, 0.26206892568271034, -0.09772715938167076, -1.3994067706311577, -0.009183868408203125, 1.6383829876946538, -0.011601826569581752])

        q_current = self.get_sensors().state.position

        dt = 0.1
        waypoints =  generate_joint_space_min_jerk(start=q_current, goal=home, time_to_go=time_to_go, dt=dt)

        for i in range(len(waypoints)):
            self.apply_commands(q_desired=waypoints[i]['position'], gain=10.)
            time.sleep(dt)


def main():


    panda = PandaClient()

    if panda.connect():
        panda.reset()


if __name__ == '__main__':
    main()