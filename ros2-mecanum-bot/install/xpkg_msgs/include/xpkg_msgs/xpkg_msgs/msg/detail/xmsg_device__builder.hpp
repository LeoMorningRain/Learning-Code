// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xpkg_msgs:msg/XmsgDevice.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__BUILDER_HPP_
#define XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xpkg_msgs/msg/detail/xmsg_device__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xpkg_msgs
{

namespace msg
{

namespace builder
{

class Init_XmsgDevice_dev_enable
{
public:
  explicit Init_XmsgDevice_dev_enable(::xpkg_msgs::msg::XmsgDevice & msg)
  : msg_(msg)
  {}
  ::xpkg_msgs::msg::XmsgDevice dev_enable(::xpkg_msgs::msg::XmsgDevice::_dev_enable_type arg)
  {
    msg_.dev_enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgDevice msg_;
};

class Init_XmsgDevice_dev_number
{
public:
  explicit Init_XmsgDevice_dev_number(::xpkg_msgs::msg::XmsgDevice & msg)
  : msg_(msg)
  {}
  Init_XmsgDevice_dev_enable dev_number(::xpkg_msgs::msg::XmsgDevice::_dev_number_type arg)
  {
    msg_.dev_number = std::move(arg);
    return Init_XmsgDevice_dev_enable(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgDevice msg_;
};

class Init_XmsgDevice_dev_type
{
public:
  explicit Init_XmsgDevice_dev_type(::xpkg_msgs::msg::XmsgDevice & msg)
  : msg_(msg)
  {}
  Init_XmsgDevice_dev_number dev_type(::xpkg_msgs::msg::XmsgDevice::_dev_type_type arg)
  {
    msg_.dev_type = std::move(arg);
    return Init_XmsgDevice_dev_number(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgDevice msg_;
};

class Init_XmsgDevice_dev_class
{
public:
  Init_XmsgDevice_dev_class()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_XmsgDevice_dev_type dev_class(::xpkg_msgs::msg::XmsgDevice::_dev_class_type arg)
  {
    msg_.dev_class = std::move(arg);
    return Init_XmsgDevice_dev_type(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgDevice msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xpkg_msgs::msg::XmsgDevice>()
{
  return xpkg_msgs::msg::builder::Init_XmsgDevice_dev_class();
}

}  // namespace xpkg_msgs

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__BUILDER_HPP_
