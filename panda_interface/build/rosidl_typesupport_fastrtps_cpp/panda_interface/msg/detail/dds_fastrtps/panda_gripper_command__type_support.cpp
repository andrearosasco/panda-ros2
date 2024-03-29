// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from panda_interface:msg/PandaGripperCommand.idl
// generated code does not contain a copyright notice
#include "panda_interface/msg/detail/panda_gripper_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "panda_interface/msg/detail/panda_gripper_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: width
  cdr << ros_message.width;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_panda_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  panda_interface::msg::PandaGripperCommand & ros_message)
{
  // Member: width
  cdr >> ros_message.width;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_panda_interface
get_serialized_size(
  const panda_interface::msg::PandaGripperCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: width
  {
    size_t item_size = sizeof(ros_message.width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_panda_interface
max_serialized_size_PandaGripperCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PandaGripperCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const panda_interface::msg::PandaGripperCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PandaGripperCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<panda_interface::msg::PandaGripperCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PandaGripperCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const panda_interface::msg::PandaGripperCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PandaGripperCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PandaGripperCommand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PandaGripperCommand__callbacks = {
  "panda_interface::msg",
  "PandaGripperCommand",
  _PandaGripperCommand__cdr_serialize,
  _PandaGripperCommand__cdr_deserialize,
  _PandaGripperCommand__get_serialized_size,
  _PandaGripperCommand__max_serialized_size
};

static rosidl_message_type_support_t _PandaGripperCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PandaGripperCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace panda_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_panda_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<panda_interface::msg::PandaGripperCommand>()
{
  return &panda_interface::msg::typesupport_fastrtps_cpp::_PandaGripperCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, panda_interface, msg, PandaGripperCommand)() {
  return &panda_interface::msg::typesupport_fastrtps_cpp::_PandaGripperCommand__handle;
}

#ifdef __cplusplus
}
#endif
