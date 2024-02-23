// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_interface:srv/ApplyCommands.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS__STRUCT_H_
#define PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS__STRUCT_H_

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
#include "panda_interface/msg/detail/panda_command__struct.h"

/// Struct defined in srv/ApplyCommands in the package panda_interface.
typedef struct panda_interface__srv__ApplyCommands_Request
{
  panda_interface__msg__PandaCommand command;
} panda_interface__srv__ApplyCommands_Request;

// Struct for a sequence of panda_interface__srv__ApplyCommands_Request.
typedef struct panda_interface__srv__ApplyCommands_Request__Sequence
{
  panda_interface__srv__ApplyCommands_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__srv__ApplyCommands_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ApplyCommands in the package panda_interface.
typedef struct panda_interface__srv__ApplyCommands_Response
{
  bool success;
} panda_interface__srv__ApplyCommands_Response;

// Struct for a sequence of panda_interface__srv__ApplyCommands_Response.
typedef struct panda_interface__srv__ApplyCommands_Response__Sequence
{
  panda_interface__srv__ApplyCommands_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__srv__ApplyCommands_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS__STRUCT_H_
