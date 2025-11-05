// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xpkg_msgs:msg/XmsgDevice.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xpkg_msgs/msg/detail/xmsg_device__rosidl_typesupport_introspection_c.h"
#include "xpkg_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xpkg_msgs/msg/detail/xmsg_device__functions.h"
#include "xpkg_msgs/msg/detail/xmsg_device__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xpkg_msgs__msg__XmsgDevice__init(message_memory);
}

void xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_fini_function(void * message_memory)
{
  xpkg_msgs__msg__XmsgDevice__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_message_member_array[4] = {
  {
    "dev_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgDevice, dev_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dev_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgDevice, dev_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dev_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgDevice, dev_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dev_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgDevice, dev_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_message_members = {
  "xpkg_msgs__msg",  // message namespace
  "XmsgDevice",  // message name
  4,  // number of fields
  sizeof(xpkg_msgs__msg__XmsgDevice),
  xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_message_member_array,  // message members
  xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_init_function,  // function to initialize message memory (memory has to be allocated)
  xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_message_type_support_handle = {
  0,
  &xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xpkg_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xpkg_msgs, msg, XmsgDevice)() {
  if (!xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_message_type_support_handle.typesupport_identifier) {
    xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xpkg_msgs__msg__XmsgDevice__rosidl_typesupport_introspection_c__XmsgDevice_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
