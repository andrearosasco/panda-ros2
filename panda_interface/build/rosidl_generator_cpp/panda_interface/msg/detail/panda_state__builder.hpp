// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_interface:msg/PandaState.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__BUILDER_HPP_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_interface/msg/detail/panda_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_interface
{

namespace msg
{

namespace builder
{

class Init_PandaState_velocity
{
public:
  explicit Init_PandaState_velocity(::panda_interface::msg::PandaState & msg)
  : msg_(msg)
  {}
  ::panda_interface::msg::PandaState velocity(::panda_interface::msg::PandaState::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_interface::msg::PandaState msg_;
};

class Init_PandaState_position
{
public:
  Init_PandaState_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PandaState_velocity position(::panda_interface::msg::PandaState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PandaState_velocity(msg_);
  }

private:
  ::panda_interface::msg::PandaState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_interface::msg::PandaState>()
{
  return panda_interface::msg::builder::Init_PandaState_position();
}

}  // namespace panda_interface

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__BUILDER_HPP_
