// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_interface:msg/PandaState.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__STRUCT_H_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PandaState in the package panda_interface.
typedef struct panda_interface__msg__PandaState
{
  double position[7];
  double velocity[7];
} panda_interface__msg__PandaState;

// Struct for a sequence of panda_interface__msg__PandaState.
typedef struct panda_interface__msg__PandaState__Sequence
{
  panda_interface__msg__PandaState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__msg__PandaState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__STRUCT_H_
