# panda-ros2
Server and client nodes to control Emika Franka Panda Manipulator with ROS2.

## Conda Installation
1. `git clone https://github.com/andrearosasco/panda-ros2.git`
2. `cd panda-ros2 && colcon build --merge-install --install-base ${CONDA_PREFIX}`

## Dependencies
The panda-server node depends on the python package `panda-py`. You can install the version with the your desired combinations of python and libfranka from:
```
https://github.com/JeanElsner/panda-py
```

## Usage
You can start the panda server node by running `panda_server`.

You can find an example of a simple client [here](https://github.com/andrearosasco/panda-ros2/blob/main/panda_control/panda_control/panda_client.py). You can execute it using the command `panda_client` which will connect to the server and move the arm to a home position. 

> [!WARNING]
> Check the PID controller parameters as they might not be adequate to your setup
