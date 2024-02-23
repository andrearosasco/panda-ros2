// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panda_interface:msg/PandaState.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__STRUCT_HPP_
#define PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__panda_interface__msg__PandaState __attribute__((deprecated))
#else
# define DEPRECATED__panda_interface__msg__PandaState __declspec(deprecated)
#endif

namespace panda_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PandaState_
{
  using Type = PandaState_<ContainerAllocator>;

  explicit PandaState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->velocity.begin(), this->velocity.end(), 0.0);
    }
  }

  explicit PandaState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc),
    velocity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 7>::iterator, double>(this->position.begin(), this->position.end(), 0.0);
      std::fill<typename std::array<double, 7>::iterator, double>(this->velocity.begin(), this->velocity.end(), 0.0);
    }
  }

  // field types and members
  using _position_type =
    std::array<double, 7>;
  _position_type position;
  using _velocity_type =
    std::array<double, 7>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__position(
    const std::array<double, 7> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::array<double, 7> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_interface::msg::PandaState_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_interface::msg::PandaState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_interface::msg::PandaState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_interface::msg::PandaState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_interface::msg::PandaState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_interface::msg::PandaState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_interface::msg::PandaState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_interface::msg::PandaState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_interface::msg::PandaState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_interface::msg::PandaState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_interface__msg__PandaState
    std::shared_ptr<panda_interface::msg::PandaState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_interface__msg__PandaState
    std::shared_ptr<panda_interface::msg::PandaState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PandaState_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const PandaState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PandaState_

// alias to use template instance with default allocator
using PandaState =
  panda_interface::msg::PandaState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace panda_interface

#endif  // PANDA_INTERFACE__MSG__DETAIL__PANDA_STATE__STRUCT_HPP_
