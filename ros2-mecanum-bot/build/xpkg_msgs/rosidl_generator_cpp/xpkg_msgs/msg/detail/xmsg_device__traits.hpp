// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xpkg_msgs:msg/XmsgDevice.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__TRAITS_HPP_
#define XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xpkg_msgs/msg/detail/xmsg_device__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xpkg_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const XmsgDevice & msg,
  std::ostream & out)
{
  out << "{";
  // member: dev_class
  {
    out << "dev_class: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_class, out);
    out << ", ";
  }

  // member: dev_type
  {
    out << "dev_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_type, out);
    out << ", ";
  }

  // member: dev_number
  {
    out << "dev_number: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_number, out);
    out << ", ";
  }

  // member: dev_enable
  {
    out << "dev_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const XmsgDevice & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dev_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dev_class: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_class, out);
    out << "\n";
  }

  // member: dev_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dev_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_type, out);
    out << "\n";
  }

  // member: dev_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dev_number: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_number, out);
    out << "\n";
  }

  // member: dev_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dev_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const XmsgDevice & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace xpkg_msgs

namespace rosidl_generator_traits
{

[[deprecated("use xpkg_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xpkg_msgs::msg::XmsgDevice & msg,
  std::ostream & out, size_t indentation = 0)
{
  xpkg_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xpkg_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const xpkg_msgs::msg::XmsgDevice & msg)
{
  return xpkg_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xpkg_msgs::msg::XmsgDevice>()
{
  return "xpkg_msgs::msg::XmsgDevice";
}

template<>
inline const char * name<xpkg_msgs::msg::XmsgDevice>()
{
  return "xpkg_msgs/msg/XmsgDevice";
}

template<>
struct has_fixed_size<xpkg_msgs::msg::XmsgDevice>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xpkg_msgs::msg::XmsgDevice>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xpkg_msgs::msg::XmsgDevice>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__TRAITS_HPP_
