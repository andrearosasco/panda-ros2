// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_interface:msg/PandaGripperState.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_STATE__STRUCT_H_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PandaGripperState in the package panda_interface.
typedef struct panda_interface__msg__PandaGripperState
{
  float width;
} panda_interface__msg__PandaGripperState;

// Struct for a sequence of panda_interface__msg__PandaGripperState.
typedef struct panda_interface__msg__PandaGripperState__Sequence
{
  panda_interface__msg__PandaGripperState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__msg__PandaGripperState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_STATE__STRUCT_H_
