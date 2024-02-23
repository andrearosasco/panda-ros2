// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_interface:srv/GetSensors.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__SRV__DETAIL__GET_SENSORS__STRUCT_H_
#define PANDA_INTERFACE__SRV__DETAIL__GET_SENSORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetSensors in the package panda_interface.
typedef struct panda_interface__srv__GetSensors_Request
{
  uint8_t structure_needs_at_least_one_member;
} panda_interface__srv__GetSensors_Request;

// Struct for a sequence of panda_interface__srv__GetSensors_Request.
typedef struct panda_interface__srv__GetSensors_Request__Sequence
{
  panda_interface__srv__GetSensors_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__srv__GetSensors_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "panda_interface/msg/detail/panda_state__struct.h"

/// Struct defined in srv/GetSensors in the package panda_interface.
typedef struct panda_interface__srv__GetSensors_Response
{
  panda_interface__msg__PandaState state;
} panda_interface__srv__GetSensors_Response;

// Struct for a sequence of panda_interface__srv__GetSensors_Response.
typedef struct panda_interface__srv__GetSensors_Response__Sequence
{
  panda_interface__srv__GetSensors_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__srv__GetSensors_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_INTERFACE__SRV__DETAIL__GET_SENSORS__STRUCT_H_
