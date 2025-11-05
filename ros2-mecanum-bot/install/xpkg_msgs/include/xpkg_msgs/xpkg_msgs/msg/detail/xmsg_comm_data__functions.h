// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xpkg_msgs:msg/XmsgCommData.idl
// generated code does not contain a copyright notice

#ifndef XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__FUNCTIONS_H_
#define XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xpkg_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "xpkg_msgs/msg/detail/xmsg_comm_data__struct.h"

/// Initialize msg/XmsgCommData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xpkg_msgs__msg__XmsgCommData
 * )) before or use
 * xpkg_msgs__msg__XmsgCommData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
bool
xpkg_msgs__msg__XmsgCommData__init(xpkg_msgs__msg__XmsgCommData * msg);

/// Finalize msg/XmsgCommData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
void
xpkg_msgs__msg__XmsgCommData__fini(xpkg_msgs__msg__XmsgCommData * msg);

/// Create msg/XmsgCommData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xpkg_msgs__msg__XmsgCommData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
xpkg_msgs__msg__XmsgCommData *
xpkg_msgs__msg__XmsgCommData__create();

/// Destroy msg/XmsgCommData message.
/**
 * It calls
 * xpkg_msgs__msg__XmsgCommData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
void
xpkg_msgs__msg__XmsgCommData__destroy(xpkg_msgs__msg__XmsgCommData * msg);

/// Check for msg/XmsgCommData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
bool
xpkg_msgs__msg__XmsgCommData__are_equal(const xpkg_msgs__msg__XmsgCommData * lhs, const xpkg_msgs__msg__XmsgCommData * rhs);

/// Copy a msg/XmsgCommData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
bool
xpkg_msgs__msg__XmsgCommData__copy(
  const xpkg_msgs__msg__XmsgCommData * input,
  xpkg_msgs__msg__XmsgCommData * output);

/// Initialize array of msg/XmsgCommData messages.
/**
 * It allocates the memory for the number of elements and calls
 * xpkg_msgs__msg__XmsgCommData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
bool
xpkg_msgs__msg__XmsgCommData__Sequence__init(xpkg_msgs__msg__XmsgCommData__Sequence * array, size_t size);

/// Finalize array of msg/XmsgCommData messages.
/**
 * It calls
 * xpkg_msgs__msg__XmsgCommData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
void
xpkg_msgs__msg__XmsgCommData__Sequence__fini(xpkg_msgs__msg__XmsgCommData__Sequence * array);

/// Create array of msg/XmsgCommData messages.
/**
 * It allocates the memory for the array and calls
 * xpkg_msgs__msg__XmsgCommData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
xpkg_msgs__msg__XmsgCommData__Sequence *
xpkg_msgs__msg__XmsgCommData__Sequence__create(size_t size);

/// Destroy array of msg/XmsgCommData messages.
/**
 * It calls
 * xpkg_msgs__msg__XmsgCommData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
void
xpkg_msgs__msg__XmsgCommData__Sequence__destroy(xpkg_msgs__msg__XmsgCommData__Sequence * array);

/// Check for msg/XmsgCommData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
bool
xpkg_msgs__msg__XmsgCommData__Sequence__are_equal(const xpkg_msgs__msg__XmsgCommData__Sequence * lhs, const xpkg_msgs__msg__XmsgCommData__Sequence * rhs);

/// Copy an array of msg/XmsgCommData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xpkg_msgs
bool
xpkg_msgs__msg__XmsgCommData__Sequence__copy(
  const xpkg_msgs__msg__XmsgCommData__Sequence * input,
  xpkg_msgs__msg__XmsgCommData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XPKG_MSGS__MSG__DETAIL__XMSG_COMM_DATA__FUNCTIONS_H_
