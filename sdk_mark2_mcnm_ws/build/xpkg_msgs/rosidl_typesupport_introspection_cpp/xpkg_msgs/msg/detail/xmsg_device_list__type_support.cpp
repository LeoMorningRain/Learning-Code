// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xpkg_msgs:msg/XmsgDeviceList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xpkg_msgs/msg/detail/xmsg_device_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace xpkg_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void XmsgDeviceList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xpkg_msgs::msg::XmsgDeviceList(_init);
}

void XmsgDeviceList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xpkg_msgs::msg::XmsgDeviceList *>(message_memory);
  typed_message->~XmsgDeviceList();
}

size_t size_function__XmsgDeviceList__dev_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<xpkg_msgs::msg::XmsgDevice> *>(untyped_member);
  return member->size();
}

const void * get_const_function__XmsgDeviceList__dev_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<xpkg_msgs::msg::XmsgDevice> *>(untyped_member);
  return &member[index];
}

void * get_function__XmsgDeviceList__dev_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<xpkg_msgs::msg::XmsgDevice> *>(untyped_member);
  return &member[index];
}

void fetch_function__XmsgDeviceList__dev_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const xpkg_msgs::msg::XmsgDevice *>(
    get_const_function__XmsgDeviceList__dev_list(untyped_member, index));
  auto & value = *reinterpret_cast<xpkg_msgs::msg::XmsgDevice *>(untyped_value);
  value = item;
}

void assign_function__XmsgDeviceList__dev_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<xpkg_msgs::msg::XmsgDevice *>(
    get_function__XmsgDeviceList__dev_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const xpkg_msgs::msg::XmsgDevice *>(untyped_value);
  item = value;
}

void resize_function__XmsgDeviceList__dev_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<xpkg_msgs::msg::XmsgDevice> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember XmsgDeviceList_message_member_array[2] = {
  {
    "dev_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs::msg::XmsgDeviceList, dev_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dev_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xpkg_msgs::msg::XmsgDevice>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs::msg::XmsgDeviceList, dev_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__XmsgDeviceList__dev_list,  // size() function pointer
    get_const_function__XmsgDeviceList__dev_list,  // get_const(index) function pointer
    get_function__XmsgDeviceList__dev_list,  // get(index) function pointer
    fetch_function__XmsgDeviceList__dev_list,  // fetch(index, &value) function pointer
    assign_function__XmsgDeviceList__dev_list,  // assign(index, value) function pointer
    resize_function__XmsgDeviceList__dev_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers XmsgDeviceList_message_members = {
  "xpkg_msgs::msg",  // message namespace
  "XmsgDeviceList",  // message name
  2,  // number of fields
  sizeof(xpkg_msgs::msg::XmsgDeviceList),
  XmsgDeviceList_message_member_array,  // message members
  XmsgDeviceList_init_function,  // function to initialize message memory (memory has to be allocated)
  XmsgDeviceList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t XmsgDeviceList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &XmsgDeviceList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace xpkg_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xpkg_msgs::msg::XmsgDeviceList>()
{
  return &::xpkg_msgs::msg::rosidl_typesupport_introspection_cpp::XmsgDeviceList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xpkg_msgs, msg, XmsgDeviceList)() {
  return &::xpkg_msgs::msg::rosidl_typesupport_introspection_cpp::XmsgDeviceList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
