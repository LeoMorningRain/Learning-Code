// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xpkg_msgs:msg/XmsgCommData.idl
// generated code does not contain a copyright notice
#include "xpkg_msgs/msg/detail/xmsg_comm_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
xpkg_msgs__msg__XmsgCommData__init(xpkg_msgs__msg__XmsgCommData * msg)
{
  if (!msg) {
    return false;
  }
  // id_c
  // id_t
  // id_n
  // id_f
  // len
  // data
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    xpkg_msgs__msg__XmsgCommData__fini(msg);
    return false;
  }
  return true;
}

void
xpkg_msgs__msg__XmsgCommData__fini(xpkg_msgs__msg__XmsgCommData * msg)
{
  if (!msg) {
    return;
  }
  // id_c
  // id_t
  // id_n
  // id_f
  // len
  // data
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
}

bool
xpkg_msgs__msg__XmsgCommData__are_equal(const xpkg_msgs__msg__XmsgCommData * lhs, const xpkg_msgs__msg__XmsgCommData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id_c
  if (lhs->id_c != rhs->id_c) {
    return false;
  }
  // id_t
  if (lhs->id_t != rhs->id_t) {
    return false;
  }
  // id_n
  if (lhs->id_n != rhs->id_n) {
    return false;
  }
  // id_f
  if (lhs->id_f != rhs->id_f) {
    return false;
  }
  // len
  if (lhs->len != rhs->len) {
    return false;
  }
  // data
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  // time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  return true;
}

bool
xpkg_msgs__msg__XmsgCommData__copy(
  const xpkg_msgs__msg__XmsgCommData * input,
  xpkg_msgs__msg__XmsgCommData * output)
{
  if (!input || !output) {
    return false;
  }
  // id_c
  output->id_c = input->id_c;
  // id_t
  output->id_t = input->id_t;
  // id_n
  output->id_n = input->id_n;
  // id_f
  output->id_f = input->id_f;
  // len
  output->len = input->len;
  // data
  for (size_t i = 0; i < 8; ++i) {
    output->data[i] = input->data[i];
  }
  // time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  return true;
}

xpkg_msgs__msg__XmsgCommData *
xpkg_msgs__msg__XmsgCommData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xpkg_msgs__msg__XmsgCommData * msg = (xpkg_msgs__msg__XmsgCommData *)allocator.allocate(sizeof(xpkg_msgs__msg__XmsgCommData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xpkg_msgs__msg__XmsgCommData));
  bool success = xpkg_msgs__msg__XmsgCommData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xpkg_msgs__msg__XmsgCommData__destroy(xpkg_msgs__msg__XmsgCommData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xpkg_msgs__msg__XmsgCommData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xpkg_msgs__msg__XmsgCommData__Sequence__init(xpkg_msgs__msg__XmsgCommData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xpkg_msgs__msg__XmsgCommData * data = NULL;

  if (size) {
    data = (xpkg_msgs__msg__XmsgCommData *)allocator.zero_allocate(size, sizeof(xpkg_msgs__msg__XmsgCommData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xpkg_msgs__msg__XmsgCommData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xpkg_msgs__msg__XmsgCommData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
xpkg_msgs__msg__XmsgCommData__Sequence__fini(xpkg_msgs__msg__XmsgCommData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      xpkg_msgs__msg__XmsgCommData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

xpkg_msgs__msg__XmsgCommData__Sequence *
xpkg_msgs__msg__XmsgCommData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xpkg_msgs__msg__XmsgCommData__Sequence * array = (xpkg_msgs__msg__XmsgCommData__Sequence *)allocator.allocate(sizeof(xpkg_msgs__msg__XmsgCommData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xpkg_msgs__msg__XmsgCommData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xpkg_msgs__msg__XmsgCommData__Sequence__destroy(xpkg_msgs__msg__XmsgCommData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xpkg_msgs__msg__XmsgCommData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xpkg_msgs__msg__XmsgCommData__Sequence__are_equal(const xpkg_msgs__msg__XmsgCommData__Sequence * lhs, const xpkg_msgs__msg__XmsgCommData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xpkg_msgs__msg__XmsgCommData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xpkg_msgs__msg__XmsgCommData__Sequence__copy(
  const xpkg_msgs__msg__XmsgCommData__Sequence * input,
  xpkg_msgs__msg__XmsgCommData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xpkg_msgs__msg__XmsgCommData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xpkg_msgs__msg__XmsgCommData * data =
      (xpkg_msgs__msg__XmsgCommData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xpkg_msgs__msg__XmsgCommData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xpkg_msgs__msg__XmsgCommData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xpkg_msgs__msg__XmsgCommData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
