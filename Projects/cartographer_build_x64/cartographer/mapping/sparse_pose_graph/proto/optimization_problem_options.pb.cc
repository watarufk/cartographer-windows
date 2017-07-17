// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/sparse_pose_graph/proto/optimization_problem_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/sparse_pose_graph/proto/optimization_problem_options.pb.h"

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
namespace mapping {
namespace sparse_pose_graph {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* OptimizationProblemOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OptimizationProblemOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/sparse_pose_graph/proto/optimization_problem_options.proto");
  GOOGLE_CHECK(file != NULL);
  OptimizationProblemOptions_descriptor_ = file->message_type(0);
  static const int OptimizationProblemOptions_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, huber_scale_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, acceleration_weight_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, rotation_weight_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, consecutive_scan_translation_penalty_factor_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, consecutive_scan_rotation_penalty_factor_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, log_solver_summary_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, ceres_solver_options_),
  };
  OptimizationProblemOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      OptimizationProblemOptions_descriptor_,
      OptimizationProblemOptions::default_instance_,
      OptimizationProblemOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OptimizationProblemOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(OptimizationProblemOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    OptimizationProblemOptions_descriptor_, &OptimizationProblemOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto() {
  delete OptimizationProblemOptions::default_instance_;
  delete OptimizationProblemOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::common::proto::protobuf_AddDesc_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nOcartographer/mapping/sparse_pose_graph"
    "/proto/optimization_problem_options.prot"
    "o\022,cartographer.mapping.sparse_pose_grap"
    "h.proto\0324cartographer/common/proto/ceres"
    "_solver_options.proto\"\267\002\n\032OptimizationPr"
    "oblemOptions\022\023\n\013huber_scale\030\001 \001(\001\022\033\n\023acc"
    "eleration_weight\030\010 \001(\001\022\027\n\017rotation_weigh"
    "t\030\t \001(\001\0223\n+consecutive_scan_translation_"
    "penalty_factor\030\002 \001(\001\0220\n(consecutive_scan"
    "_rotation_penalty_factor\030\003 \001(\001\022\032\n\022log_so"
    "lver_summary\030\005 \001(\010\022K\n\024ceres_solver_optio"
    "ns\030\007 \001(\0132-.cartographer.common.proto.Cer"
    "esSolverOptions", 495);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/sparse_pose_graph/proto/optimization_problem_options.proto", &protobuf_RegisterTypes);
  OptimizationProblemOptions::default_instance_ = new OptimizationProblemOptions();
  OptimizationProblemOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int OptimizationProblemOptions::kHuberScaleFieldNumber;
const int OptimizationProblemOptions::kAccelerationWeightFieldNumber;
const int OptimizationProblemOptions::kRotationWeightFieldNumber;
const int OptimizationProblemOptions::kConsecutiveScanTranslationPenaltyFactorFieldNumber;
const int OptimizationProblemOptions::kConsecutiveScanRotationPenaltyFactorFieldNumber;
const int OptimizationProblemOptions::kLogSolverSummaryFieldNumber;
const int OptimizationProblemOptions::kCeresSolverOptionsFieldNumber;
#endif  // !_MSC_VER

OptimizationProblemOptions::OptimizationProblemOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void OptimizationProblemOptions::InitAsDefaultInstance() {
  ceres_solver_options_ = const_cast< ::cartographer::common::proto::CeresSolverOptions*>(&::cartographer::common::proto::CeresSolverOptions::default_instance());
}

OptimizationProblemOptions::OptimizationProblemOptions(const OptimizationProblemOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void OptimizationProblemOptions::SharedCtor() {
  _cached_size_ = 0;
  huber_scale_ = 0;
  acceleration_weight_ = 0;
  rotation_weight_ = 0;
  consecutive_scan_translation_penalty_factor_ = 0;
  consecutive_scan_rotation_penalty_factor_ = 0;
  log_solver_summary_ = false;
  ceres_solver_options_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OptimizationProblemOptions::~OptimizationProblemOptions() {
  SharedDtor();
}

void OptimizationProblemOptions::SharedDtor() {
  if (this != default_instance_) {
    delete ceres_solver_options_;
  }
}

void OptimizationProblemOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OptimizationProblemOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OptimizationProblemOptions_descriptor_;
}

const OptimizationProblemOptions& OptimizationProblemOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fsparse_5fpose_5fgraph_2fproto_2foptimization_5fproblem_5foptions_2eproto();
  return *default_instance_;
}

OptimizationProblemOptions* OptimizationProblemOptions::default_instance_ = NULL;

OptimizationProblemOptions* OptimizationProblemOptions::New() const {
  return new OptimizationProblemOptions;
}

void OptimizationProblemOptions::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    huber_scale_ = 0;
    acceleration_weight_ = 0;
    rotation_weight_ = 0;
    consecutive_scan_translation_penalty_factor_ = 0;
    consecutive_scan_rotation_penalty_factor_ = 0;
    log_solver_summary_ = false;
    if (has_ceres_solver_options()) {
      if (ceres_solver_options_ != NULL) ceres_solver_options_->::cartographer::common::proto::CeresSolverOptions::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool OptimizationProblemOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double huber_scale = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &huber_scale_)));
          set_has_huber_scale();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_consecutive_scan_translation_penalty_factor;
        break;
      }

      // optional double consecutive_scan_translation_penalty_factor = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_consecutive_scan_translation_penalty_factor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &consecutive_scan_translation_penalty_factor_)));
          set_has_consecutive_scan_translation_penalty_factor();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_consecutive_scan_rotation_penalty_factor;
        break;
      }

      // optional double consecutive_scan_rotation_penalty_factor = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_consecutive_scan_rotation_penalty_factor:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &consecutive_scan_rotation_penalty_factor_)));
          set_has_consecutive_scan_rotation_penalty_factor();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_log_solver_summary;
        break;
      }

      // optional bool log_solver_summary = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_log_solver_summary:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &log_solver_summary_)));
          set_has_log_solver_summary();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_ceres_solver_options;
        break;
      }

      // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_ceres_solver_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ceres_solver_options()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(65)) goto parse_acceleration_weight;
        break;
      }

      // optional double acceleration_weight = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_acceleration_weight:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &acceleration_weight_)));
          set_has_acceleration_weight();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(73)) goto parse_rotation_weight;
        break;
      }

      // optional double rotation_weight = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_rotation_weight:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &rotation_weight_)));
          set_has_rotation_weight();
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

void OptimizationProblemOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional double huber_scale = 1;
  if (has_huber_scale()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->huber_scale(), output);
  }

  // optional double consecutive_scan_translation_penalty_factor = 2;
  if (has_consecutive_scan_translation_penalty_factor()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->consecutive_scan_translation_penalty_factor(), output);
  }

  // optional double consecutive_scan_rotation_penalty_factor = 3;
  if (has_consecutive_scan_rotation_penalty_factor()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->consecutive_scan_rotation_penalty_factor(), output);
  }

  // optional bool log_solver_summary = 5;
  if (has_log_solver_summary()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->log_solver_summary(), output);
  }

  // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 7;
  if (has_ceres_solver_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->ceres_solver_options(), output);
  }

  // optional double acceleration_weight = 8;
  if (has_acceleration_weight()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->acceleration_weight(), output);
  }

  // optional double rotation_weight = 9;
  if (has_rotation_weight()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->rotation_weight(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* OptimizationProblemOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional double huber_scale = 1;
  if (has_huber_scale()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->huber_scale(), target);
  }

  // optional double consecutive_scan_translation_penalty_factor = 2;
  if (has_consecutive_scan_translation_penalty_factor()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->consecutive_scan_translation_penalty_factor(), target);
  }

  // optional double consecutive_scan_rotation_penalty_factor = 3;
  if (has_consecutive_scan_rotation_penalty_factor()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->consecutive_scan_rotation_penalty_factor(), target);
  }

  // optional bool log_solver_summary = 5;
  if (has_log_solver_summary()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->log_solver_summary(), target);
  }

  // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 7;
  if (has_ceres_solver_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->ceres_solver_options(), target);
  }

  // optional double acceleration_weight = 8;
  if (has_acceleration_weight()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->acceleration_weight(), target);
  }

  // optional double rotation_weight = 9;
  if (has_rotation_weight()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->rotation_weight(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int OptimizationProblemOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double huber_scale = 1;
    if (has_huber_scale()) {
      total_size += 1 + 8;
    }

    // optional double acceleration_weight = 8;
    if (has_acceleration_weight()) {
      total_size += 1 + 8;
    }

    // optional double rotation_weight = 9;
    if (has_rotation_weight()) {
      total_size += 1 + 8;
    }

    // optional double consecutive_scan_translation_penalty_factor = 2;
    if (has_consecutive_scan_translation_penalty_factor()) {
      total_size += 1 + 8;
    }

    // optional double consecutive_scan_rotation_penalty_factor = 3;
    if (has_consecutive_scan_rotation_penalty_factor()) {
      total_size += 1 + 8;
    }

    // optional bool log_solver_summary = 5;
    if (has_log_solver_summary()) {
      total_size += 1 + 1;
    }

    // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 7;
    if (has_ceres_solver_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->ceres_solver_options());
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

void OptimizationProblemOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const OptimizationProblemOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const OptimizationProblemOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OptimizationProblemOptions::MergeFrom(const OptimizationProblemOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_huber_scale()) {
      set_huber_scale(from.huber_scale());
    }
    if (from.has_acceleration_weight()) {
      set_acceleration_weight(from.acceleration_weight());
    }
    if (from.has_rotation_weight()) {
      set_rotation_weight(from.rotation_weight());
    }
    if (from.has_consecutive_scan_translation_penalty_factor()) {
      set_consecutive_scan_translation_penalty_factor(from.consecutive_scan_translation_penalty_factor());
    }
    if (from.has_consecutive_scan_rotation_penalty_factor()) {
      set_consecutive_scan_rotation_penalty_factor(from.consecutive_scan_rotation_penalty_factor());
    }
    if (from.has_log_solver_summary()) {
      set_log_solver_summary(from.log_solver_summary());
    }
    if (from.has_ceres_solver_options()) {
      mutable_ceres_solver_options()->::cartographer::common::proto::CeresSolverOptions::MergeFrom(from.ceres_solver_options());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void OptimizationProblemOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OptimizationProblemOptions::CopyFrom(const OptimizationProblemOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OptimizationProblemOptions::IsInitialized() const {

  return true;
}

void OptimizationProblemOptions::Swap(OptimizationProblemOptions* other) {
  if (other != this) {
    std::swap(huber_scale_, other->huber_scale_);
    std::swap(acceleration_weight_, other->acceleration_weight_);
    std::swap(rotation_weight_, other->rotation_weight_);
    std::swap(consecutive_scan_translation_penalty_factor_, other->consecutive_scan_translation_penalty_factor_);
    std::swap(consecutive_scan_rotation_penalty_factor_, other->consecutive_scan_rotation_penalty_factor_);
    std::swap(log_solver_summary_, other->log_solver_summary_);
    std::swap(ceres_solver_options_, other->ceres_solver_options_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata OptimizationProblemOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OptimizationProblemOptions_descriptor_;
  metadata.reflection = OptimizationProblemOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace sparse_pose_graph
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
