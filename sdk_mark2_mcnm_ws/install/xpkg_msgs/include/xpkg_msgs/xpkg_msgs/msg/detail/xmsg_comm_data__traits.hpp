// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xpkg_msgs:msg/XmsgCommData.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__TRAITS_HPP_
#define XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xpkg_msgs/msg/detail/xmsg_comm_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace xpkg_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const XmsgCommData & msg,
  std::ostream & out)
{
  out << "{";
  // member: id_c
  {
    out << "id_c: ";
    rosidl_generator_traits::value_to_yaml(msg.id_c, out);
    out << ", ";
  }

  // member: id_t
  {
    out << "id_t: ";
    rosidl_generator_traits::value_to_yaml(msg.id_t, out);
    out << ", ";
  }

  // member: id_n
  {
    out << "id_n: ";
    rosidl_generator_traits::value_to_yaml(msg.id_n, out);
    out << ", ";
  }

  // member: id_f
  {
    out << "id_f: ";
    rosidl_generator_traits::value_to_yaml(msg.id_f, out);
    out << ", ";
  }

  // member: len
  {
    out << "len: ";
    rosidl_generator_traits::value_to_yaml(msg.len, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const XmsgCommData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id_c: ";
    rosidl_generator_traits::value_to_yaml(msg.id_c, out);
    out << "\n";
  }

  // member: id_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id_t: ";
    rosidl_generator_traits::value_to_yaml(msg.id_t, out);
    out << "\n";
  }

  // member: id_n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id_n: ";
    rosidl_generator_traits::value_to_yaml(msg.id_n, out);
    out << "\n";
  }

  // member: id_f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id_f: ";
    rosidl_generator_traits::value_to_yaml(msg.id_f, out);
    out << "\n";
  }

  // member: len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "len: ";
    rosidl_generator_traits::value_to_yaml(msg.len, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time:\n";
    to_block_style_yaml(msg.time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const XmsgCommData & msg, bool use_flow_style = false)
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
  const xpkg_msgs::msg::XmsgCommData & msg,
  std::ostream & out, size_t indentation = 0)
{
  xpkg_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xpkg_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const xpkg_msgs::msg::XmsgCommData & msg)
{
  return xpkg_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xpkg_msgs::msg::XmsgCommData>()
{
  return "xpkg_msgs::msg::XmsgCommData";
}

template<>
inline const char * name<xpkg_msgs::msg::XmsgCommData>()
{
  return "xpkg_msgs/msg/XmsgCommData";
}

template<>
struct has_fixed_size<xpkg_msgs::msg::XmsgCommData>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<xpkg_msgs::msg::XmsgCommData>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<xpkg_msgs::msg::XmsgCommData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__TRAITS_HPP_
