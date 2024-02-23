// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panda_interface:msg/PandaGripperCommand.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__STRUCT_HPP_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__panda_interface__msg__PandaGripperCommand __attribute__((deprecated))
#else
# define DEPRECATED__panda_interface__msg__PandaGripperCommand __declspec(deprecated)
#endif

namespace panda_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PandaGripperCommand_
{
  using Type = PandaGripperCommand_<ContainerAllocator>;

  explicit PandaGripperCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0f;
    }
  }

  explicit PandaGripperCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0f;
    }
  }

  // field types and members
  using _width_type =
    float;
  _width_type width;

  // setters for named parameter idiom
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_interface::msg::PandaGripperCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_interface::msg::PandaGripperCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_interface::msg::PandaGripperCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_interface::msg::PandaGripperCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_interface::msg::PandaGripperCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_interface::msg::PandaGripperCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_interface::msg::PandaGripperCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_interface::msg::PandaGripperCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_interface::msg::PandaGripperCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_interface::msg::PandaGripperCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_interface__msg__PandaGripperCommand
    std::shared_ptr<panda_interface::msg::PandaGripperCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_interface__msg__PandaGripperCommand
    std::shared_ptr<panda_interface::msg::PandaGripperCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PandaGripperCommand_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    return true;
  }
  bool operator!=(const PandaGripperCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PandaGripperCommand_

// alias to use template instance with default allocator
using PandaGripperCommand =
  panda_interface::msg::PandaGripperCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace panda_interface

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_GRIPPER_COMMAND__STRUCT_HPP_
