# generated from rosidl_generator_py/resource/_idl.py.em
# with input from incubator_cpp_pkg_interfaces:msg/DeviceStatei.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeviceStatei(type):
    """Metaclass of message 'DeviceStatei'."""

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
            module = import_type_support('incubator_cpp_pkg_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'incubator_cpp_pkg_interfaces.msg.DeviceStatei')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__device_statei
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__device_statei
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__device_statei
            cls._TYPE_SUPPORT = module.type_support_msg__msg__device_statei
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__device_statei

            from incubator_cpp_pkg_interfaces.msg import Boolean
            if Boolean.__class__._TYPE_SUPPORT is None:
                Boolean.__class__.__import_type_support__()

            from incubator_cpp_pkg_interfaces.msg import DegreesCi
            if DegreesCi.__class__._TYPE_SUPPORT is None:
                DegreesCi.__class__.__import_type_support__()

            from incubator_cpp_pkg_interfaces.msg import Secondsi
            if Secondsi.__class__._TYPE_SUPPORT is None:
                Secondsi.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeviceStatei(metaclass=Metaclass_DeviceStatei):
    """Message class 'DeviceStatei'."""

    __slots__ = [
        '_t1',
        '_t1_time',
        '_t2',
        '_t2_time',
        '_t3',
        '_t3_time',
        '_average_internal_temp',
        '_heater_on',
        '_fan_on',
        '_execution_interval',
        '_elapsed_time',
    ]

    _fields_and_field_types = {
        't1': 'incubator_cpp_pkg_interfaces/DegreesCi',
        't1_time': 'incubator_cpp_pkg_interfaces/Secondsi',
        't2': 'incubator_cpp_pkg_interfaces/DegreesCi',
        't2_time': 'incubator_cpp_pkg_interfaces/Secondsi',
        't3': 'incubator_cpp_pkg_interfaces/DegreesCi',
        't3_time': 'incubator_cpp_pkg_interfaces/Secondsi',
        'average_internal_temp': 'incubator_cpp_pkg_interfaces/DegreesCi',
        'heater_on': 'incubator_cpp_pkg_interfaces/Boolean',
        'fan_on': 'incubator_cpp_pkg_interfaces/Boolean',
        'execution_interval': 'incubator_cpp_pkg_interfaces/Secondsi',
        'elapsed_time': 'incubator_cpp_pkg_interfaces/Secondsi',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'DegreesCi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Secondsi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'DegreesCi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Secondsi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'DegreesCi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Secondsi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'DegreesCi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Secondsi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Secondsi'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from incubator_cpp_pkg_interfaces.msg import DegreesCi
        self.t1 = kwargs.get('t1', DegreesCi())
        from incubator_cpp_pkg_interfaces.msg import Secondsi
        self.t1_time = kwargs.get('t1_time', Secondsi())
        from incubator_cpp_pkg_interfaces.msg import DegreesCi
        self.t2 = kwargs.get('t2', DegreesCi())
        from incubator_cpp_pkg_interfaces.msg import Secondsi
        self.t2_time = kwargs.get('t2_time', Secondsi())
        from incubator_cpp_pkg_interfaces.msg import DegreesCi
        self.t3 = kwargs.get('t3', DegreesCi())
        from incubator_cpp_pkg_interfaces.msg import Secondsi
        self.t3_time = kwargs.get('t3_time', Secondsi())
        from incubator_cpp_pkg_interfaces.msg import DegreesCi
        self.average_internal_temp = kwargs.get('average_internal_temp', DegreesCi())
        from incubator_cpp_pkg_interfaces.msg import Boolean
        self.heater_on = kwargs.get('heater_on', Boolean())
        from incubator_cpp_pkg_interfaces.msg import Boolean
        self.fan_on = kwargs.get('fan_on', Boolean())
        from incubator_cpp_pkg_interfaces.msg import Secondsi
        self.execution_interval = kwargs.get('execution_interval', Secondsi())
        from incubator_cpp_pkg_interfaces.msg import Secondsi
        self.elapsed_time = kwargs.get('elapsed_time', Secondsi())

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
        if self.t1 != other.t1:
            return False
        if self.t1_time != other.t1_time:
            return False
        if self.t2 != other.t2:
            return False
        if self.t2_time != other.t2_time:
            return False
        if self.t3 != other.t3:
            return False
        if self.t3_time != other.t3_time:
            return False
        if self.average_internal_temp != other.average_internal_temp:
            return False
        if self.heater_on != other.heater_on:
            return False
        if self.fan_on != other.fan_on:
            return False
        if self.execution_interval != other.execution_interval:
            return False
        if self.elapsed_time != other.elapsed_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def t1(self):
        """Message field 't1'."""
        return self._t1

    @t1.setter
    def t1(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import DegreesCi
            assert \
                isinstance(value, DegreesCi), \
                "The 't1' field must be a sub message of type 'DegreesCi'"
        self._t1 = value

    @builtins.property
    def t1_time(self):
        """Message field 't1_time'."""
        return self._t1_time

    @t1_time.setter
    def t1_time(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Secondsi
            assert \
                isinstance(value, Secondsi), \
                "The 't1_time' field must be a sub message of type 'Secondsi'"
        self._t1_time = value

    @builtins.property
    def t2(self):
        """Message field 't2'."""
        return self._t2

    @t2.setter
    def t2(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import DegreesCi
            assert \
                isinstance(value, DegreesCi), \
                "The 't2' field must be a sub message of type 'DegreesCi'"
        self._t2 = value

    @builtins.property
    def t2_time(self):
        """Message field 't2_time'."""
        return self._t2_time

    @t2_time.setter
    def t2_time(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Secondsi
            assert \
                isinstance(value, Secondsi), \
                "The 't2_time' field must be a sub message of type 'Secondsi'"
        self._t2_time = value

    @builtins.property
    def t3(self):
        """Message field 't3'."""
        return self._t3

    @t3.setter
    def t3(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import DegreesCi
            assert \
                isinstance(value, DegreesCi), \
                "The 't3' field must be a sub message of type 'DegreesCi'"
        self._t3 = value

    @builtins.property
    def t3_time(self):
        """Message field 't3_time'."""
        return self._t3_time

    @t3_time.setter
    def t3_time(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Secondsi
            assert \
                isinstance(value, Secondsi), \
                "The 't3_time' field must be a sub message of type 'Secondsi'"
        self._t3_time = value

    @builtins.property
    def average_internal_temp(self):
        """Message field 'average_internal_temp'."""
        return self._average_internal_temp

    @average_internal_temp.setter
    def average_internal_temp(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import DegreesCi
            assert \
                isinstance(value, DegreesCi), \
                "The 'average_internal_temp' field must be a sub message of type 'DegreesCi'"
        self._average_internal_temp = value

    @builtins.property
    def heater_on(self):
        """Message field 'heater_on'."""
        return self._heater_on

    @heater_on.setter
    def heater_on(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Boolean
            assert \
                isinstance(value, Boolean), \
                "The 'heater_on' field must be a sub message of type 'Boolean'"
        self._heater_on = value

    @builtins.property
    def fan_on(self):
        """Message field 'fan_on'."""
        return self._fan_on

    @fan_on.setter
    def fan_on(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Boolean
            assert \
                isinstance(value, Boolean), \
                "The 'fan_on' field must be a sub message of type 'Boolean'"
        self._fan_on = value

    @builtins.property
    def execution_interval(self):
        """Message field 'execution_interval'."""
        return self._execution_interval

    @execution_interval.setter
    def execution_interval(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Secondsi
            assert \
                isinstance(value, Secondsi), \
                "The 'execution_interval' field must be a sub message of type 'Secondsi'"
        self._execution_interval = value

    @builtins.property
    def elapsed_time(self):
        """Message field 'elapsed_time'."""
        return self._elapsed_time

    @elapsed_time.setter
    def elapsed_time(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Secondsi
            assert \
                isinstance(value, Secondsi), \
                "The 'elapsed_time' field must be a sub message of type 'Secondsi'"
        self._elapsed_time = value
