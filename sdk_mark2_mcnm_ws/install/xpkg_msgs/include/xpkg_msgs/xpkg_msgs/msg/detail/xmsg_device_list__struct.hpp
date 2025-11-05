// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xpkg_msgs:msg/XmsgDeviceList.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__STRUCT_HPP_
#define XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dev_list'
#include "xpkg_msgs/msg/detail/xmsg_device__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xpkg_msgs__msg__XmsgDeviceList __attribute__((deprecated))
#else
# define DEPRECATED__xpkg_msgs__msg__XmsgDeviceList __declspec(deprecated)
#endif

namespace xpkg_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct XmsgDeviceList_
{
  using Type = XmsgDeviceList_<ContainerAllocator>;

  explicit XmsgDeviceList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dev_count = 0;
    }
  }

  explicit XmsgDeviceList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dev_count = 0;
    }
  }

  // field types and members
  using _dev_count_type =
    uint8_t;
  _dev_count_type dev_count;
  using _dev_list_type =
    std::vector<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator>>>;
  _dev_list_type dev_list;

  // setters for named parameter idiom
  Type & set__dev_count(
    const uint8_t & _arg)
  {
    this->dev_count = _arg;
    return *this;
  }
  Type & set__dev_list(
    const std::vector<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<xpkg_msgs::msg::XmsgDevice_<ContainerAllocator>>> & _arg)
  {
    this->dev_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator> *;
  using ConstRawPtr =
    const xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xpkg_msgs__msg__XmsgDeviceList
    std::shared_ptr<xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xpkg_msgs__msg__XmsgDeviceList
    std::shared_ptr<xpkg_msgs::msg::XmsgDeviceList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const XmsgDeviceList_ & other) const
  {
    if (this->dev_count != other.dev_count) {
      return false;
    }
    if (this->dev_list != other.dev_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const XmsgDeviceList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct XmsgDeviceList_

// alias to use template instance with default allocator
using XmsgDeviceList =
  xpkg_msgs::msg::XmsgDeviceList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xpkg_msgs

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__STRUCT_HPP_
