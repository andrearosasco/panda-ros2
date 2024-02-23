// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from panda_interface:msg/PandaCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "panda_interface/msg/detail/panda_command__rosidl_typesupport_introspection_c.h"
#include "panda_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "panda_interface/msg/detail/panda_command__functions.h"
#include "panda_interface/msg/detail/panda_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_interface__msg__PandaCommand__init(message_memory);
}

void panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_fini_function(void * message_memory)
{
  panda_interface__msg__PandaCommand__fini(message_memory);
}

size_t panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__size_function__PandaCommand__position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_const_function__PandaCommand__position(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_function__PandaCommand__position(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__fetch_function__PandaCommand__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_const_function__PandaCommand__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__assign_function__PandaCommand__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_function__PandaCommand__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__size_function__PandaCommand__velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_const_function__PandaCommand__velocity(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_function__PandaCommand__velocity(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__fetch_function__PandaCommand__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_const_function__PandaCommand__velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__assign_function__PandaCommand__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_function__PandaCommand__velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_message_member_array[2] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(panda_interface__msg__PandaCommand, position),  // bytes offset in struct
    NULL,  // default value
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__size_function__PandaCommand__position,  // size() function pointer
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_const_function__PandaCommand__position,  // get_const(index) function pointer
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_function__PandaCommand__position,  // get(index) function pointer
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__fetch_function__PandaCommand__position,  // fetch(index, &value) function pointer
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__assign_function__PandaCommand__position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(panda_interface__msg__PandaCommand, velocity),  // bytes offset in struct
    NULL,  // default value
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__size_function__PandaCommand__velocity,  // size() function pointer
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_const_function__PandaCommand__velocity,  // get_const(index) function pointer
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__get_function__PandaCommand__velocity,  // get(index) function pointer
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__fetch_function__PandaCommand__velocity,  // fetch(index, &value) function pointer
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__assign_function__PandaCommand__velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_message_members = {
  "panda_interface__msg",  // message namespace
  "PandaCommand",  // message name
  2,  // number of fields
  sizeof(panda_interface__msg__PandaCommand),
  panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_message_member_array,  // message members
  panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_message_type_support_handle = {
  0,
  &panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_interface, msg, PandaCommand)() {
  if (!panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_message_type_support_handle.typesupport_identifier) {
    panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_interface__msg__PandaCommand__rosidl_typesupport_introspection_c__PandaCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
