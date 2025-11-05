// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xpkg_msgs:msg/XmsgDeviceList.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__BUILDER_HPP_
#define XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xpkg_msgs/msg/detail/xmsg_device_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xpkg_msgs
{

namespace msg
{

namespace builder
{

class Init_XmsgDeviceList_dev_list
{
public:
  explicit Init_XmsgDeviceList_dev_list(::xpkg_msgs::msg::XmsgDeviceList & msg)
  : msg_(msg)
  {}
  ::xpkg_msgs::msg::XmsgDeviceList dev_list(::xpkg_msgs::msg::XmsgDeviceList::_dev_list_type arg)
  {
    msg_.dev_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgDeviceList msg_;
};

class Init_XmsgDeviceList_dev_count
{
public:
  Init_XmsgDeviceList_dev_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_XmsgDeviceList_dev_list dev_count(::xpkg_msgs::msg::XmsgDeviceList::_dev_count_type arg)
  {
    msg_.dev_count = std::move(arg);
    return Init_XmsgDeviceList_dev_list(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgDeviceList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xpkg_msgs::msg::XmsgDeviceList>()
{
  return xpkg_msgs::msg::builder::Init_XmsgDeviceList_dev_count();
}

}  // namespace xpkg_msgs

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__BUILDER_HPP_
