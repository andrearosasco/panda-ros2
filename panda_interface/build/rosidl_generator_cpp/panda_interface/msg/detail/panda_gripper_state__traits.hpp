// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panda_interface:msg/PandaGripperState.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_STATE__TRAITS_HPP_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panda_interface/msg/detail/panda_gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace panda_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PandaGripperState & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PandaGripperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PandaGripperState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace panda_interface

namespace rosidl_generator_traits
{

[[deprecated("use panda_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_interface::msg::PandaGripperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const panda_interface::msg::PandaGripperState & msg)
{
  return panda_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<panda_interface::msg::PandaGripperState>()
{
  return "panda_interface::msg::PandaGripperState";
}

template<>
inline const char * name<panda_interface::msg::PandaGripperState>()
{
  return "panda_interface/msg/PandaGripperState";
}

template<>
struct has_fixed_size<panda_interface::msg::PandaGripperState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panda_interface::msg::PandaGripperState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panda_interface::msg::PandaGripperState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_STATE__TRAITS_HPP_
