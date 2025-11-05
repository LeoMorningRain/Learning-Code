// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xpkg_msgs:msg/XmsgCommData.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__BUILDER_HPP_
#define XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xpkg_msgs/msg/detail/xmsg_comm_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xpkg_msgs
{

namespace msg
{

namespace builder
{

class Init_XmsgCommData_time
{
public:
  explicit Init_XmsgCommData_time(::xpkg_msgs::msg::XmsgCommData & msg)
  : msg_(msg)
  {}
  ::xpkg_msgs::msg::XmsgCommData time(::xpkg_msgs::msg::XmsgCommData::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgCommData msg_;
};

class Init_XmsgCommData_data
{
public:
  explicit Init_XmsgCommData_data(::xpkg_msgs::msg::XmsgCommData & msg)
  : msg_(msg)
  {}
  Init_XmsgCommData_time data(::xpkg_msgs::msg::XmsgCommData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_XmsgCommData_time(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgCommData msg_;
};

class Init_XmsgCommData_len
{
public:
  explicit Init_XmsgCommData_len(::xpkg_msgs::msg::XmsgCommData & msg)
  : msg_(msg)
  {}
  Init_XmsgCommData_data len(::xpkg_msgs::msg::XmsgCommData::_len_type arg)
  {
    msg_.len = std::move(arg);
    return Init_XmsgCommData_data(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgCommData msg_;
};

class Init_XmsgCommData_id_f
{
public:
  explicit Init_XmsgCommData_id_f(::xpkg_msgs::msg::XmsgCommData & msg)
  : msg_(msg)
  {}
  Init_XmsgCommData_len id_f(::xpkg_msgs::msg::XmsgCommData::_id_f_type arg)
  {
    msg_.id_f = std::move(arg);
    return Init_XmsgCommData_len(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgCommData msg_;
};

class Init_XmsgCommData_id_n
{
public:
  explicit Init_XmsgCommData_id_n(::xpkg_msgs::msg::XmsgCommData & msg)
  : msg_(msg)
  {}
  Init_XmsgCommData_id_f id_n(::xpkg_msgs::msg::XmsgCommData::_id_n_type arg)
  {
    msg_.id_n = std::move(arg);
    return Init_XmsgCommData_id_f(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgCommData msg_;
};

class Init_XmsgCommData_id_t
{
public:
  explicit Init_XmsgCommData_id_t(::xpkg_msgs::msg::XmsgCommData & msg)
  : msg_(msg)
  {}
  Init_XmsgCommData_id_n id_t(::xpkg_msgs::msg::XmsgCommData::_id_t_type arg)
  {
    msg_.id_t = std::move(arg);
    return Init_XmsgCommData_id_n(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgCommData msg_;
};

class Init_XmsgCommData_id_c
{
public:
  Init_XmsgCommData_id_c()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_XmsgCommData_id_t id_c(::xpkg_msgs::msg::XmsgCommData::_id_c_type arg)
  {
    msg_.id_c = std::move(arg);
    return Init_XmsgCommData_id_t(msg_);
  }

private:
  ::xpkg_msgs::msg::XmsgCommData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xpkg_msgs::msg::XmsgCommData>()
{
  return xpkg_msgs::msg::builder::Init_XmsgCommData_id_c();
}

}  // namespace xpkg_msgs

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__BUILDER_HPP_
