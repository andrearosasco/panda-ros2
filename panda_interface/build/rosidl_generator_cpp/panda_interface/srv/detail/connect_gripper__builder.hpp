// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_interface:srv/ConnectGripper.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__SRV__DETAIL__CONNECT_GRIPPER__BUILDER_HPP_
#define PANDA_INTERFACE__SRV__DETAIL__CONNECT_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_interface/srv/detail/connect_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_interface
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_interface::srv::ConnectGripper_Request>()
{
  return ::panda_interface::srv::ConnectGripper_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace panda_interface


namespace panda_interface
{

namespace srv
{

namespace builder
{

class Init_ConnectGripper_Response_success
{
public:
  Init_ConnectGripper_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_interface::srv::ConnectGripper_Response success(::panda_interface::srv::ConnectGripper_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_interface::srv::ConnectGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_interface::srv::ConnectGripper_Response>()
{
  return panda_interface::srv::builder::Init_ConnectGripper_Response_success();
}

}  // namespace panda_interface

#endif  // PANDA_INTERFACE__SRV__DETAIL__CONNECT_GRIPPER__BUILDER_HPP_
