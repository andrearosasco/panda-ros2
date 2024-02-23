// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panda_interface:srv/ApplyCommandsGripper.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__STRUCT_HPP_
#define PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'command'
#include "panda_interface/msg/detail/panda_gripper_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__panda_interface__srv__ApplyCommandsGripper_Request __attribute__((deprecated))
#else
# define DEPRECATED__panda_interface__srv__ApplyCommandsGripper_Request __declspec(deprecated)
#endif

namespace panda_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyCommandsGripper_Request_
{
  using Type = ApplyCommandsGripper_Request_<ContainerAllocator>;

  explicit ApplyCommandsGripper_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_init)
  {
    (void)_init;
  }

  explicit ApplyCommandsGripper_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _command_type =
    panda_interface::msg::PandaGripperCommand_<ContainerAllocator>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const panda_interface::msg::PandaGripperCommand_<ContainerAllocator> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_interface__srv__ApplyCommandsGripper_Request
    std::shared_ptr<panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_interface__srv__ApplyCommandsGripper_Request
    std::shared_ptr<panda_interface::srv::ApplyCommandsGripper_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyCommandsGripper_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyCommandsGripper_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyCommandsGripper_Request_

// alias to use template instance with default allocator
using ApplyCommandsGripper_Request =
  panda_interface::srv::ApplyCommandsGripper_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_interface


#ifndef _WIN32
# define DEPRECATED__panda_interface__srv__ApplyCommandsGripper_Response __attribute__((deprecated))
#else
# define DEPRECATED__panda_interface__srv__ApplyCommandsGripper_Response __declspec(deprecated)
#endif

namespace panda_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyCommandsGripper_Response_
{
  using Type = ApplyCommandsGripper_Response_<ContainerAllocator>;

  explicit ApplyCommandsGripper_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ApplyCommandsGripper_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_interface__srv__ApplyCommandsGripper_Response
    std::shared_ptr<panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_interface__srv__ApplyCommandsGripper_Response
    std::shared_ptr<panda_interface::srv::ApplyCommandsGripper_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyCommandsGripper_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyCommandsGripper_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyCommandsGripper_Response_

// alias to use template instance with default allocator
using ApplyCommandsGripper_Response =
  panda_interface::srv::ApplyCommandsGripper_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_interface

namespace panda_interface
{

namespace srv
{

struct ApplyCommandsGripper
{
  using Request = panda_interface::srv::ApplyCommandsGripper_Request;
  using Response = panda_interface::srv::ApplyCommandsGripper_Response;
};

}  // namespace srv

}  // namespace panda_interface

#endif  // PANDA_INTERFACE__SRV__DETAIL__APPLY_COMMANDS_GRIPPER__STRUCT_HPP_
