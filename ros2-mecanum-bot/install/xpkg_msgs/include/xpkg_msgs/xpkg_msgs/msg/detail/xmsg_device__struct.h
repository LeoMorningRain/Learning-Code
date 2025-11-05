// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xpkg_msgs:msg/XmsgDevice.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__STRUCT_H_
#define XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/XmsgDevice in the package xpkg_msgs.
typedef struct xpkg_msgs__msg__XmsgDevice
{
  uint8_t dev_class;
  uint8_t dev_type;
  uint8_t dev_number;
  uint8_t dev_enable;
} xpkg_msgs__msg__XmsgDevice;

// Struct for a sequence of xpkg_msgs__msg__XmsgDevice.
typedef struct xpkg_msgs__msg__XmsgDevice__Sequence
{
  xpkg_msgs__msg__XmsgDevice * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xpkg_msgs__msg__XmsgDevice__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_DEVICE__STRUCT_H_
