// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_interface:srv/ApplyCommandsGripper.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__STRUCT_H_
#define PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "panda_interface/msg/detail/panda_gripper_command__struct.h"

/// Struct defined in srv/ApplyCommandsGripper in the package panda_interface.
typedef struct panda_interface__srv__ApplyCommandsGripper_Request
{
  panda_interface__msg__PandaGripperCommand command;
} panda_interface__srv__ApplyCommandsGripper_Request;

// Struct for a sequence of panda_interface__srv__ApplyCommandsGripper_Request.
typedef struct panda_interface__srv__ApplyCommandsGripper_Request__Sequence
{
  panda_interface__srv__ApplyCommandsGripper_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__srv__ApplyCommandsGripper_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ApplyCommandsGripper in the package panda_interface.
typedef struct panda_interface__srv__ApplyCommandsGripper_Response
{
  bool success;
} panda_interface__srv__ApplyCommandsGripper_Response;

// Struct for a sequence of panda_interface__srv__ApplyCommandsGripper_Response.
typedef struct panda_interface__srv__ApplyCommandsGripper_Response__Sequence
{
  panda_interface__srv__ApplyCommandsGripper_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__srv__ApplyCommandsGripper_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__STRUCT_H_
