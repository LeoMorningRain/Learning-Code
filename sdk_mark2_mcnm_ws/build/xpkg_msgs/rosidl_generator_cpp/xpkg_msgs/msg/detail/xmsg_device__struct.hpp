// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xpkg_msgs:msg/XmsgDevice.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__STRUCT_HPP_
#define XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xpkg_msgs__msg__XmsgDevice __attribute__((deprecated))
#else
# define DEPRECATED__xpkg_msgs__msg__XmsgDevice __declspec(deprecated)
#endif

namespace xpkg_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct XmsgDevice_
{
  using Type = XmsgDevice_<ContainerAllocator>;

  explicit XmsgDevice_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dev_class = 0;
      this->dev_type = 0;
      this->dev_number = 0;
      this->dev_enable = 0;
    }
  }

  explicit XmsgDevice_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dev_class = 0;
      this->dev_type = 0;
      this->dev_number = 0;
      this->dev_enable = 0;
    }
  }

  // field types and members
  using _dev_class_type =
    uint8_t;
  _dev_class_type dev_class;
  using _dev_type_type =
    uint8_t;
  _dev_type_type dev_type;
  using _dev_number_type =
    uint8_t;
  _dev_number_type dev_number;
  using _dev_enable_type =
    uint8_t;
  _dev_enable_type dev_enable;

  // setters for named parameter idiom
  Type & set__dev_class(
    const uint8_t & _arg)
  {
    this->dev_class = _arg;
    return *this;
  }
  Type & set__dev_type(
    const uint8_t & _arg)
  {
    this->dev_type = _arg;
    return *this;
  }
  Type & set__dev_number(
    const uint8_t & _arg)
  {
    this->dev_number = _arg;
    return *this;
  }
  Type & set__dev_enable(
    const uint8_t & _arg)
  {
    this->dev_enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xpkg_msgs::msg::XmsgDevice_<ContainerAllocator> *;
  using ConstRawPtr =
    const xpkg_msgs::msg::XmsgDevice_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xpkg_msgs::msg::XmsgDevice_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xpkg_msgs::msg::XmsgDevice_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xpkg_msgs__msg__XmsgDevice
    std::shared_ptr<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xpkg_msgs__msg__XmsgDevice
    std::shared_ptr<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const XmsgDevice_ & other) const
  {
    if (this->dev_class != other.dev_class) {
      return false;
    }
    if (this->dev_type != other.dev_type) {
      return false;
    }
    if (this->dev_number != other.dev_number) {
      return false;
    }
    if (this->dev_enable != other.dev_enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const XmsgDevice_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct XmsgDevice_

// alias to use template instance with default allocator
using XmsgDevice =
  xpkg_msgs::msg::XmsgDevice_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xpkg_msgs

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__STRUCT_HPP_
