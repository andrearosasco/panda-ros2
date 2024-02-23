// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_interface:msg/PandaCommand.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_COMMAND__STRUCT_H_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PandaCommand in the package panda_interface.
typedef struct panda_interface__msg__PandaCommand
{
  double position[7];
  double velocity[7];
} panda_interface__msg__PandaCommand;

// Struct for a sequence of panda_interface__msg__PandaCommand.
typedef struct panda_interface__msg__PandaCommand__Sequence
{
  panda_interface__msg__PandaCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__msg__PandaCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_COMMAND__STRUCT_H_
