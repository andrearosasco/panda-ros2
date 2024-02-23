// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panda_interface:srv/ApplyCommandsGripper.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__TRAITS_HPP_
#define PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panda_interface/srv/detail/apply_commands_gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'command'
#include "panda_interface/msg/detail/panda_gripper_command__traits.hpp"

namespace panda_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplyCommandsGripper_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    to_flow_style_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApplyCommandsGripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command:\n";
    to_block_style_yaml(msg.command, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApplyCommandsGripper_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace panda_interface

namespace rosidl_generator_traits
{

[[deprecated("use panda_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_interface::srv::ApplyCommandsGripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_interface::srv::ApplyCommandsGripper_Request & msg)
{
  return panda_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_interface::srv::ApplyCommandsGripper_Request>()
{
  return "panda_interface::srv::ApplyCommandsGripper_Request";
}

template<>
inline const char * name<panda_interface::srv::ApplyCommandsGripper_Request>()
{
  return "panda_interface/srv/ApplyCommandsGripper_Request";
}

template<>
struct has_fixed_size<panda_interface::srv::ApplyCommandsGripper_Request>
  : std::integral_constant<bool, has_fixed_size<panda_interface::msg::PandaGripperCommand>::value> {};

template<>
struct has_bounded_size<panda_interface::srv::ApplyCommandsGripper_Request>
  : std::integral_constant<bool, has_bounded_size<panda_interface::msg::PandaGripperCommand>::value> {};

template<>
struct is_message<panda_interface::srv::ApplyCommandsGripper_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace panda_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplyCommandsGripper_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApplyCommandsGripper_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApplyCommandsGripper_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace panda_interface

namespace rosidl_generator_traits
{

[[deprecated("use panda_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_interface::srv::ApplyCommandsGripper_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_interface::srv::ApplyCommandsGripper_Response & msg)
{
  return panda_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_interface::srv::ApplyCommandsGripper_Response>()
{
  return "panda_interface::srv::ApplyCommandsGripper_Response";
}

template<>
inline const char * name<panda_interface::srv::ApplyCommandsGripper_Response>()
{
  return "panda_interface/srv/ApplyCommandsGripper_Response";
}

template<>
struct has_fixed_size<panda_interface::srv::ApplyCommandsGripper_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panda_interface::srv::ApplyCommandsGripper_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panda_interface::srv::ApplyCommandsGripper_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<panda_interface::srv::ApplyCommandsGripper>()
{
  return "panda_interface::srv::ApplyCommandsGripper";
}

template<>
inline const char * name<panda_interface::srv::ApplyCommandsGripper>()
{
  return "panda_interface/srv/ApplyCommandsGripper";
}

template<>
struct has_fixed_size<panda_interface::srv::ApplyCommandsGripper>
  : std::integral_constant<
    bool,
    has_fixed_size<panda_interface::srv::ApplyCommandsGripper_Request>::value &&
    has_fixed_size<panda_interface::srv::ApplyCommandsGripper_Response>::value
  >
{
};

template<>
struct has_bounded_size<panda_interface::srv::ApplyCommandsGripper>
  : std::integral_constant<
    bool,
    has_bounded_size<panda_interface::srv::ApplyCommandsGripper_Request>::value &&
    has_bounded_size<panda_interface::srv::ApplyCommandsGripper_Response>::value
  >
{
};

template<>
struct is_service<panda_interface::srv::ApplyCommandsGripper>
  : std::true_type
{
};

template<>
struct is_service_request<panda_interface::srv::ApplyCommandsGripper_Request>
  : std::true_type
{
};

template<>
struct is_service_response<panda_interface::srv::ApplyCommandsGripper_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__TRAITS_HPP_
