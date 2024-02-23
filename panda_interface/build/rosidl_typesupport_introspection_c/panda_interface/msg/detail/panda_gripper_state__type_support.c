// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from panda_interface:msg/PandaGripperState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "panda_interface/msg/detail/panda_gripper_state__rosidl_typesupport_introspection_c.h"
#include "panda_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "panda_interface/msg/detail/panda_gripper_state__functions.h"
#include "panda_interface/msg/detail/panda_gripper_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  panda_interface__msg__PandaGripperState__init(message_memory);
}

void panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_fini_function(void * message_memory)
{
  panda_interface__msg__PandaGripperState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_message_member_array[1] = {
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(panda_interface__msg__PandaGripperState, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_message_members = {
  "panda_interface__msg",  // message namespace
  "PandaGripperState",  // message name
  1,  // number of fields
  sizeof(panda_interface__msg__PandaGripperState),
  panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_message_member_array,  // message members
  panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_init_function,  // function to initialize message memory (memory has to be allocated)
  panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_message_type_support_handle = {
  0,
  &panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_panda_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, panda_interface, msg, PandaGripperState)() {
  if (!panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_message_type_support_handle.typesupport_identifier) {
    panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &panda_interface__msg__PandaGripperState__rosidl_typesupport_introspection_c__PandaGripperState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif