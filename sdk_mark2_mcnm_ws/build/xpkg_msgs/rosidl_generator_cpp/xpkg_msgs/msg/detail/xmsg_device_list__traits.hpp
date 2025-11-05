// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xpkg_msgs:msg/XmsgDeviceList.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__TRAITS_HPP_
#define XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xpkg_msgs/msg/detail/xmsg_device_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dev_list'
#include "xpkg_msgs/msg/detail/xmsg_device__traits.hpp"

namespace xpkg_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const XmsgDeviceList & msg,
  std::ostream & out)
{
  out << "{";
  // member: dev_count
  {
    out << "dev_count: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_count, out);
    out << ", ";
  }

  // member: dev_list
  {
    if (msg.dev_list.size() == 0) {
      out << "dev_list: []";
    } else {
      out << "dev_list: [";
      size_t pending_items = msg.dev_list.size();
      for (auto item : msg.dev_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const XmsgDeviceList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dev_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dev_count: ";
    rosidl_generator_traits::value_to_yaml(msg.dev_count, out);
    out << "\n";
  }

  // member: dev_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dev_list.size() == 0) {
      out << "dev_list: []\n";
    } else {
      out << "dev_list:\n";
      for (auto item : msg.dev_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const XmsgDeviceList & msg, bool use_flow_style = false)
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
  const xpkg_msgs::msg::XmsgDeviceList & msg,
  std::ostream & out, size_t indentation = 0)
{
  xpkg_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xpkg_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const xpkg_msgs::msg::XmsgDeviceList & msg)
{
  return xpkg_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xpkg_msgs::msg::XmsgDeviceList>()
{
  return "xpkg_msgs::msg::XmsgDeviceList";
}

template<>
inline const char * name<xpkg_msgs::msg::XmsgDeviceList>()
{
  return "xpkg_msgs/msg/XmsgDeviceList";
}

template<>
struct has_fixed_size<xpkg_msgs::msg::XmsgDeviceList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xpkg_msgs::msg::XmsgDeviceList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xpkg_msgs::msg::XmsgDeviceList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__TRAITS_HPP_
