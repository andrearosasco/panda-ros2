// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_interface:msg/PandaCommand.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_COMMAND__BUILDER_HPP_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_interface/msg/detail/panda_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_interface
{

namespace msg
{

namespace builder
{

class Init_PandaCommand_velocity
{
public:
  explicit Init_PandaCommand_velocity(::panda_interface::msg::PandaCommand & msg)
  : msg_(msg)
  {}
  ::panda_interface::msg::PandaCommand velocity(::panda_interface::msg::PandaCommand::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_interface::msg::PandaCommand msg_;
};

class Init_PandaCommand_position
{
public:
  Init_PandaCommand_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PandaCommand_velocity position(::panda_interface::msg::PandaCommand::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PandaCommand_velocity(msg_);
  }

private:
  ::panda_interface::msg::PandaCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_interface::msg::PandaCommand>()
{
  return panda_interface::msg::builder::Init_PandaCommand_position();
}

}  // namespace panda_interface

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_COMMAND__BUILDER_HPP_
