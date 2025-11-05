// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xpkg_msgs:msg/XmsgDeviceList.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__STRUCT_H_
#define XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dev_list'
#include "xpkg_msgs/msg/detail/xmsg_device__struct.h"

/// Struct defined in msg/XmsgDeviceList in the package xpkg_msgs.
typedef struct xpkg_msgs__msg__XmsgDeviceList
{
  uint8_t dev_count;
  xpkg_msgs__msg__XmsgDevice__Sequence dev_list;
} xpkg_msgs__msg__XmsgDeviceList;

// Struct for a sequence of xpkg_msgs__msg__XmsgDeviceList.
typedef struct xpkg_msgs__msg__XmsgDeviceList__Sequence
{
  xpkg_msgs__msg__XmsgDeviceList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xpkg_msgs__msg__XmsgDeviceList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE_LIST__STRUCT_H_
