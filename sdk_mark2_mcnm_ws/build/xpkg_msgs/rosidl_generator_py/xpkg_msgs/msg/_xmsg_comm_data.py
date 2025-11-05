# generated from rosidl_generator_py/resource/_idl.py.em
# with input from xpkg_msgs:msg/XmsgCommData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'data'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_XmsgCommData(type):
    """Metaclass of message 'XmsgCommData'."""

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
                'xpkg_msgs.msg.XmsgCommData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__xmsg_comm_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__xmsg_comm_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__xmsg_comm_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__xmsg_comm_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__xmsg_comm_data

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class XmsgCommData(metaclass=Metaclass_XmsgCommData):
    """Message class 'XmsgCommData'."""

    __slots__ = [
        '_id_c',
        '_id_t',
        '_id_n',
        '_id_f',
        '_len',
        '_data',
        '_time',
    ]

    _fields_and_field_types = {
        'id_c': 'uint8',
        'id_t': 'uint8',
        'id_n': 'uint8',
        'id_f': 'uint8',
        'len': 'uint8',
        'data': 'uint8[8]',
        'time': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 8),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id_c = kwargs.get('id_c', int())
        self.id_t = kwargs.get('id_t', int())
        self.id_n = kwargs.get('id_n', int())
        self.id_f = kwargs.get('id_f', int())
        self.len = kwargs.get('len', int())
        if 'data' not in kwargs:
            self.data = numpy.zeros(8, dtype=numpy.uint8)
        else:
            self.data = numpy.array(kwargs.get('data'), dtype=numpy.uint8)
            assert self.data.shape == (8, )
        from builtin_interfaces.msg import Time
        self.time = kwargs.get('time', Time())

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
        if self.id_c != other.id_c:
            return False
        if self.id_t != other.id_t:
            return False
        if self.id_n != other.id_n:
            return False
        if self.id_f != other.id_f:
            return False
        if self.len != other.len:
            return False
        if all(self.data != other.data):
            return False
        if self.time != other.time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def id_c(self):
        """Message field 'id_c'."""
        return self._id_c

    @id_c.setter
    def id_c(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id_c' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id_c' field must be an unsigned integer in [0, 255]"
        self._id_c = value

    @builtins.property
    def id_t(self):
        """Message field 'id_t'."""
        return self._id_t

    @id_t.setter
    def id_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id_t' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id_t' field must be an unsigned integer in [0, 255]"
        self._id_t = value

    @builtins.property
    def id_n(self):
        """Message field 'id_n'."""
        return self._id_n

    @id_n.setter
    def id_n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id_n' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id_n' field must be an unsigned integer in [0, 255]"
        self._id_n = value

    @builtins.property
    def id_f(self):
        """Message field 'id_f'."""
        return self._id_f

    @id_f.setter
    def id_f(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id_f' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id_f' field must be an unsigned integer in [0, 255]"
        self._id_f = value

    @builtins.property  # noqa: A003
    def len(self):  # noqa: A003
        """Message field 'len'."""
        return self._len

    @len.setter  # noqa: A003
    def len(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'len' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'len' field must be an unsigned integer in [0, 255]"
        self._len = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'data' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 8, \
                "The 'data' numpy.ndarray() must have a size of 8"
            self._data = value
            return
        if __debug__:
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
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence with length 8 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'time' field must be a sub message of type 'Time'"
        self._time = value
