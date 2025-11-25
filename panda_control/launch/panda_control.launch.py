from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='panda_control',
            executable='panda_server',
            name='panda_server',
            output='screen'
        ),
        Node(
            package='panda_control',
            executable='panda_gripper_server',
            name='panda_gripper_server',
            output='screen'
        )
    ])
