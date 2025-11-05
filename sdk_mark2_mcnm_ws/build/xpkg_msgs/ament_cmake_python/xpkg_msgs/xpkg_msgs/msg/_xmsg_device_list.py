# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xpkg_msgs:msg/XmsgDeviceList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_XmsgDeviceList(type):
    """Metaclass of message 'XmsgDeviceList'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('xpkg_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'xpkg_msgs.msg.XmsgDeviceList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__xmsg_device_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__xmsg_device_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__xmsg_device_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__xmsg_device_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__xmsg_device_list

            from xpkg_msgs.msg import XmsgDevice
            if XmsgDevice.__class__._TYPE_SUPPORT is None:
                XmsgDevice.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class XmsgDeviceList(metaclass=Metaclass_XmsgDeviceList):
    """Message class 'XmsgDeviceList'."""

    __slots__ = [
        '_dev_count',
        '_dev_list',
    ]

    _fields_and_field_types = {
        'dev_count': 'uint8',
        'dev_list': 'sequence<xpkg_msgs/XmsgDevice>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['xpkg_msgs', 'msg'], 'XmsgDevice')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dev_count = kwargs.get('dev_count', int())
        self.dev_list = kwargs.get('dev_list', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.dev_count != other.dev_count:
            return False
        if self.dev_list != other.dev_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dev_count(self):
        """Message field 'dev_count'."""
        return self._dev_count

    @dev_count.setter
    def dev_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dev_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dev_count' field must be an unsigned integer in [0, 255]"
        self._dev_count = value

    @builtins.property
    def dev_list(self):
        """Message field 'dev_list'."""
        return self._dev_list

    @dev_list.setter
    def dev_list(self, value):
        if __debug__:
            from xpkg_msgs.msg import XmsgDevice
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, XmsgDevice) for v in value) and
                 True), \
                "The 'dev_list' field must be a set or sequence and each value of type 'XmsgDevice'"
        self._dev_list = value
