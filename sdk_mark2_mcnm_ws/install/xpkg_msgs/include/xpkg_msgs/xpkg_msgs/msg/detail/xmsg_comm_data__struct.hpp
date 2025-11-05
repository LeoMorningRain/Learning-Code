// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xpkg_msgs:msg/XmsgCommData.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__STRUCT_HPP_
#define XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xpkg_msgs__msg__XmsgCommData __attribute__((deprecated))
#else
# define DEPRECATED__xpkg_msgs__msg__XmsgCommData __declspec(deprecated)
#endif

namespace xpkg_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct XmsgCommData_
{
  using Type = XmsgCommData_<ContainerAllocator>;

  explicit XmsgCommData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id_c = 0;
      this->id_t = 0;
      this->id_n = 0;
      this->id_f = 0;
      this->len = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit XmsgCommData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc),
    time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id_c = 0;
      this->id_t = 0;
      this->id_n = 0;
      this->id_f = 0;
      this->len = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _id_c_type =
    uint8_t;
  _id_c_type id_c;
  using _id_t_type =
    uint8_t;
  _id_t_type id_t;
  using _id_n_type =
    uint8_t;
  _id_n_type id_n;
  using _id_f_type =
    uint8_t;
  _id_f_type id_f;
  using _len_type =
    uint8_t;
  _len_type len;
  using _data_type =
    std::array<uint8_t, 8>;
  _data_type data;
  using _time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _time_type time;

  // setters for named parameter idiom
  Type & set__id_c(
    const uint8_t & _arg)
  {
    this->id_c = _arg;
    return *this;
  }
  Type & set__id_t(
    const uint8_t & _arg)
  {
    this->id_t = _arg;
    return *this;
  }
  Type & set__id_n(
    const uint8_t & _arg)
  {
    this->id_n = _arg;
    return *this;
  }
  Type & set__id_f(
    const uint8_t & _arg)
  {
    this->id_f = _arg;
    return *this;
  }
  Type & set__len(
    const uint8_t & _arg)
  {
    this->len = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 8> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xpkg_msgs::msg::XmsgCommData_<ContainerAllocator> *;
  using ConstRawPtr =
    const xpkg_msgs::msg::XmsgCommData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xpkg_msgs::msg::XmsgCommData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xpkg_msgs::msg::XmsgCommData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xpkg_msgs::msg::XmsgCommData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xpkg_msgs::msg::XmsgCommData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xpkg_msgs::msg::XmsgCommData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xpkg_msgs::msg::XmsgCommData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xpkg_msgs::msg::XmsgCommData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xpkg_msgs::msg::XmsgCommData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xpkg_msgs__msg__XmsgCommData
    std::shared_ptr<xpkg_msgs::msg::XmsgCommData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xpkg_msgs__msg__XmsgCommData
    std::shared_ptr<xpkg_msgs::msg::XmsgCommData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const XmsgCommData_ & other) const
  {
    if (this->id_c != other.id_c) {
      return false;
    }
    if (this->id_t != other.id_t) {
      return false;
    }
    if (this->id_n != other.id_n) {
      return false;
    }
    if (this->id_f != other.id_f) {
      return false;
    }
    if (this->len != other.len) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const XmsgCommData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct XmsgCommData_

// alias to use template instance with default allocator
using XmsgCommData =
  xpkg_msgs::msg::XmsgCommData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xpkg_msgs

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__STRUCT_HPP_
