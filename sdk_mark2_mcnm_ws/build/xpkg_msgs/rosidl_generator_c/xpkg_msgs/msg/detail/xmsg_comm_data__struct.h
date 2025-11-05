// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xpkg_msgs:msg/XmsgCommData.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__STRUCT_H_
#define XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/XmsgCommData in the package xpkg_msgs.
typedef struct xpkg_msgs__msg__XmsgCommData
{
  uint8_t id_c;
  uint8_t id_t;
  uint8_t id_n;
  uint8_t id_f;
  uint8_t len;
  uint8_t data[8];
  builtin_interfaces__msg__Time time;
} xpkg_msgs__msg__XmsgCommData;

// Struct for a sequence of xpkg_msgs__msg__XmsgCommData.
typedef struct xpkg_msgs__msg__XmsgCommData__Sequence
{
  xpkg_msgs__msg__XmsgCommData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xpkg_msgs__msg__XmsgCommData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__STRUCT_H_
