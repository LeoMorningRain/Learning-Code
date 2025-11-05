// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from xpkg_msgs:msg/XmsgDevice.idl
// generated code does not contain a copyright notice
#include "xpkg_msgs/msg/detail/xmsg_device__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
xpkg_msgs__msg__XmsgDevice__init(xpkg_msgs__msg__XmsgDevice * msg)
{
  if (!msg) {
    return false;
  }
  // dev_class
  // dev_type
  // dev_number
  // dev_enable
  return true;
}

void
xpkg_msgs__msg__XmsgDevice__fini(xpkg_msgs__msg__XmsgDevice * msg)
{
  if (!msg) {
    return;
  }
  // dev_class
  // dev_type
  // dev_number
  // dev_enable
}

bool
xpkg_msgs__msg__XmsgDevice__are_equal(const xpkg_msgs__msg__XmsgDevice * lhs, const xpkg_msgs__msg__XmsgDevice * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dev_class
  if (lhs->dev_class != rhs->dev_class) {
    return false;
  }
  // dev_type
  if (lhs->dev_type != rhs->dev_type) {
    return false;
  }
  // dev_number
  if (lhs->dev_number != rhs->dev_number) {
    return false;
  }
  // dev_enable
  if (lhs->dev_enable != rhs->dev_enable) {
    return false;
  }
  return true;
}

bool
xpkg_msgs__msg__XmsgDevice__copy(
  const xpkg_msgs__msg__XmsgDevice * input,
  xpkg_msgs__msg__XmsgDevice * output)
{
  if (!input || !output) {
    return false;
  }
  // dev_class
  output->dev_class = input->dev_class;
  // dev_type
  output->dev_type = input->dev_type;
  // dev_number
  output->dev_number = input->dev_number;
  // dev_enable
  output->dev_enable = input->dev_enable;
  return true;
}

xpkg_msgs__msg__XmsgDevice *
xpkg_msgs__msg__XmsgDevice__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xpkg_msgs__msg__XmsgDevice * msg = (xpkg_msgs__msg__XmsgDevice *)allocator.allocate(sizeof(xpkg_msgs__msg__XmsgDevice), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(xpkg_msgs__msg__XmsgDevice));
  bool success = xpkg_msgs__msg__XmsgDevice__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
xpkg_msgs__msg__XmsgDevice__destroy(xpkg_msgs__msg__XmsgDevice * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    xpkg_msgs__msg__XmsgDevice__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
xpkg_msgs__msg__XmsgDevice__Sequence__init(xpkg_msgs__msg__XmsgDevice__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xpkg_msgs__msg__XmsgDevice * data = NULL;

  if (size) {
    data = (xpkg_msgs__msg__XmsgDevice *)allocator.zero_allocate(size, sizeof(xpkg_msgs__msg__XmsgDevice), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = xpkg_msgs__msg__XmsgDevice__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        xpkg_msgs__msg__XmsgDevice__fini(&data[i - 1]);
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
xpkg_msgs__msg__XmsgDevice__Sequence__fini(xpkg_msgs__msg__XmsgDevice__Sequence * array)
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
      xpkg_msgs__msg__XmsgDevice__fini(&array->data[i]);
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

xpkg_msgs__msg__XmsgDevice__Sequence *
xpkg_msgs__msg__XmsgDevice__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  xpkg_msgs__msg__XmsgDevice__Sequence * array = (xpkg_msgs__msg__XmsgDevice__Sequence *)allocator.allocate(sizeof(xpkg_msgs__msg__XmsgDevice__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = xpkg_msgs__msg__XmsgDevice__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
xpkg_msgs__msg__XmsgDevice__Sequence__destroy(xpkg_msgs__msg__XmsgDevice__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    xpkg_msgs__msg__XmsgDevice__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
xpkg_msgs__msg__XmsgDevice__Sequence__are_equal(const xpkg_msgs__msg__XmsgDevice__Sequence * lhs, const xpkg_msgs__msg__XmsgDevice__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!xpkg_msgs__msg__XmsgDevice__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
xpkg_msgs__msg__XmsgDevice__Sequence__copy(
  const xpkg_msgs__msg__XmsgDevice__Sequence * input,
  xpkg_msgs__msg__XmsgDevice__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(xpkg_msgs__msg__XmsgDevice);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    xpkg_msgs__msg__XmsgDevice * data =
      (xpkg_msgs__msg__XmsgDevice *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!xpkg_msgs__msg__XmsgDevice__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          xpkg_msgs__msg__XmsgDevice__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!xpkg_msgs__msg__XmsgDevice__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
