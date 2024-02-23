// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panda_interface:srv/GetSensorsGripper.idl
// generated code does not contain a copyright notice

#ifndef PANDA_INTERFACE__SRV__DETAIL__GET_SENSORS_GRIPPER__STRUCT_HPP_
#define PANDA_INTERFACE__SRV__DETAIL__GET_SENSORS_GRIPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__panda_interface__srv__GetSensorsGripper_Request __attribute__((deprecated))
#else
# define DEPRECATED__panda_interface__srv__GetSensorsGripper_Request __declspec(deprecated)
#endif

namespace panda_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSensorsGripper_Request_
{
  using Type = GetSensorsGripper_Request_<ContainerAllocator>;

  explicit GetSensorsGripper_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetSensorsGripper_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_interface__srv__GetSensorsGripper_Request
    std::shared_ptr<panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_interface__srv__GetSensorsGripper_Request
    std::shared_ptr<panda_interface::srv::GetSensorsGripper_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSensorsGripper_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSensorsGripper_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSensorsGripper_Request_

// alias to use template instance with default allocator
using GetSensorsGripper_Request =
  panda_interface::srv::GetSensorsGripper_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_interface


// Include directives for member types
// Member 'state'
#include "panda_interface/msg/detail/panda_gripper_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__panda_interface__srv__GetSensorsGripper_Response __attribute__((deprecated))
#else
# define DEPRECATED__panda_interface__srv__GetSensorsGripper_Response __declspec(deprecated)
#endif

namespace panda_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetSensorsGripper_Response_
{
  using Type = GetSensorsGripper_Response_<ContainerAllocator>;

  explicit GetSensorsGripper_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    (void)_init;
  }

  explicit GetSensorsGripper_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _state_type =
    panda_interface::msg::PandaGripperState_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const panda_interface::msg::PandaGripperState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_interface__srv__GetSensorsGripper_Response
    std::shared_ptr<panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_interface__srv__GetSensorsGripper_Response
    std::shared_ptr<panda_interface::srv::GetSensorsGripper_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetSensorsGripper_Response_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetSensorsGripper_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetSensorsGripper_Response_

// alias to use template instance with default allocator
using GetSensorsGripper_Response =
  panda_interface::srv::GetSensorsGripper_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_interface

namespace panda_interface
{

namespace srv
{

struct GetSensorsGripper
{
  using Request = panda_interface::srv::GetSensorsGripper_Request;
  using Response = panda_interface::srv::GetSensorsGripper_Response;
};

}  // namespace srv

}  // namespace panda_interface

#endif  // PANDA_INTERFACE__SRV__DETAIL__GET_SENSORS_GRIPPER__STRUCT_HPP_
