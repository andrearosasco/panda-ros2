import time
import numpy as np

from panda_interface.srv import ApplyCommandsGripper, ConnectGripper, GetSensorsGripper
import rclpy
from rclpy.node import Node
from panda_interface.msg import PandaGripperCommand

class PandaGripperClient(Node):

    interfaces = {
        'apply_commands_gripper': ApplyCommandsGripper,
        'get_sensors_gripper': GetSensorsGripper,
        'connect_gripper': ConnectGripper,
    }

    def __init__(self):
        rclpy.init()

        super().__init__('panda_gripper_client')

        self.client_names = {}
        for name, type in PandaGripperClient.interfaces.items():
            client = self.create_client(type, name)

            while not client.wait_for_service(timeout_sec=1.0):
                self.get_logger().info(f'service {name} not available, waiting again...')

            self.client_names[name] = client

    def connect(self):
        request = PandaGripperClient.interfaces['connect_gripper'].Request()
        self.future = self.client_names['connect_gripper'].call_async(request)

        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


    def apply_commands(self, width):

        request = PandaGripperClient.interfaces['apply_commands_gripper'].Request()

        request.command = PandaGripperCommand(width=width)
        self.future = self.client_names['apply_commands_gripper'].call_async(request)

        return

    def get_sensors(self):
        request = PandaGripperClient.interfaces['get_sensors_gripper'].Request()

        self.future = self.client_names['get_sensors_gripper'].call_async(request)
        rclpy.spin_until_future_complete(self, self.future)

        return self.future.result()

def main():
    gripper = PandaGripperClient()
    if gripper.connect():
        gripper.get_logger().info("Connected to gripper")

if __name__ == '__main__':
    main()
