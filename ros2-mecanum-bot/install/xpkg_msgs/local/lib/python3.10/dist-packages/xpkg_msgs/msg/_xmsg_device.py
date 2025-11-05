# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xpkg_msgs:msg/XmsgDevice.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_XmsgDevice(type):
    """Metaclass of message 'XmsgDevice'."""

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
                'xpkg_msgs.msg.XmsgDevice')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__xmsg_device
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__xmsg_device
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__xmsg_device
            cls._TYPE_SUPPORT = module.type_support_msg__msg__xmsg_device
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__xmsg_device

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class XmsgDevice(metaclass=Metaclass_XmsgDevice):
    """Message class 'XmsgDevice'."""

    __slots__ = [
        '_dev_class',
        '_dev_type',
        '_dev_number',
        '_dev_enable',
    ]

    _fields_and_field_types = {
        'dev_class': 'uint8',
        'dev_type': 'uint8',
        'dev_number': 'uint8',
        'dev_enable': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dev_class = kwargs.get('dev_class', int())
        self.dev_type = kwargs.get('dev_type', int())
        self.dev_number = kwargs.get('dev_number', int())
        self.dev_enable = kwargs.get('dev_enable', int())

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
        if self.dev_class != other.dev_class:
            return False
        if self.dev_type != other.dev_type:
            return False
        if self.dev_number != other.dev_number:
            return False
        if self.dev_enable != other.dev_enable:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def dev_class(self):
        """Message field 'dev_class'."""
        return self._dev_class

    @dev_class.setter
    def dev_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dev_class' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dev_class' field must be an unsigned integer in [0, 255]"
        self._dev_class = value

    @builtins.property
    def dev_type(self):
        """Message field 'dev_type'."""
        return self._dev_type

    @dev_type.setter
    def dev_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dev_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dev_type' field must be an unsigned integer in [0, 255]"
        self._dev_type = value

    @builtins.property
    def dev_number(self):
        """Message field 'dev_number'."""
        return self._dev_number

    @dev_number.setter
    def dev_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dev_number' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dev_number' field must be an unsigned integer in [0, 255]"
        self._dev_number = value

    @builtins.property
    def dev_enable(self):
        """Message field 'dev_enable'."""
        return self._dev_enable

    @dev_enable.setter
    def dev_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dev_enable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dev_enable' field must be an unsigned integer in [0, 255]"
        self._dev_enable = value
