// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_interface:msg/PandaGripperCommand.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__STRUCT_H_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PandaGripperCommand in the package panda_interface.
typedef struct panda_interface__msg__PandaGripperCommand
{
  float width;
} panda_interface__msg__PandaGripperCommand;

// Struct for a sequence of panda_interface__msg__PandaGripperCommand.
typedef struct panda_interface__msg__PandaGripperCommand__Sequence
{
  panda_interface__msg__PandaGripperCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__msg__PandaGripperCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__STRUCT_H_
