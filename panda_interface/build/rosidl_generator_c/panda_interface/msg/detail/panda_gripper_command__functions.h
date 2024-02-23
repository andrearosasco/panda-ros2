// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from panda_interface:msg/PandaGripperCommand.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__FUNCTIONS_H_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "panda_interface/msg/rosidl_generator_c__visibility_control.h"

#include "panda_interface/msg/detail/panda_gripper_command__struct.h"

/// Initialize msg/PandaGripperCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * panda_interface__msg__PandaGripperCommand
 * )) before or use
 * panda_interface__msg__PandaGripperCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
bool
panda_interface__msg__PandaGripperCommand__init(panda_interface__msg__PandaGripperCommand * msg);

/// Finalize msg/PandaGripperCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
void
panda_interface__msg__PandaGripperCommand__fini(panda_interface__msg__PandaGripperCommand * msg);

/// Create msg/PandaGripperCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * panda_interface__msg__PandaGripperCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
panda_interface__msg__PandaGripperCommand *
panda_interface__msg__PandaGripperCommand__create();

/// Destroy msg/PandaGripperCommand message.
/**
 * It calls
 * panda_interface__msg__PandaGripperCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
void
panda_interface__msg__PandaGripperCommand__destroy(panda_interface__msg__PandaGripperCommand * msg);

/// Check for msg/PandaGripperCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
bool
panda_interface__msg__PandaGripperCommand__are_equal(const panda_interface__msg__PandaGripperCommand * lhs, const panda_interface__msg__PandaGripperCommand * rhs);

/// Copy a msg/PandaGripperCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
bool
panda_interface__msg__PandaGripperCommand__copy(
  const panda_interface__msg__PandaGripperCommand * input,
  panda_interface__msg__PandaGripperCommand * output);

/// Initialize array of msg/PandaGripperCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * panda_interface__msg__PandaGripperCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
bool
panda_interface__msg__PandaGripperCommand__Sequence__init(panda_interface__msg__PandaGripperCommand__Sequence * array, size_t size);

/// Finalize array of msg/PandaGripperCommand messages.
/**
 * It calls
 * panda_interface__msg__PandaGripperCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
void
panda_interface__msg__PandaGripperCommand__Sequence__fini(panda_interface__msg__PandaGripperCommand__Sequence * array);

/// Create array of msg/PandaGripperCommand messages.
/**
 * It allocates the memory for the array and calls
 * panda_interface__msg__PandaGripperCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
panda_interface__msg__PandaGripperCommand__Sequence *
panda_interface__msg__PandaGripperCommand__Sequence__create(size_t size);

/// Destroy array of msg/PandaGripperCommand messages.
/**
 * It calls
 * panda_interface__msg__PandaGripperCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
void
panda_interface__msg__PandaGripperCommand__Sequence__destroy(panda_interface__msg__PandaGripperCommand__Sequence * array);

/// Check for msg/PandaGripperCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
bool
panda_interface__msg__PandaGripperCommand__Sequence__are_equal(const panda_interface__msg__PandaGripperCommand__Sequence * lhs, const panda_interface__msg__PandaGripperCommand__Sequence * rhs);

/// Copy an array of msg/PandaGripperCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_panda_interface
bool
panda_interface__msg__PandaGripperCommand__Sequence__copy(
  const panda_interface__msg__PandaGripperCommand__Sequence * input,
  panda_interface__msg__PandaGripperCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__FUNCTIONS_H_
