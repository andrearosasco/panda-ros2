// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panda_interface:msg/PandaState.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__TRAITS_HPP_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panda_interface/msg/detail/panda_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace panda_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const PandaState & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PandaState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PandaState & msg, bool use_flow_style = false)
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
  const panda_interface::msg::PandaState & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const panda_interface::msg::PandaState & msg)
{
  return panda_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<panda_interface::msg::PandaState>()
{
  return "panda_interface::msg::PandaState";
}

template<>
inline const char * name<panda_interface::msg::PandaState>()
{
  return "panda_interface/msg/PandaState";
}

template<>
struct has_fixed_size<panda_interface::msg::PandaState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panda_interface::msg::PandaState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panda_interface::msg::PandaState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__TRAITS_HPP_
