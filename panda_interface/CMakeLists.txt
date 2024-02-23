cmake_minimum_required(VERSION 3.8)
project(panda_interface)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
#### ROS2 Interface Directives ####
set(interface_files
  # Messages
  "msg/PandaCommand.msg"
  "msg/PandaState.msg"

  "msg/PandaGripperCommand.msg"
  "msg/PandaGripperState.msg"
  # Services
  "srv/ApplyCommands.srv"
  "srv/GetSensors.srv"
  "srv/Connect.srv"
  "srv/Close.srv"

  "srv/ApplyCommandsGripper.srv"
  "srv/GetSensorsGripper.srv"
  "srv/ConnectGripper.srv"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${interface_files}
  DEPENDENCIES geometry_msgs
)

ament_export_dependencies(
  rosidl_default_runtime
)
#### ROS2 Interface Directives [END] ####

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
