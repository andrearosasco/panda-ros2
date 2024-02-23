// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from panda_interface:srv/ApplyCommands.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "panda_interface/srv/detail/apply_commands__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace panda_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApplyCommands_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApplyCommands_Request_type_support_ids_t;

static const _ApplyCommands_Request_type_support_ids_t _ApplyCommands_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApplyCommands_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApplyCommands_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApplyCommands_Request_type_support_symbol_names_t _ApplyCommands_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, panda_interface, srv, ApplyCommands_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panda_interface, srv, ApplyCommands_Request)),
  }
};

typedef struct _ApplyCommands_Request_type_support_data_t
{
  void * data[2];
} _ApplyCommands_Request_type_support_data_t;

static _ApplyCommands_Request_type_support_data_t _ApplyCommands_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApplyCommands_Request_message_typesupport_map = {
  2,
  "panda_interface",
  &_ApplyCommands_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ApplyCommands_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ApplyCommands_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApplyCommands_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApplyCommands_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace panda_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<panda_interface::srv::ApplyCommands_Request>()
{
  return &::panda_interface::srv::rosidl_typesupport_cpp::ApplyCommands_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, panda_interface, srv, ApplyCommands_Request)() {
  return get_message_type_support_handle<panda_interface::srv::ApplyCommands_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "panda_interface/srv/detail/apply_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace panda_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApplyCommands_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApplyCommands_Response_type_support_ids_t;

static const _ApplyCommands_Response_type_support_ids_t _ApplyCommands_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApplyCommands_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApplyCommands_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApplyCommands_Response_type_support_symbol_names_t _ApplyCommands_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, panda_interface, srv, ApplyCommands_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panda_interface, srv, ApplyCommands_Response)),
  }
};

typedef struct _ApplyCommands_Response_type_support_data_t
{
  void * data[2];
} _ApplyCommands_Response_type_support_data_t;

static _ApplyCommands_Response_type_support_data_t _ApplyCommands_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApplyCommands_Response_message_typesupport_map = {
  2,
  "panda_interface",
  &_ApplyCommands_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ApplyCommands_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ApplyCommands_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ApplyCommands_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApplyCommands_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace panda_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<panda_interface::srv::ApplyCommands_Response>()
{
  return &::panda_interface::srv::rosidl_typesupport_cpp::ApplyCommands_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, panda_interface, srv, ApplyCommands_Response)() {
  return get_message_type_support_handle<panda_interface::srv::ApplyCommands_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "panda_interface/srv/detail/apply_commands__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace panda_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ApplyCommands_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ApplyCommands_type_support_ids_t;

static const _ApplyCommands_type_support_ids_t _ApplyCommands_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ApplyCommands_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ApplyCommands_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ApplyCommands_type_support_symbol_names_t _ApplyCommands_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, panda_interface, srv, ApplyCommands)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, panda_interface, srv, ApplyCommands)),
  }
};

typedef struct _ApplyCommands_type_support_data_t
{
  void * data[2];
} _ApplyCommands_type_support_data_t;

static _ApplyCommands_type_support_data_t _ApplyCommands_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ApplyCommands_service_typesupport_map = {
  2,
  "panda_interface",
  &_ApplyCommands_service_typesupport_ids.typesupport_identifier[0],
  &_ApplyCommands_service_typesupport_symbol_names.symbol_name[0],
  &_ApplyCommands_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ApplyCommands_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ApplyCommands_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace panda_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<panda_interface::srv::ApplyCommands>()
{
  return &::panda_interface::srv::rosidl_typesupport_cpp::ApplyCommands_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
