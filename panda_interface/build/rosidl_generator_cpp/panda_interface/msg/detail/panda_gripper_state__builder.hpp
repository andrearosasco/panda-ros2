// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_interface:msg/PandaGripperState.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_STATE__BUILDER_HPP_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_interface/msg/detail/panda_gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_interface
{

namespace msg
{

namespace builder
{

class Init_PandaGripperState_width
{
public:
  Init_PandaGripperState_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_interface::msg::PandaGripperState width(::panda_interface::msg::PandaGripperState::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_interface::msg::PandaGripperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_interface::msg::PandaGripperState>()
{
  return panda_interface::msg::builder::Init_PandaGripperState_width();
}

}  // namespace panda_interface

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_STATE__BUILDER_HPP_
