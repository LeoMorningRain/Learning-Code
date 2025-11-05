// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from xpkg_msgs:msg/XmsgDevice.idl
// generated code does not contain a copyright notice
#include "xpkg_msgs/msg/detail/xmsg_device__rosidl_typesupport_fastrtps_cpp.hpp"
#include "xpkg_msgs/msg/detail/xmsg_device__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace xpkg_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xpkg_msgs
cdr_serialize(
  const xpkg_msgs::msg::XmsgDevice & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dev_class
  cdr << ros_message.dev_class;
  // Member: dev_type
  cdr << ros_message.dev_type;
  // Member: dev_number
  cdr << ros_message.dev_number;
  // Member: dev_enable
  cdr << ros_message.dev_enable;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xpkg_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xpkg_msgs::msg::XmsgDevice & ros_message)
{
  // Member: dev_class
  cdr >> ros_message.dev_class;

  // Member: dev_type
  cdr >> ros_message.dev_type;

  // Member: dev_number
  cdr >> ros_message.dev_number;

  // Member: dev_enable
  cdr >> ros_message.dev_enable;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xpkg_msgs
get_serialized_size(
  const xpkg_msgs::msg::XmsgDevice & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dev_class
  {
    size_t item_size = sizeof(ros_message.dev_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dev_type
  {
    size_t item_size = sizeof(ros_message.dev_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dev_number
  {
    size_t item_size = sizeof(ros_message.dev_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dev_enable
  {
    size_t item_size = sizeof(ros_message.dev_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xpkg_msgs
max_serialized_size_XmsgDevice(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: dev_class
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dev_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dev_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dev_enable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xpkg_msgs::msg::XmsgDevice;
    is_plain =
      (
      offsetof(DataType, dev_enable) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _XmsgDevice__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const xpkg_msgs::msg::XmsgDevice *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _XmsgDevice__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<xpkg_msgs::msg::XmsgDevice *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _XmsgDevice__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const xpkg_msgs::msg::XmsgDevice *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _XmsgDevice__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_XmsgDevice(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _XmsgDevice__callbacks = {
  "xpkg_msgs::msg",
  "XmsgDevice",
  _XmsgDevice__cdr_serialize,
  _XmsgDevice__cdr_deserialize,
  _XmsgDevice__get_serialized_size,
  _XmsgDevice__max_serialized_size
};

static rosidl_message_type_support_t _XmsgDevice__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_XmsgDevice__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace xpkg_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_xpkg_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<xpkg_msgs::msg::XmsgDevice>()
{
  return &xpkg_msgs::msg::typesupport_fastrtps_cpp::_XmsgDevice__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xpkg_msgs, msg, XmsgDevice)() {
  return &xpkg_msgs::msg::typesupport_fastrtps_cpp::_XmsgDevice__handle;
}

#ifdef __cplusplus
}
#endif
