# generated from rosidl_generator_py/resource/_idl.py.em
# with input from incubator_cpp_pkg_interfaces:msg/ControllerStatusi.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControllerStatusi(type):
    """Metaclass of message 'ControllerStatusi'."""

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
                'incubator_cpp_pkg_interfaces.msg.ControllerStatusi')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller_statusi
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller_statusi
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller_statusi
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller_statusi
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller_statusi

            from incubator_cpp_pkg_interfaces.msg import Boolean
            if Boolean.__class__._TYPE_SUPPORT is None:
                Boolean.__class__.__import_type_support__()

            from incubator_cpp_pkg_interfaces.msg import ControllerState
            if ControllerState.__class__._TYPE_SUPPORT is None:
                ControllerState.__class__.__import_type_support__()

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


class ControllerStatusi(metaclass=Metaclass_ControllerStatusi):
    """Message class 'ControllerStatusi'."""

    __slots__ = [
        '_cur_time',
        '_heater_on',
        '_fan_on',
        '_current_state',
        '_next_time',
        '_target_temp',
        '_lower_bound',
        '_heating_time',
        '_heating_gap',
    ]

    _fields_and_field_types = {
        'cur_time': 'incubator_cpp_pkg_interfaces/Secondsi',
        'heater_on': 'incubator_cpp_pkg_interfaces/Boolean',
        'fan_on': 'incubator_cpp_pkg_interfaces/Boolean',
        'current_state': 'incubator_cpp_pkg_interfaces/ControllerState',
        'next_time': 'incubator_cpp_pkg_interfaces/Secondsi',
        'target_temp': 'incubator_cpp_pkg_interfaces/DegreesCi',
        'lower_bound': 'incubator_cpp_pkg_interfaces/DegreesCi',
        'heating_time': 'incubator_cpp_pkg_interfaces/Secondsi',
        'heating_gap': 'incubator_cpp_pkg_interfaces/Secondsi',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Secondsi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'ControllerState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Secondsi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'DegreesCi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'DegreesCi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Secondsi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Secondsi'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from incubator_cpp_pkg_interfaces.msg import Secondsi
        self.cur_time = kwargs.get('cur_time', Secondsi())
        from incubator_cpp_pkg_interfaces.msg import Boolean
        self.heater_on = kwargs.get('heater_on', Boolean())
        from incubator_cpp_pkg_interfaces.msg import Boolean
        self.fan_on = kwargs.get('fan_on', Boolean())
        from incubator_cpp_pkg_interfaces.msg import ControllerState
        self.current_state = kwargs.get('current_state', ControllerState())
        from incubator_cpp_pkg_interfaces.msg import Secondsi
        self.next_time = kwargs.get('next_time', Secondsi())
        from incubator_cpp_pkg_interfaces.msg import DegreesCi
        self.target_temp = kwargs.get('target_temp', DegreesCi())
        from incubator_cpp_pkg_interfaces.msg import DegreesCi
        self.lower_bound = kwargs.get('lower_bound', DegreesCi())
        from incubator_cpp_pkg_interfaces.msg import Secondsi
        self.heating_time = kwargs.get('heating_time', Secondsi())
        from incubator_cpp_pkg_interfaces.msg import Secondsi
        self.heating_gap = kwargs.get('heating_gap', Secondsi())

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
        if self.cur_time != other.cur_time:
            return False
        if self.heater_on != other.heater_on:
            return False
        if self.fan_on != other.fan_on:
            return False
        if self.current_state != other.current_state:
            return False
        if self.next_time != other.next_time:
            return False
        if self.target_temp != other.target_temp:
            return False
        if self.lower_bound != other.lower_bound:
            return False
        if self.heating_time != other.heating_time:
            return False
        if self.heating_gap != other.heating_gap:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cur_time(self):
        """Message field 'cur_time'."""
        return self._cur_time

    @cur_time.setter
    def cur_time(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Secondsi
            assert \
                isinstance(value, Secondsi), \
                "The 'cur_time' field must be a sub message of type 'Secondsi'"
        self._cur_time = value

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
    def current_state(self):
        """Message field 'current_state'."""
        return self._current_state

    @current_state.setter
    def current_state(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import ControllerState
            assert \
                isinstance(value, ControllerState), \
                "The 'current_state' field must be a sub message of type 'ControllerState'"
        self._current_state = value

    @builtins.property
    def next_time(self):
        """Message field 'next_time'."""
        return self._next_time

    @next_time.setter
    def next_time(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Secondsi
            assert \
                isinstance(value, Secondsi), \
                "The 'next_time' field must be a sub message of type 'Secondsi'"
        self._next_time = value

    @builtins.property
    def target_temp(self):
        """Message field 'target_temp'."""
        return self._target_temp

    @target_temp.setter
    def target_temp(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import DegreesCi
            assert \
                isinstance(value, DegreesCi), \
                "The 'target_temp' field must be a sub message of type 'DegreesCi'"
        self._target_temp = value

    @builtins.property
    def lower_bound(self):
        """Message field 'lower_bound'."""
        return self._lower_bound

    @lower_bound.setter
    def lower_bound(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import DegreesCi
            assert \
                isinstance(value, DegreesCi), \
                "The 'lower_bound' field must be a sub message of type 'DegreesCi'"
        self._lower_bound = value

    @builtins.property
    def heating_time(self):
        """Message field 'heating_time'."""
        return self._heating_time

    @heating_time.setter
    def heating_time(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Secondsi
            assert \
                isinstance(value, Secondsi), \
                "The 'heating_time' field must be a sub message of type 'Secondsi'"
        self._heating_time = value

    @builtins.property
    def heating_gap(self):
        """Message field 'heating_gap'."""
        return self._heating_gap

    @heating_gap.setter
    def heating_gap(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Secondsi
            assert \
                isinstance(value, Secondsi), \
                "The 'heating_gap' field must be a sub message of type 'Secondsi'"
        self._heating_gap = value
