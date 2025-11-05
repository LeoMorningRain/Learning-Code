// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xpkg_msgs:msg/XmsgCommData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xpkg_msgs/msg/detail/xmsg_comm_data__rosidl_typesupport_introspection_c.h"
#include "xpkg_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xpkg_msgs/msg/detail/xmsg_comm_data__functions.h"
#include "xpkg_msgs/msg/detail/xmsg_comm_data__struct.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/time.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xpkg_msgs__msg__XmsgCommData__init(message_memory);
}

void xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_fini_function(void * message_memory)
{
  xpkg_msgs__msg__XmsgCommData__fini(message_memory);
}

size_t xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__size_function__XmsgCommData__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__get_const_function__XmsgCommData__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__get_function__XmsgCommData__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__fetch_function__XmsgCommData__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__get_const_function__XmsgCommData__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__assign_function__XmsgCommData__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__get_function__XmsgCommData__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_message_member_array[7] = {
  {
    "id_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgCommData, id_c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id_t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgCommData, id_t),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id_n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgCommData, id_n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id_f",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgCommData, id_f),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "len",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgCommData, len),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgCommData, data),  // bytes offset in struct
    NULL,  // default value
    xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__size_function__XmsgCommData__data,  // size() function pointer
    xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__get_const_function__XmsgCommData__data,  // get_const(index) function pointer
    xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__get_function__XmsgCommData__data,  // get(index) function pointer
    xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__fetch_function__XmsgCommData__data,  // fetch(index, &value) function pointer
    xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__assign_function__XmsgCommData__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xpkg_msgs__msg__XmsgCommData, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_message_members = {
  "xpkg_msgs__msg",  // message namespace
  "XmsgCommData",  // message name
  7,  // number of fields
  sizeof(xpkg_msgs__msg__XmsgCommData),
  xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_message_member_array,  // message members
  xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_init_function,  // function to initialize message memory (memory has to be allocated)
  xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_message_type_support_handle = {
  0,
  &xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xpkg_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xpkg_msgs, msg, XmsgCommData)() {
  xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_message_type_support_handle.typesupport_identifier) {
    xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xpkg_msgs__msg__XmsgCommData__rosidl_typesupport_introspection_c__XmsgCommData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
