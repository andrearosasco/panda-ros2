# generated from rosidl_generator_py/resource/_idl.py.em
# with input from panda_interface:srv/ApplyCommands.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApplyCommands_Request(type):
    """Metaclass of message 'ApplyCommands_Request'."""

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
            module = import_type_support('panda_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'panda_interface.srv.ApplyCommands_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_commands__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_commands__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_commands__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_commands__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_commands__request

            from panda_interface.msg import PandaCommand
            if PandaCommand.__class__._TYPE_SUPPORT is None:
                PandaCommand.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApplyCommands_Request(metaclass=Metaclass_ApplyCommands_Request):
    """Message class 'ApplyCommands_Request'."""

    __slots__ = [
        '_command',
    ]

    _fields_and_field_types = {
        'command': 'panda_interface/PandaCommand',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['panda_interface', 'msg'], 'PandaCommand'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from panda_interface.msg import PandaCommand
        self.command = kwargs.get('command', PandaCommand())

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
        if self.command != other.command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            from panda_interface.msg import PandaCommand
            assert \
                isinstance(value, PandaCommand), \
                "The 'command' field must be a sub message of type 'PandaCommand'"
        self._command = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ApplyCommands_Response(type):
    """Metaclass of message 'ApplyCommands_Response'."""

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
            module = import_type_support('panda_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'panda_interface.srv.ApplyCommands_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_commands__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_commands__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_commands__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_commands__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_commands__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApplyCommands_Response(metaclass=Metaclass_ApplyCommands_Response):
    """Message class 'ApplyCommands_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_ApplyCommands(type):
    """Metaclass of service 'ApplyCommands'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('panda_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'panda_interface.srv.ApplyCommands')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__apply_commands

            from panda_interface.srv import _apply_commands
            if _apply_commands.Metaclass_ApplyCommands_Request._TYPE_SUPPORT is None:
                _apply_commands.Metaclass_ApplyCommands_Request.__import_type_support__()
            if _apply_commands.Metaclass_ApplyCommands_Response._TYPE_SUPPORT is None:
                _apply_commands.Metaclass_ApplyCommands_Response.__import_type_support__()


class ApplyCommands(metaclass=Metaclass_ApplyCommands):
    from panda_interface.srv._apply_commands import ApplyCommands_Request as Request
    from panda_interface.srv._apply_commands import ApplyCommands_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
