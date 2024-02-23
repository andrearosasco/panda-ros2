// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from panda_interface:srv/Connect.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__SRV__DETAIL__CONNECT__STRUCT_H_
#define PANDA_INTERFACE__SRV__DETAIL__CONNECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Connect in the package panda_interface.
typedef struct panda_interface__srv__Connect_Request
{
  uint8_t structure_needs_at_least_one_member;
} panda_interface__srv__Connect_Request;

// Struct for a sequence of panda_interface__srv__Connect_Request.
typedef struct panda_interface__srv__Connect_Request__Sequence
{
  panda_interface__srv__Connect_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__srv__Connect_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Connect in the package panda_interface.
typedef struct panda_interface__srv__Connect_Response
{
  bool success;
} panda_interface__srv__Connect_Response;

// Struct for a sequence of panda_interface__srv__Connect_Response.
typedef struct panda_interface__srv__Connect_Response__Sequence
{
  panda_interface__srv__Connect_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} panda_interface__srv__Connect_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PANDA_INTERFACE__SRV__DETAIL__CONNECT__STRUCT_H_
