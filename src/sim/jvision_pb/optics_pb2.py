# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: optics.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='optics.proto',
  package='',
  syntax='proto2',
  serialized_pb=b'\n\x0coptics.proto\"&\n\x06Optics\x12\x1c\n\x0cstats_record\x18\x01 \x03(\x0b\x32\x06.Stats\"\x07\n\x05Stats'
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_OPTICS = _descriptor.Descriptor(
  name='Optics',
  full_name='Optics',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='stats_record', full_name='Optics.stats_record', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=16,
  serialized_end=54,
)


_STATS = _descriptor.Descriptor(
  name='Stats',
  full_name='Stats',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=56,
  serialized_end=63,
)

_OPTICS.fields_by_name['stats_record'].message_type = _STATS
DESCRIPTOR.message_types_by_name['Optics'] = _OPTICS
DESCRIPTOR.message_types_by_name['Stats'] = _STATS

Optics = _reflection.GeneratedProtocolMessageType('Optics', (_message.Message,), dict(
  DESCRIPTOR = _OPTICS,
  __module__ = 'optics_pb2'
  # @@protoc_insertion_point(class_scope:Optics)
  ))
_sym_db.RegisterMessage(Optics)

Stats = _reflection.GeneratedProtocolMessageType('Stats', (_message.Message,), dict(
  DESCRIPTOR = _STATS,
  __module__ = 'optics_pb2'
  # @@protoc_insertion_point(class_scope:Stats)
  ))
_sym_db.RegisterMessage(Stats)


# @@protoc_insertion_point(module_scope)