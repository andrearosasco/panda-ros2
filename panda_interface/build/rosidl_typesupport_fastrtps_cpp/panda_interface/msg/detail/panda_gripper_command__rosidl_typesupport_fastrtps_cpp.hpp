// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from panda_interface:msg/PandaGripperCommand.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "panda_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "panda_interface/msg/detail/panda_gripper_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace panda_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_panda_interface
cdr_serialize(
  const panda_interface::msg::PandaGripperCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_panda_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  panda_interface::msg::PandaGripperCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_panda_interface
get_serialized_size(
  const panda_interface::msg::PandaGripperCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_panda_interface
max_serialized_size_PandaGripperCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace panda_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_panda_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, panda_interface, msg, PandaGripperCommand)();

#ifdef __cplusplus
}
#endif

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
