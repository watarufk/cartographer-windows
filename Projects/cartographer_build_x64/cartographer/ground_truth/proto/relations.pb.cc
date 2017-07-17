// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/ground_truth/proto/relations.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/ground_truth/proto/relations.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace ground_truth {
namespace proto {
class RelationDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Relation> {
} _Relation_default_instance_;
class GroundTruthDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<GroundTruth> {
} _GroundTruth_default_instance_;

namespace protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Relation, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Relation, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Relation, timestamp1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Relation, timestamp2_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Relation, expected_),
  1,
  2,
  0,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GroundTruth, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GroundTruth, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GroundTruth, relation_),
  ~0u,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 8, sizeof(Relation)},
  { 11, 17, sizeof(GroundTruth)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Relation_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_GroundTruth_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cartographer/ground_truth/proto/relations.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _Relation_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _GroundTruth_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::cartographer::transform::proto::protobuf_cartographer_2ftransform_2fproto_2ftransform_2eproto::InitDefaults();
  _Relation_default_instance_.DefaultConstruct();
  _GroundTruth_default_instance_.DefaultConstruct();
  _Relation_default_instance_.get_mutable()->expected_ = const_cast< ::cartographer::transform::proto::Rigid3d*>(
      ::cartographer::transform::proto::Rigid3d::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n/cartographer/ground_truth/proto/relati"
      "ons.proto\022\037cartographer.ground_truth.pro"
      "to\032,cartographer/transform/proto/transfo"
      "rm.proto\"k\n\010Relation\022\022\n\ntimestamp1\030\001 \001(\003"
      "\022\022\n\ntimestamp2\030\002 \001(\003\0227\n\010expected\030\003 \001(\0132%"
      ".cartographer.transform.proto.Rigid3d\"J\n"
      "\013GroundTruth\022;\n\010relation\030\001 \003(\0132).cartogr"
      "apher.ground_truth.proto.Relation"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 313);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/ground_truth/proto/relations.proto", &protobuf_RegisterTypes);
  ::cartographer::transform::proto::protobuf_cartographer_2ftransform_2fproto_2ftransform_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Relation::kTimestamp1FieldNumber;
const int Relation::kTimestamp2FieldNumber;
const int Relation::kExpectedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Relation::Relation()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.ground_truth.proto.Relation)
}
Relation::Relation(const Relation& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_expected()) {
    expected_ = new ::cartographer::transform::proto::Rigid3d(*from.expected_);
  } else {
    expected_ = NULL;
  }
  ::memcpy(&timestamp1_, &from.timestamp1_,
    static_cast<size_t>(reinterpret_cast<char*>(&timestamp2_) -
    reinterpret_cast<char*>(&timestamp1_)) + sizeof(timestamp2_));
  // @@protoc_insertion_point(copy_constructor:cartographer.ground_truth.proto.Relation)
}

void Relation::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&expected_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&timestamp2_) -
      reinterpret_cast<char*>(&expected_)) + sizeof(timestamp2_));
}

Relation::~Relation() {
  // @@protoc_insertion_point(destructor:cartographer.ground_truth.proto.Relation)
  SharedDtor();
}

void Relation::SharedDtor() {
  if (this != internal_default_instance()) {
    delete expected_;
  }
}

void Relation::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Relation::descriptor() {
  protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Relation& Relation::default_instance() {
  protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::InitDefaults();
  return *internal_default_instance();
}

Relation* Relation::New(::google::protobuf::Arena* arena) const {
  Relation* n = new Relation;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Relation::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.ground_truth.proto.Relation)
  if (has_expected()) {
    GOOGLE_DCHECK(expected_ != NULL);
    expected_->::cartographer::transform::proto::Rigid3d::Clear();
  }
  if (_has_bits_[0 / 32] & 6u) {
    ::memset(&timestamp1_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&timestamp2_) -
        reinterpret_cast<char*>(&timestamp1_)) + sizeof(timestamp2_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Relation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.ground_truth.proto.Relation)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 timestamp1 = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_timestamp1();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &timestamp1_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 timestamp2 = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          set_has_timestamp2();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &timestamp2_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .cartographer.transform.proto.Rigid3d expected = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_expected()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.ground_truth.proto.Relation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.ground_truth.proto.Relation)
  return false;
#undef DO_
}

void Relation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.ground_truth.proto.Relation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int64 timestamp1 = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->timestamp1(), output);
  }

  // optional int64 timestamp2 = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->timestamp2(), output);
  }

  // optional .cartographer.transform.proto.Rigid3d expected = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->expected_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.ground_truth.proto.Relation)
}

::google::protobuf::uint8* Relation::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.ground_truth.proto.Relation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int64 timestamp1 = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->timestamp1(), target);
  }

  // optional int64 timestamp2 = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->timestamp2(), target);
  }

  // optional .cartographer.transform.proto.Rigid3d expected = 3;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->expected_, deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.ground_truth.proto.Relation)
  return target;
}

size_t Relation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.ground_truth.proto.Relation)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional .cartographer.transform.proto.Rigid3d expected = 3;
    if (has_expected()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->expected_);
    }

    // optional int64 timestamp1 = 1;
    if (has_timestamp1()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->timestamp1());
    }

    // optional int64 timestamp2 = 2;
    if (has_timestamp2()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->timestamp2());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Relation::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.ground_truth.proto.Relation)
  GOOGLE_DCHECK_NE(&from, this);
  const Relation* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Relation>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.ground_truth.proto.Relation)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.ground_truth.proto.Relation)
    MergeFrom(*source);
  }
}

void Relation::MergeFrom(const Relation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.ground_truth.proto.Relation)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_expected()->::cartographer::transform::proto::Rigid3d::MergeFrom(from.expected());
    }
    if (cached_has_bits & 0x00000002u) {
      timestamp1_ = from.timestamp1_;
    }
    if (cached_has_bits & 0x00000004u) {
      timestamp2_ = from.timestamp2_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Relation::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.ground_truth.proto.Relation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Relation::CopyFrom(const Relation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.ground_truth.proto.Relation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Relation::IsInitialized() const {
  return true;
}

void Relation::Swap(Relation* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Relation::InternalSwap(Relation* other) {
  std::swap(expected_, other->expected_);
  std::swap(timestamp1_, other->timestamp1_);
  std::swap(timestamp2_, other->timestamp2_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Relation::GetMetadata() const {
  protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Relation

// optional int64 timestamp1 = 1;
bool Relation::has_timestamp1() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Relation::set_has_timestamp1() {
  _has_bits_[0] |= 0x00000002u;
}
void Relation::clear_has_timestamp1() {
  _has_bits_[0] &= ~0x00000002u;
}
void Relation::clear_timestamp1() {
  timestamp1_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp1();
}
::google::protobuf::int64 Relation::timestamp1() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.timestamp1)
  return timestamp1_;
}
void Relation::set_timestamp1(::google::protobuf::int64 value) {
  set_has_timestamp1();
  timestamp1_ = value;
  // @@protoc_insertion_point(field_set:cartographer.ground_truth.proto.Relation.timestamp1)
}

// optional int64 timestamp2 = 2;
bool Relation::has_timestamp2() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Relation::set_has_timestamp2() {
  _has_bits_[0] |= 0x00000004u;
}
void Relation::clear_has_timestamp2() {
  _has_bits_[0] &= ~0x00000004u;
}
void Relation::clear_timestamp2() {
  timestamp2_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp2();
}
::google::protobuf::int64 Relation::timestamp2() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.timestamp2)
  return timestamp2_;
}
void Relation::set_timestamp2(::google::protobuf::int64 value) {
  set_has_timestamp2();
  timestamp2_ = value;
  // @@protoc_insertion_point(field_set:cartographer.ground_truth.proto.Relation.timestamp2)
}

// optional .cartographer.transform.proto.Rigid3d expected = 3;
bool Relation::has_expected() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Relation::set_has_expected() {
  _has_bits_[0] |= 0x00000001u;
}
void Relation::clear_has_expected() {
  _has_bits_[0] &= ~0x00000001u;
}
void Relation::clear_expected() {
  if (expected_ != NULL) expected_->::cartographer::transform::proto::Rigid3d::Clear();
  clear_has_expected();
}
const ::cartographer::transform::proto::Rigid3d& Relation::expected() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.expected)
  return expected_ != NULL ? *expected_
                         : *::cartographer::transform::proto::Rigid3d::internal_default_instance();
}
::cartographer::transform::proto::Rigid3d* Relation::mutable_expected() {
  set_has_expected();
  if (expected_ == NULL) {
    expected_ = new ::cartographer::transform::proto::Rigid3d;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.ground_truth.proto.Relation.expected)
  return expected_;
}
::cartographer::transform::proto::Rigid3d* Relation::release_expected() {
  // @@protoc_insertion_point(field_release:cartographer.ground_truth.proto.Relation.expected)
  clear_has_expected();
  ::cartographer::transform::proto::Rigid3d* temp = expected_;
  expected_ = NULL;
  return temp;
}
void Relation::set_allocated_expected(::cartographer::transform::proto::Rigid3d* expected) {
  delete expected_;
  expected_ = expected;
  if (expected) {
    set_has_expected();
  } else {
    clear_has_expected();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.ground_truth.proto.Relation.expected)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GroundTruth::kRelationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GroundTruth::GroundTruth()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.ground_truth.proto.GroundTruth)
}
GroundTruth::GroundTruth(const GroundTruth& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      relation_(from.relation_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:cartographer.ground_truth.proto.GroundTruth)
}

void GroundTruth::SharedCtor() {
  _cached_size_ = 0;
}

GroundTruth::~GroundTruth() {
  // @@protoc_insertion_point(destructor:cartographer.ground_truth.proto.GroundTruth)
  SharedDtor();
}

void GroundTruth::SharedDtor() {
}

void GroundTruth::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GroundTruth::descriptor() {
  protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GroundTruth& GroundTruth::default_instance() {
  protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::InitDefaults();
  return *internal_default_instance();
}

GroundTruth* GroundTruth::New(::google::protobuf::Arena* arena) const {
  GroundTruth* n = new GroundTruth;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GroundTruth::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.ground_truth.proto.GroundTruth)
  relation_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool GroundTruth::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.ground_truth.proto.GroundTruth)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .cartographer.ground_truth.proto.Relation relation = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_relation()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.ground_truth.proto.GroundTruth)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.ground_truth.proto.GroundTruth)
  return false;
#undef DO_
}

void GroundTruth::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.ground_truth.proto.GroundTruth)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .cartographer.ground_truth.proto.Relation relation = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->relation_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->relation(static_cast<int>(i)), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.ground_truth.proto.GroundTruth)
}

::google::protobuf::uint8* GroundTruth::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.ground_truth.proto.GroundTruth)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .cartographer.ground_truth.proto.Relation relation = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->relation_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->relation(static_cast<int>(i)), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.ground_truth.proto.GroundTruth)
  return target;
}

size_t GroundTruth::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.ground_truth.proto.GroundTruth)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated .cartographer.ground_truth.proto.Relation relation = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->relation_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->relation(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GroundTruth::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.ground_truth.proto.GroundTruth)
  GOOGLE_DCHECK_NE(&from, this);
  const GroundTruth* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GroundTruth>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.ground_truth.proto.GroundTruth)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.ground_truth.proto.GroundTruth)
    MergeFrom(*source);
  }
}

void GroundTruth::MergeFrom(const GroundTruth& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.ground_truth.proto.GroundTruth)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  relation_.MergeFrom(from.relation_);
}

void GroundTruth::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.ground_truth.proto.GroundTruth)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GroundTruth::CopyFrom(const GroundTruth& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.ground_truth.proto.GroundTruth)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroundTruth::IsInitialized() const {
  return true;
}

void GroundTruth::Swap(GroundTruth* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GroundTruth::InternalSwap(GroundTruth* other) {
  relation_.InternalSwap(&other->relation_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GroundTruth::GetMetadata() const {
  protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GroundTruth

// repeated .cartographer.ground_truth.proto.Relation relation = 1;
int GroundTruth::relation_size() const {
  return relation_.size();
}
void GroundTruth::clear_relation() {
  relation_.Clear();
}
const ::cartographer::ground_truth::proto::Relation& GroundTruth::relation(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_.Get(index);
}
::cartographer::ground_truth::proto::Relation* GroundTruth::mutable_relation(int index) {
  // @@protoc_insertion_point(field_mutable:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_.Mutable(index);
}
::cartographer::ground_truth::proto::Relation* GroundTruth::add_relation() {
  // @@protoc_insertion_point(field_add:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_.Add();
}
::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >*
GroundTruth::mutable_relation() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.ground_truth.proto.GroundTruth.relation)
  return &relation_;
}
const ::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >&
GroundTruth::relation() const {
  // @@protoc_insertion_point(field_list:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace ground_truth
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)