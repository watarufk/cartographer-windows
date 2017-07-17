// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/common/proto/ceres_solver_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/common/proto/ceres_solver_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace common {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* CeresSolverOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CeresSolverOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/common/proto/ceres_solver_options.proto");
  GOOGLE_CHECK(file != NULL);
  CeresSolverOptions_descriptor_ = file->message_type(0);
  static const int CeresSolverOptions_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresSolverOptions, use_nonmonotonic_steps_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresSolverOptions, max_num_iterations_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresSolverOptions, num_threads_),
  };
  CeresSolverOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CeresSolverOptions_descriptor_,
      CeresSolverOptions::default_instance_,
      CeresSolverOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresSolverOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresSolverOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CeresSolverOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CeresSolverOptions_descriptor_, &CeresSolverOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto() {
  delete CeresSolverOptions::default_instance_;
  delete CeresSolverOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n4cartographer/common/proto/ceres_solver"
    "_options.proto\022\031cartographer.common.prot"
    "o\"e\n\022CeresSolverOptions\022\036\n\026use_nonmonoto"
    "nic_steps\030\001 \001(\010\022\032\n\022max_num_iterations\030\002 "
    "\001(\005\022\023\n\013num_threads\030\003 \001(\005", 184);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/common/proto/ceres_solver_options.proto", &protobuf_RegisterTypes);
  CeresSolverOptions::default_instance_ = new CeresSolverOptions();
  CeresSolverOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CeresSolverOptions::kUseNonmonotonicStepsFieldNumber;
const int CeresSolverOptions::kMaxNumIterationsFieldNumber;
const int CeresSolverOptions::kNumThreadsFieldNumber;
#endif  // !_MSC_VER

CeresSolverOptions::CeresSolverOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CeresSolverOptions::InitAsDefaultInstance() {
}

CeresSolverOptions::CeresSolverOptions(const CeresSolverOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CeresSolverOptions::SharedCtor() {
  _cached_size_ = 0;
  use_nonmonotonic_steps_ = false;
  max_num_iterations_ = 0;
  num_threads_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CeresSolverOptions::~CeresSolverOptions() {
  SharedDtor();
}

void CeresSolverOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CeresSolverOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CeresSolverOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CeresSolverOptions_descriptor_;
}

const CeresSolverOptions& CeresSolverOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto();
  return *default_instance_;
}

CeresSolverOptions* CeresSolverOptions::default_instance_ = NULL;

CeresSolverOptions* CeresSolverOptions::New() const {
  return new CeresSolverOptions;
}

void CeresSolverOptions::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    use_nonmonotonic_steps_ = false;
    max_num_iterations_ = 0;
    num_threads_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CeresSolverOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool use_nonmonotonic_steps = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &use_nonmonotonic_steps_)));
          set_has_use_nonmonotonic_steps();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_max_num_iterations;
        break;
      }

      // optional int32 max_num_iterations = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_max_num_iterations:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_num_iterations_)));
          set_has_max_num_iterations();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_num_threads;
        break;
      }

      // optional int32 num_threads = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_num_threads:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_threads_)));
          set_has_num_threads();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CeresSolverOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bool use_nonmonotonic_steps = 1;
  if (has_use_nonmonotonic_steps()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->use_nonmonotonic_steps(), output);
  }

  // optional int32 max_num_iterations = 2;
  if (has_max_num_iterations()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->max_num_iterations(), output);
  }

  // optional int32 num_threads = 3;
  if (has_num_threads()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->num_threads(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CeresSolverOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional bool use_nonmonotonic_steps = 1;
  if (has_use_nonmonotonic_steps()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->use_nonmonotonic_steps(), target);
  }

  // optional int32 max_num_iterations = 2;
  if (has_max_num_iterations()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->max_num_iterations(), target);
  }

  // optional int32 num_threads = 3;
  if (has_num_threads()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->num_threads(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CeresSolverOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool use_nonmonotonic_steps = 1;
    if (has_use_nonmonotonic_steps()) {
      total_size += 1 + 1;
    }

    // optional int32 max_num_iterations = 2;
    if (has_max_num_iterations()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_num_iterations());
    }

    // optional int32 num_threads = 3;
    if (has_num_threads()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->num_threads());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CeresSolverOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CeresSolverOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CeresSolverOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CeresSolverOptions::MergeFrom(const CeresSolverOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_use_nonmonotonic_steps()) {
      set_use_nonmonotonic_steps(from.use_nonmonotonic_steps());
    }
    if (from.has_max_num_iterations()) {
      set_max_num_iterations(from.max_num_iterations());
    }
    if (from.has_num_threads()) {
      set_num_threads(from.num_threads());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CeresSolverOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CeresSolverOptions::CopyFrom(const CeresSolverOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CeresSolverOptions::IsInitialized() const {

  return true;
}

void CeresSolverOptions::Swap(CeresSolverOptions* other) {
  if (other != this) {
    std::swap(use_nonmonotonic_steps_, other->use_nonmonotonic_steps_);
    std::swap(max_num_iterations_, other->max_num_iterations_);
    std::swap(num_threads_, other->num_threads_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CeresSolverOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CeresSolverOptions_descriptor_;
  metadata.reflection = CeresSolverOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace common
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
