from panda_interface.srv import GetSensorsGripper, ApplyCommandsGripper, ConnectGripper
from panda_py.libfranka import Gripper
import rclpy
import threading
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from panda_interface.msg import PandaGripperState

class PandaGripperServer(Node):

    ip = "172.16.0.2"

    def __init__(self):
        super().__init__('panda_gripper_server')

        self.cb_group = ReentrantCallbackGroup()
        self.lock = threading.Lock()
        self.cached_width = 0.0

        self.create_service(GetSensorsGripper, 'get_sensors_gripper', self.get_sensors_gripper, callback_group=self.cb_group)
        self.create_service(ApplyCommandsGripper, 'apply_commands_gripper', self.apply_commands_gripper, callback_group=self.cb_group)
        self.create_service(ConnectGripper, 'connect_gripper', self.connect_gripper, callback_group=self.cb_group)

        self.gripper = None
        self.target_width = 1.0
        self.past_target = 1.0
        self.create_timer(0.01, self.control_loop, callback_group=self.cb_group)

    def control_loop(self):
        if self.lock.acquire(blocking=False):
            try:
                target = self.target_width
                if self.gripper and target != self.past_target:
                    print("Gripper moving to target width:", target)
                    try:
                        self.gripper.grasp(target, speed=0.5, force=20.0, epsilon_inner=10.0, epsilon_outer=10.0)
                        # self.cached_width = self.gripper.read_once().width
                        self.past_target = target
                    except Exception:
                        pass
            finally:
                self.lock.release()

    def get_sensors_gripper(self, request, response):
        # self.get_logger().info('Get Sensors Gripper')
        if self.gripper is None:
             self.get_logger().warn('Gripper not connected')
             # You might want to handle this case, maybe return success=False or empty state
             # For now, assuming it might crash if read_once is called on None, or we should check connection.
             # But following original code style, it didn't check explicitly in get_sensors_gripper but get_sensors did check self.panda
             pass
        try:
            if self.cached_width is None:
                self.cached_width = self.gripper.read_once().width
                response.state = PandaGripperState(width=self.cached_width)
            else:
                response.state = PandaGripperState(width=self.cached_width)
                self.cached_width = None
        except Exception as e:
            self.get_logger().error(f'Failed to read gripper: {e}')
        
        return response


    def apply_commands_gripper(self, request, response):
        # self.get_logger().info('Apply Commands Gripper')
        print("Applying gripper command to width:", request.command.width)
        self.target_width = request.command.width
        response.success = True
        return response

    def connect_gripper(self, request, response):
        self.get_logger().info('Connect gripper')
        try:
            self.gripper = Gripper(self.ip)
            # self.target_width = self.gripper.read_once().width
            response.success = True
            self.cached_width = self.gripper.read_once().width
            self.get_logger().info(f'Connected to gripper@{self.ip}')
        except RuntimeError:
            self.get_logger().info(f'Connection to gripper@{self.ip} failed')
            response.success = False
        return response

def main():
    rclpy.init()

    minimal_service = PandaGripperServer()
    executor = MultiThreadedExecutor()
    executor.add_node(minimal_service)
    try:
        executor.spin()
    except SystemExit:
        print('stopped spinning')
        rclpy.shutdown()
        print('shutting down ros')


if __name__ == '__main__':
    main()
