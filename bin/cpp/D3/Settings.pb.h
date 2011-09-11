// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: D3/Settings.proto

#ifndef PROTOBUF_D3_2fSettings_2eproto__INCLUDED
#define PROTOBUF_D3_2fSettings_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace D3 {
namespace Client {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_D3_2fSettings_2eproto();
void protobuf_AssignDesc_D3_2fSettings_2eproto();
void protobuf_ShutdownFile_D3_2fSettings_2eproto();

class ToonSettings;
class GameAccountSettings;

// ===================================================================

class ToonSettings : public ::google::protobuf::Message {
 public:
  ToonSettings();
  virtual ~ToonSettings();
  
  ToonSettings(const ToonSettings& from);
  
  inline ToonSettings& operator=(const ToonSettings& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ToonSettings& default_instance();
  
  void Swap(ToonSettings* other);
  
  // implements Message ----------------------------------------------
  
  ToonSettings* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ToonSettings& from);
  void MergeFrom(const ToonSettings& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional uint32 ui_flags = 1;
  inline bool has_ui_flags() const;
  inline void clear_ui_flags();
  static const int kUiFlagsFieldNumber = 1;
  inline ::google::protobuf::uint32 ui_flags() const;
  inline void set_ui_flags(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:D3.Client.ToonSettings)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 ui_flags_;
  friend void  protobuf_AddDesc_D3_2fSettings_2eproto();
  friend void protobuf_AssignDesc_D3_2fSettings_2eproto();
  friend void protobuf_ShutdownFile_D3_2fSettings_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static ToonSettings* default_instance_;
};
// -------------------------------------------------------------------

class GameAccountSettings : public ::google::protobuf::Message {
 public:
  GameAccountSettings();
  virtual ~GameAccountSettings();
  
  GameAccountSettings(const GameAccountSettings& from);
  
  inline GameAccountSettings& operator=(const GameAccountSettings& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const GameAccountSettings& default_instance();
  
  void Swap(GameAccountSettings* other);
  
  // implements Message ----------------------------------------------
  
  GameAccountSettings* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GameAccountSettings& from);
  void MergeFrom(const GameAccountSettings& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 use_last_hero = 1;
  inline bool has_use_last_hero() const;
  inline void clear_use_last_hero();
  static const int kUseLastHeroFieldNumber = 1;
  inline ::google::protobuf::int32 use_last_hero() const;
  inline void set_use_last_hero(::google::protobuf::int32 value);
  
  // optional int32 show_offline_toast = 2;
  inline bool has_show_offline_toast() const;
  inline void clear_show_offline_toast();
  static const int kShowOfflineToastFieldNumber = 2;
  inline ::google::protobuf::int32 show_offline_toast() const;
  inline void set_show_offline_toast(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:D3.Client.GameAccountSettings)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 use_last_hero_;
  ::google::protobuf::int32 show_offline_toast_;
  friend void  protobuf_AddDesc_D3_2fSettings_2eproto();
  friend void protobuf_AssignDesc_D3_2fSettings_2eproto();
  friend void protobuf_ShutdownFile_D3_2fSettings_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static GameAccountSettings* default_instance_;
};
// ===================================================================


// ===================================================================

// ToonSettings

// optional uint32 ui_flags = 1;
inline bool ToonSettings::has_ui_flags() const {
  return _has_bit(0);
}
inline void ToonSettings::clear_ui_flags() {
  ui_flags_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 ToonSettings::ui_flags() const {
  return ui_flags_;
}
inline void ToonSettings::set_ui_flags(::google::protobuf::uint32 value) {
  _set_bit(0);
  ui_flags_ = value;
}

// -------------------------------------------------------------------

// GameAccountSettings

// optional int32 use_last_hero = 1;
inline bool GameAccountSettings::has_use_last_hero() const {
  return _has_bit(0);
}
inline void GameAccountSettings::clear_use_last_hero() {
  use_last_hero_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 GameAccountSettings::use_last_hero() const {
  return use_last_hero_;
}
inline void GameAccountSettings::set_use_last_hero(::google::protobuf::int32 value) {
  _set_bit(0);
  use_last_hero_ = value;
}

// optional int32 show_offline_toast = 2;
inline bool GameAccountSettings::has_show_offline_toast() const {
  return _has_bit(1);
}
inline void GameAccountSettings::clear_show_offline_toast() {
  show_offline_toast_ = 0;
  _clear_bit(1);
}
inline ::google::protobuf::int32 GameAccountSettings::show_offline_toast() const {
  return show_offline_toast_;
}
inline void GameAccountSettings::set_show_offline_toast(::google::protobuf::int32 value) {
  _set_bit(1);
  show_offline_toast_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Client
}  // namespace D3

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_D3_2fSettings_2eproto__INCLUDED
