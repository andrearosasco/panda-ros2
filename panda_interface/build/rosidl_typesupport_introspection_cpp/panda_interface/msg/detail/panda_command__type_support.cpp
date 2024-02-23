// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from panda_interface:msg/PandaCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "panda_interface/msg/detail/panda_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace panda_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PandaCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) panda_interface::msg::PandaCommand(_init);
}

void PandaCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<panda_interface::msg::PandaCommand *>(message_memory);
  typed_message->~PandaCommand();
}

size_t size_function__PandaCommand__position(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__PandaCommand__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__PandaCommand__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__PandaCommand__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PandaCommand__position(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PandaCommand__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PandaCommand__position(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__PandaCommand__velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__PandaCommand__velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__PandaCommand__velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__PandaCommand__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PandaCommand__velocity(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PandaCommand__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PandaCommand__velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PandaCommand_message_member_array[2] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(panda_interface::msg::PandaCommand, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__PandaCommand__position,  // size() function pointer
    get_const_function__PandaCommand__position,  // get_const(index) function pointer
    get_function__PandaCommand__position,  // get(index) function pointer
    fetch_function__PandaCommand__position,  // fetch(index, &value) function pointer
    assign_function__PandaCommand__position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(panda_interface::msg::PandaCommand, velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__PandaCommand__velocity,  // size() function pointer
    get_const_function__PandaCommand__velocity,  // get_const(index) function pointer
    get_function__PandaCommand__velocity,  // get(index) function pointer
    fetch_function__PandaCommand__velocity,  // fetch(index, &value) function pointer
    assign_function__PandaCommand__velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PandaCommand_message_members = {
  "panda_interface::msg",  // message namespace
  "PandaCommand",  // message name
  2,  // number of fields
  sizeof(panda_interface::msg::PandaCommand),
  PandaCommand_message_member_array,  // message members
  PandaCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  PandaCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PandaCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PandaCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace panda_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<panda_interface::msg::PandaCommand>()
{
  return &::panda_interface::msg::rosidl_typesupport_introspection_cpp::PandaCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panda_interface, msg, PandaCommand)() {
  return &::panda_interface::msg::rosidl_typesupport_introspection_cpp::PandaCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
