import time
import numpy as np

from panda_interface.srv import ApplyCommands, Connect, GetSensors, Close
import rclpy
from rclpy.node import Node
from panda_interface.msg import PandaCommand

from robohive.utils.min_jerk import generate_joint_space_min_jerk



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


    def apply_commands(self, q_desired=None, kp=None, kd=None):
        request = PandaClient.interfaces['apply_commands'].Request()

        request.command = PandaCommand(position=q_desired)
        self.future = self.client_names['apply_commands'].call_async(request)
        # rclpy.spin_until_future_complete(self, self.future)

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
       
        # Use registered controller
        q_current = self.get_sensors().state.position
        # generate min jerk trajectory
        dt = 0.1
        waypoints =  generate_joint_space_min_jerk(start=q_current, goal=home, time_to_go=time_to_go, dt=dt)
        # reset using min_jerk traj
        for i in range(len(waypoints)):
            self.apply_commands(q_desired=waypoints[i]['position'])
            time.sleep(dt)


def main():


    panda = PandaClient()

    if panda.connect():
        panda.reset()

    # panda.close()


if __name__ == '__main__':
    main()