# generated from rosidl_generator_py/resource/_idl.py.em
# with input from incubator_cpp_pkg_interfaces:msg/KalmanPredictioni.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KalmanPredictioni(type):
    """Metaclass of message 'KalmanPredictioni'."""

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
                'incubator_cpp_pkg_interfaces.msg.KalmanPredictioni')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__kalman_predictioni
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__kalman_predictioni
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__kalman_predictioni
            cls._TYPE_SUPPORT = module.type_support_msg__msg__kalman_predictioni
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__kalman_predictioni

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


class KalmanPredictioni(metaclass=Metaclass_KalmanPredictioni):
    """Message class 'KalmanPredictioni'."""

    __slots__ = [
        '_t_heater',
        '_prediction_error',
        '_average_temperature',
        '_prediction_time',
    ]

    _fields_and_field_types = {
        't_heater': 'incubator_cpp_pkg_interfaces/DegreesCi',
        'prediction_error': 'incubator_cpp_pkg_interfaces/DegreesCi',
        'average_temperature': 'incubator_cpp_pkg_interfaces/DegreesCi',
        'prediction_time': 'incubator_cpp_pkg_interfaces/Secondsi',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'DegreesCi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'DegreesCi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'DegreesCi'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['incubator_cpp_pkg_interfaces', 'msg'], 'Secondsi'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from incubator_cpp_pkg_interfaces.msg import DegreesCi
        self.t_heater = kwargs.get('t_heater', DegreesCi())
        from incubator_cpp_pkg_interfaces.msg import DegreesCi
        self.prediction_error = kwargs.get('prediction_error', DegreesCi())
        from incubator_cpp_pkg_interfaces.msg import DegreesCi
        self.average_temperature = kwargs.get('average_temperature', DegreesCi())
        from incubator_cpp_pkg_interfaces.msg import Secondsi
        self.prediction_time = kwargs.get('prediction_time', Secondsi())

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
        if self.t_heater != other.t_heater:
            return False
        if self.prediction_error != other.prediction_error:
            return False
        if self.average_temperature != other.average_temperature:
            return False
        if self.prediction_time != other.prediction_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def t_heater(self):
        """Message field 't_heater'."""
        return self._t_heater

    @t_heater.setter
    def t_heater(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import DegreesCi
            assert \
                isinstance(value, DegreesCi), \
                "The 't_heater' field must be a sub message of type 'DegreesCi'"
        self._t_heater = value

    @builtins.property
    def prediction_error(self):
        """Message field 'prediction_error'."""
        return self._prediction_error

    @prediction_error.setter
    def prediction_error(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import DegreesCi
            assert \
                isinstance(value, DegreesCi), \
                "The 'prediction_error' field must be a sub message of type 'DegreesCi'"
        self._prediction_error = value

    @builtins.property
    def average_temperature(self):
        """Message field 'average_temperature'."""
        return self._average_temperature

    @average_temperature.setter
    def average_temperature(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import DegreesCi
            assert \
                isinstance(value, DegreesCi), \
                "The 'average_temperature' field must be a sub message of type 'DegreesCi'"
        self._average_temperature = value

    @builtins.property
    def prediction_time(self):
        """Message field 'prediction_time'."""
        return self._prediction_time

    @prediction_time.setter
    def prediction_time(self, value):
        if __debug__:
            from incubator_cpp_pkg_interfaces.msg import Secondsi
            assert \
                isinstance(value, Secondsi), \
                "The 'prediction_time' field must be a sub message of type 'Secondsi'"
        self._prediction_time = value
