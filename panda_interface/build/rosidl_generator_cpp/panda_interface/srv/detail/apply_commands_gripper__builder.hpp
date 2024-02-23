// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_interface:srv/ApplyCommandsGripper.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__BUILDER_HPP_
#define PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_interface/srv/detail/apply_commands_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_interface
{

namespace srv
{

namespace builder
{

class Init_ApplyCommandsGripper_Request_command
{
public:
  Init_ApplyCommandsGripper_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_interface::srv::ApplyCommandsGripper_Request command(::panda_interface::srv::ApplyCommandsGripper_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_interface::srv::ApplyCommandsGripper_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_interface::srv::ApplyCommandsGripper_Request>()
{
  return panda_interface::srv::builder::Init_ApplyCommandsGripper_Request_command();
}

}  // namespace panda_interface


namespace panda_interface
{

namespace srv
{

namespace builder
{

class Init_ApplyCommandsGripper_Response_success
{
public:
  Init_ApplyCommandsGripper_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_interface::srv::ApplyCommandsGripper_Response success(::panda_interface::srv::ApplyCommandsGripper_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_interface::srv::ApplyCommandsGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_interface::srv::ApplyCommandsGripper_Response>()
{
  return panda_interface::srv::builder::Init_ApplyCommandsGripper_Response_success();
}

}  // namespace panda_interface

#endif  // PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__BUILDER_HPP_
