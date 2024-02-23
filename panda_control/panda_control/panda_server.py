from dataclasses import dataclass
from panda_interface.srv import ApplyCommands, Connect, GetSensors, Close, GetSensorsGripper, ApplyCommandsGripper, ConnectGripper

import numpy as np

from panda_py.controllers import JointPosition
from panda_py.libfranka import Gripper
import panda_py

import rclpy
from rclpy.node import Node
from panda_interface.msg import PandaState, PandaGripperState

class PandaServer(Node):

    kp = np.array([40, 30, 50, 25, 35, 25, 10])
    kd = np.array([4, 6, 5, 5, 3, 2, 1])
    ip = "172.16.0.2"

    def __init__(self):
        super().__init__('panda_server')

        self.create_service(ApplyCommands, 'apply_commands', self.apply_commands)
        self.create_service(GetSensors, 'get_sensors', self.get_sensors)
        self.create_service(Connect, 'connect', self.connect)
        self.create_service(Close, 'close', self.close)

        self.create_service(GetSensorsGripper, 'get_sensors_gripper', self.get_sensors_gripper)
        self.create_service(ApplyCommandsGripper, 'apply_commands_gripper', self.apply_commands_gripper)
        self.create_service(ConnectGripper, 'connect_gripper', self.connect_gripper)

    def apply_commands(self, request, response):
        # self.get_logger().info(f'Moving end effector to: {request.command}')
        gain = request.command.gain

        self.controller.set_control(request.command.position)
        self.controller.set_stiffness(self.kp * gain)
        self.controller.set_damping(self.kd * gain)

        response.success = True
        return response

    def get_sensors(self, request, response):
        state = self.panda.get_state()
        response.state = PandaState(position=state.q, velocity=state.dq)

        return response

    def connect(self, request, response):

        try:
            self.panda = panda_py.Panda(self.ip)

            self.panda.get_robot().set_collision_behavior(
                lower_torque_thresholds_acceleration=np.array([20.0, 20.0, 18.0, 18.0, 16.0, 14.0, 12.0])*2,
                upper_torque_thresholds_acceleration=np.array([20.0, 20.0, 18.0, 18.0, 16.0, 14.0, 12.0])*2,
                lower_torque_thresholds_nominal=np.array([20.0, 20.0, 18.0, 18.0, 16.0, 14.0, 12.0])*2,
                upper_torque_thresholds_nominal=np.array([20.0, 20.0, 18.0, 18.0, 16.0, 14.0, 12.0])*2,
                lower_force_thresholds_acceleration=np.array([20.0, 20.0, 20.0, 25.0, 25.0, 25.0])*2,
                upper_force_thresholds_acceleration=np.array([20.0, 20.0, 20.0, 25.0, 25.0, 25.0])*2,
                lower_force_thresholds_nominal=np.array([20.0, 20.0, 20.0, 25.0, 25.0, 25.0])*2,
                upper_force_thresholds_nominal=np.array([20.0, 20.0, 20.0, 25.0, 25.0, 25.0])*2
            )

            self.controller = JointPosition(stiffness=self.kp * 10, damping=self.kd * 10)
            self.panda.start_controller(self.controller)
            self.controller.set_control(self.panda.get_state().q)

            self.get_logger().info(f'Connected to panda@{self.ip}')
            response.success = True
        except RuntimeError:
            self.get_logger().info(f'Connection to panda@{self.ip} failed')
            response.success = False

        return response

    def get_sensors_gripper(self, request, response):
        response.state = PandaGripperState(width=self.gripper.read_once().width)
        return response


    def apply_commands_gripper(self, request, response):
        # self.get_logger().info(f'Moving gripper at width: {request.command.width}')
        self.gripper.move(request.command.width, speed=0.1)
        response.success = True
        return response

    def connect_gripper(self, request, response):
        self.gripper = Gripper(self.ip)
        response.success = True
        return response

    def close(self, request, response):
        self.panda.stop_controller()
        exit(0)





def main():
    rclpy.init()

    minimal_service = PandaServer()
    rclpy.spin(minimal_service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
