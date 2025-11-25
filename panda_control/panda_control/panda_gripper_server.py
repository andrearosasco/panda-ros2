from panda_interface.srv import GetSensorsGripper, ApplyCommandsGripper, ConnectGripper
from panda_py.libfranka import Gripper
import rclpy
from rclpy.node import Node
from panda_interface.msg import PandaGripperState

class PandaGripperServer(Node):

    ip = "172.16.0.2"

    def __init__(self):
        super().__init__('panda_gripper_server')

        self.create_service(GetSensorsGripper, 'get_sensors_gripper', self.get_sensors_gripper)
        self.create_service(ApplyCommandsGripper, 'apply_commands_gripper', self.apply_commands_gripper)
        self.create_service(ConnectGripper, 'connect_gripper', self.connect_gripper)

        self.gripper = None
        self.target_width = 1.0
        self.create_timer(0.1, self.control_loop)

    def control_loop(self):
        if self.gripper:
            try:
                self.gripper.grasp(self.target_width, speed=0.1, force=5.0)
            except Exception:
                pass

    def get_sensors_gripper(self, request, response):
        self.get_logger().info('Get Sensors Gripper')
        if self.gripper is None:
             self.get_logger().warn('Gripper not connected')
             # You might want to handle this case, maybe return success=False or empty state
             # For now, assuming it might crash if read_once is called on None, or we should check connection.
             # But following original code style, it didn't check explicitly in get_sensors_gripper but get_sensors did check self.panda
             pass

        try:
            response.state = PandaGripperState(width=self.gripper.read_once().width)
        except Exception as e:
            self.get_logger().error(f'Failed to read gripper: {e}')
        
        return response


    def apply_commands_gripper(self, request, response):
        self.get_logger().info('Apply Commands Gripper')
        self.target_width = request.command.width
        response.success = True
        return response

    def connect_gripper(self, request, response):
        self.get_logger().info('Connect gripper')
        try:
            self.gripper = Gripper(self.ip)
            # self.target_width = self.gripper.read_once().width
            response.success = True
            self.get_logger().info(f'Connected to gripper@{self.ip}')
        except RuntimeError:
            self.get_logger().info(f'Connection to gripper@{self.ip} failed')
            response.success = False
        return response

def main():
    rclpy.init()

    minimal_service = PandaGripperServer()
    try:
        rclpy.spin(minimal_service)
    except SystemExit:
        print('stopped spinning')
        rclpy.shutdown()
        print('shutting down ros')


if __name__ == '__main__':
    main()
