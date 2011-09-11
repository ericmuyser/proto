// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "D3/Settings.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace D3 {
namespace Client {

namespace {

const ::google::protobuf::Descriptor* ToonSettings_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ToonSettings_reflection_ = NULL;
const ::google::protobuf::Descriptor* GameAccountSettings_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GameAccountSettings_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_D3_2fSettings_2eproto() {
  protobuf_AddDesc_D3_2fSettings_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "D3/Settings.proto");
  GOOGLE_CHECK(file != NULL);
  ToonSettings_descriptor_ = file->message_type(0);
  static const int ToonSettings_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ToonSettings, ui_flags_),
  };
  ToonSettings_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ToonSettings_descriptor_,
      ToonSettings::default_instance_,
      ToonSettings_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ToonSettings, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ToonSettings, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ToonSettings));
  GameAccountSettings_descriptor_ = file->message_type(1);
  static const int GameAccountSettings_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountSettings, use_last_hero_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountSettings, show_offline_toast_),
  };
  GameAccountSettings_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GameAccountSettings_descriptor_,
      GameAccountSettings::default_instance_,
      GameAccountSettings_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountSettings, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GameAccountSettings, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GameAccountSettings));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_D3_2fSettings_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ToonSettings_descriptor_, &ToonSettings::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GameAccountSettings_descriptor_, &GameAccountSettings::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_D3_2fSettings_2eproto() {
  delete ToonSettings::default_instance_;
  delete ToonSettings_reflection_;
  delete GameAccountSettings::default_instance_;
  delete GameAccountSettings_reflection_;
}

void protobuf_AddDesc_D3_2fSettings_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021D3/Settings.proto\022\tD3.Client\" \n\014ToonSe"
    "ttings\022\020\n\010ui_flags\030\001 \001(\r\"H\n\023GameAccountS"
    "ettings\022\025\n\ruse_last_hero\030\001 \001(\005\022\032\n\022show_o"
    "ffline_toast\030\002 \001(\005", 138);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "D3/Settings.proto", &protobuf_RegisterTypes);
  ToonSettings::default_instance_ = new ToonSettings();
  GameAccountSettings::default_instance_ = new GameAccountSettings();
  ToonSettings::default_instance_->InitAsDefaultInstance();
  GameAccountSettings::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_D3_2fSettings_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_D3_2fSettings_2eproto {
  StaticDescriptorInitializer_D3_2fSettings_2eproto() {
    protobuf_AddDesc_D3_2fSettings_2eproto();
  }
} static_descriptor_initializer_D3_2fSettings_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int ToonSettings::kUiFlagsFieldNumber;
#endif  // !_MSC_VER

ToonSettings::ToonSettings()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ToonSettings::InitAsDefaultInstance() {
}

ToonSettings::ToonSettings(const ToonSettings& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ToonSettings::SharedCtor() {
  _cached_size_ = 0;
  ui_flags_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ToonSettings::~ToonSettings() {
  SharedDtor();
}

void ToonSettings::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ToonSettings::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ToonSettings::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ToonSettings_descriptor_;
}

const ToonSettings& ToonSettings::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_D3_2fSettings_2eproto();  return *default_instance_;
}

ToonSettings* ToonSettings::default_instance_ = NULL;

ToonSettings* ToonSettings::New() const {
  return new ToonSettings;
}

void ToonSettings::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    ui_flags_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ToonSettings::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 ui_flags = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &ui_flags_)));
          _set_bit(0);
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

void ToonSettings::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 ui_flags = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->ui_flags(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ToonSettings::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 ui_flags = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->ui_flags(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ToonSettings::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 ui_flags = 1;
    if (has_ui_flags()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->ui_flags());
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

void ToonSettings::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ToonSettings* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ToonSettings*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ToonSettings::MergeFrom(const ToonSettings& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_ui_flags(from.ui_flags());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ToonSettings::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ToonSettings::CopyFrom(const ToonSettings& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ToonSettings::IsInitialized() const {
  
  return true;
}

void ToonSettings::Swap(ToonSettings* other) {
  if (other != this) {
    std::swap(ui_flags_, other->ui_flags_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ToonSettings::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ToonSettings_descriptor_;
  metadata.reflection = ToonSettings_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int GameAccountSettings::kUseLastHeroFieldNumber;
const int GameAccountSettings::kShowOfflineToastFieldNumber;
#endif  // !_MSC_VER

GameAccountSettings::GameAccountSettings()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void GameAccountSettings::InitAsDefaultInstance() {
}

GameAccountSettings::GameAccountSettings(const GameAccountSettings& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void GameAccountSettings::SharedCtor() {
  _cached_size_ = 0;
  use_last_hero_ = 0;
  show_offline_toast_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GameAccountSettings::~GameAccountSettings() {
  SharedDtor();
}

void GameAccountSettings::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GameAccountSettings::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GameAccountSettings::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GameAccountSettings_descriptor_;
}

const GameAccountSettings& GameAccountSettings::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_D3_2fSettings_2eproto();  return *default_instance_;
}

GameAccountSettings* GameAccountSettings::default_instance_ = NULL;

GameAccountSettings* GameAccountSettings::New() const {
  return new GameAccountSettings;
}

void GameAccountSettings::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    use_last_hero_ = 0;
    show_offline_toast_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GameAccountSettings::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 use_last_hero = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &use_last_hero_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_show_offline_toast;
        break;
      }
      
      // optional int32 show_offline_toast = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_show_offline_toast:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &show_offline_toast_)));
          _set_bit(1);
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

void GameAccountSettings::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 use_last_hero = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->use_last_hero(), output);
  }
  
  // optional int32 show_offline_toast = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->show_offline_toast(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* GameAccountSettings::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 use_last_hero = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->use_last_hero(), target);
  }
  
  // optional int32 show_offline_toast = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->show_offline_toast(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int GameAccountSettings::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 use_last_hero = 1;
    if (has_use_last_hero()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->use_last_hero());
    }
    
    // optional int32 show_offline_toast = 2;
    if (has_show_offline_toast()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->show_offline_toast());
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

void GameAccountSettings::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GameAccountSettings* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GameAccountSettings*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GameAccountSettings::MergeFrom(const GameAccountSettings& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_use_last_hero(from.use_last_hero());
    }
    if (from._has_bit(1)) {
      set_show_offline_toast(from.show_offline_toast());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GameAccountSettings::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GameAccountSettings::CopyFrom(const GameAccountSettings& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameAccountSettings::IsInitialized() const {
  
  return true;
}

void GameAccountSettings::Swap(GameAccountSettings* other) {
  if (other != this) {
    std::swap(use_last_hero_, other->use_last_hero_);
    std::swap(show_offline_toast_, other->show_offline_toast_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GameAccountSettings::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GameAccountSettings_descriptor_;
  metadata.reflection = GameAccountSettings_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Client
}  // namespace D3

// @@protoc_insertion_point(global_scope)
