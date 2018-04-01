// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: computer.proto

#ifndef PROTOBUF_computer_2eproto__INCLUDED
#define PROTOBUF_computer_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "authorization.pb.h"
#include "desktop_session.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_computer_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsComputerImpl();
void InitDefaultsComputer();
inline void InitDefaults() {
  InitDefaultsComputer();
}
}  // namespace protobuf_computer_2eproto
namespace aspia {
namespace proto {
class Computer;
class ComputerDefaultTypeInternal;
extern ComputerDefaultTypeInternal _Computer_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {

// ===================================================================

class Computer : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.Computer) */ {
 public:
  Computer();
  virtual ~Computer();

  Computer(const Computer& from);

  inline Computer& operator=(const Computer& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Computer(Computer&& from) noexcept
    : Computer() {
    *this = ::std::move(from);
  }

  inline Computer& operator=(Computer&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Computer& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Computer* internal_default_instance() {
    return reinterpret_cast<const Computer*>(
               &_Computer_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Computer* other);
  friend void swap(Computer& a, Computer& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Computer* New() const PROTOBUF_FINAL { return New(NULL); }

  Computer* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Computer& from);
  void MergeFrom(const Computer& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Computer* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string comment = 2;
  void clear_comment();
  static const int kCommentFieldNumber = 2;
  const ::std::string& comment() const;
  void set_comment(const ::std::string& value);
  #if LANG_CXX11
  void set_comment(::std::string&& value);
  #endif
  void set_comment(const char* value);
  void set_comment(const char* value, size_t size);
  ::std::string* mutable_comment();
  ::std::string* release_comment();
  void set_allocated_comment(::std::string* comment);

  // string address = 3;
  void clear_address();
  static const int kAddressFieldNumber = 3;
  const ::std::string& address() const;
  void set_address(const ::std::string& value);
  #if LANG_CXX11
  void set_address(::std::string&& value);
  #endif
  void set_address(const char* value);
  void set_address(const char* value, size_t size);
  ::std::string* mutable_address();
  ::std::string* release_address();
  void set_allocated_address(::std::string* address);

  // string username = 5;
  void clear_username();
  static const int kUsernameFieldNumber = 5;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  #if LANG_CXX11
  void set_username(::std::string&& value);
  #endif
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // string password = 6;
  void clear_password();
  static const int kPasswordFieldNumber = 6;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  #if LANG_CXX11
  void set_password(::std::string&& value);
  #endif
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // .aspia.proto.desktop.Config desktop_manage_session = 8;
  bool has_desktop_manage_session() const;
  void clear_desktop_manage_session();
  static const int kDesktopManageSessionFieldNumber = 8;
  const ::aspia::proto::desktop::Config& desktop_manage_session() const;
  ::aspia::proto::desktop::Config* release_desktop_manage_session();
  ::aspia::proto::desktop::Config* mutable_desktop_manage_session();
  void set_allocated_desktop_manage_session(::aspia::proto::desktop::Config* desktop_manage_session);

  // .aspia.proto.desktop.Config desktop_view_session = 9;
  bool has_desktop_view_session() const;
  void clear_desktop_view_session();
  static const int kDesktopViewSessionFieldNumber = 9;
  const ::aspia::proto::desktop::Config& desktop_view_session() const;
  ::aspia::proto::desktop::Config* release_desktop_view_session();
  ::aspia::proto::desktop::Config* mutable_desktop_view_session();
  void set_allocated_desktop_view_session(::aspia::proto::desktop::Config* desktop_view_session);

  // uint32 port = 4;
  void clear_port();
  static const int kPortFieldNumber = 4;
  ::google::protobuf::uint32 port() const;
  void set_port(::google::protobuf::uint32 value);

  // .aspia.proto.auth.SessionType session_type = 7;
  void clear_session_type();
  static const int kSessionTypeFieldNumber = 7;
  ::aspia::proto::auth::SessionType session_type() const;
  void set_session_type(::aspia::proto::auth::SessionType value);

  // @@protoc_insertion_point(class_scope:aspia.proto.Computer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr comment_;
  ::google::protobuf::internal::ArenaStringPtr address_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  ::aspia::proto::desktop::Config* desktop_manage_session_;
  ::aspia::proto::desktop::Config* desktop_view_session_;
  ::google::protobuf::uint32 port_;
  int session_type_;
  mutable int _cached_size_;
  friend struct ::protobuf_computer_2eproto::TableStruct;
  friend void ::protobuf_computer_2eproto::InitDefaultsComputerImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Computer

// string name = 1;
inline void Computer::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Computer::name() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Computer.name)
  return name_.GetNoArena();
}
inline void Computer::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.Computer.name)
}
#if LANG_CXX11
inline void Computer::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.Computer.name)
}
#endif
inline void Computer::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.Computer.name)
}
inline void Computer::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.Computer.name)
}
inline ::std::string* Computer::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.Computer.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Computer::release_name() {
  // @@protoc_insertion_point(field_release:aspia.proto.Computer.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Computer::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Computer.name)
}

// string comment = 2;
inline void Computer::clear_comment() {
  comment_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Computer::comment() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Computer.comment)
  return comment_.GetNoArena();
}
inline void Computer::set_comment(const ::std::string& value) {
  
  comment_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.Computer.comment)
}
#if LANG_CXX11
inline void Computer::set_comment(::std::string&& value) {
  
  comment_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.Computer.comment)
}
#endif
inline void Computer::set_comment(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  comment_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.Computer.comment)
}
inline void Computer::set_comment(const char* value, size_t size) {
  
  comment_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.Computer.comment)
}
inline ::std::string* Computer::mutable_comment() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.Computer.comment)
  return comment_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Computer::release_comment() {
  // @@protoc_insertion_point(field_release:aspia.proto.Computer.comment)
  
  return comment_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Computer::set_allocated_comment(::std::string* comment) {
  if (comment != NULL) {
    
  } else {
    
  }
  comment_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), comment);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Computer.comment)
}

// string address = 3;
inline void Computer::clear_address() {
  address_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Computer::address() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Computer.address)
  return address_.GetNoArena();
}
inline void Computer::set_address(const ::std::string& value) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.Computer.address)
}
#if LANG_CXX11
inline void Computer::set_address(::std::string&& value) {
  
  address_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.Computer.address)
}
#endif
inline void Computer::set_address(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.Computer.address)
}
inline void Computer::set_address(const char* value, size_t size) {
  
  address_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.Computer.address)
}
inline ::std::string* Computer::mutable_address() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.Computer.address)
  return address_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Computer::release_address() {
  // @@protoc_insertion_point(field_release:aspia.proto.Computer.address)
  
  return address_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Computer::set_allocated_address(::std::string* address) {
  if (address != NULL) {
    
  } else {
    
  }
  address_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), address);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Computer.address)
}

// uint32 port = 4;
inline void Computer::clear_port() {
  port_ = 0u;
}
inline ::google::protobuf::uint32 Computer::port() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Computer.port)
  return port_;
}
inline void Computer::set_port(::google::protobuf::uint32 value) {
  
  port_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Computer.port)
}

// string username = 5;
inline void Computer::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Computer::username() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Computer.username)
  return username_.GetNoArena();
}
inline void Computer::set_username(const ::std::string& value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.Computer.username)
}
#if LANG_CXX11
inline void Computer::set_username(::std::string&& value) {
  
  username_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.Computer.username)
}
#endif
inline void Computer::set_username(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.Computer.username)
}
inline void Computer::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.Computer.username)
}
inline ::std::string* Computer::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.Computer.username)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Computer::release_username() {
  // @@protoc_insertion_point(field_release:aspia.proto.Computer.username)
  
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Computer::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Computer.username)
}

// string password = 6;
inline void Computer::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Computer::password() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Computer.password)
  return password_.GetNoArena();
}
inline void Computer::set_password(const ::std::string& value) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.Computer.password)
}
#if LANG_CXX11
inline void Computer::set_password(::std::string&& value) {
  
  password_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.Computer.password)
}
#endif
inline void Computer::set_password(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.Computer.password)
}
inline void Computer::set_password(const char* value, size_t size) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.Computer.password)
}
inline ::std::string* Computer::mutable_password() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.Computer.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Computer::release_password() {
  // @@protoc_insertion_point(field_release:aspia.proto.Computer.password)
  
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Computer::set_allocated_password(::std::string* password) {
  if (password != NULL) {
    
  } else {
    
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Computer.password)
}

// .aspia.proto.auth.SessionType session_type = 7;
inline void Computer::clear_session_type() {
  session_type_ = 0;
}
inline ::aspia::proto::auth::SessionType Computer::session_type() const {
  // @@protoc_insertion_point(field_get:aspia.proto.Computer.session_type)
  return static_cast< ::aspia::proto::auth::SessionType >(session_type_);
}
inline void Computer::set_session_type(::aspia::proto::auth::SessionType value) {
  
  session_type_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.Computer.session_type)
}

// .aspia.proto.desktop.Config desktop_manage_session = 8;
inline bool Computer::has_desktop_manage_session() const {
  return this != internal_default_instance() && desktop_manage_session_ != NULL;
}
inline const ::aspia::proto::desktop::Config& Computer::desktop_manage_session() const {
  const ::aspia::proto::desktop::Config* p = desktop_manage_session_;
  // @@protoc_insertion_point(field_get:aspia.proto.Computer.desktop_manage_session)
  return p != NULL ? *p : *reinterpret_cast<const ::aspia::proto::desktop::Config*>(
      &::aspia::proto::desktop::_Config_default_instance_);
}
inline ::aspia::proto::desktop::Config* Computer::release_desktop_manage_session() {
  // @@protoc_insertion_point(field_release:aspia.proto.Computer.desktop_manage_session)
  
  ::aspia::proto::desktop::Config* temp = desktop_manage_session_;
  desktop_manage_session_ = NULL;
  return temp;
}
inline ::aspia::proto::desktop::Config* Computer::mutable_desktop_manage_session() {
  
  if (desktop_manage_session_ == NULL) {
    desktop_manage_session_ = new ::aspia::proto::desktop::Config;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.Computer.desktop_manage_session)
  return desktop_manage_session_;
}
inline void Computer::set_allocated_desktop_manage_session(::aspia::proto::desktop::Config* desktop_manage_session) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(desktop_manage_session_);
  }
  if (desktop_manage_session) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      desktop_manage_session = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, desktop_manage_session, submessage_arena);
    }
    
  } else {
    
  }
  desktop_manage_session_ = desktop_manage_session;
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Computer.desktop_manage_session)
}

// .aspia.proto.desktop.Config desktop_view_session = 9;
inline bool Computer::has_desktop_view_session() const {
  return this != internal_default_instance() && desktop_view_session_ != NULL;
}
inline const ::aspia::proto::desktop::Config& Computer::desktop_view_session() const {
  const ::aspia::proto::desktop::Config* p = desktop_view_session_;
  // @@protoc_insertion_point(field_get:aspia.proto.Computer.desktop_view_session)
  return p != NULL ? *p : *reinterpret_cast<const ::aspia::proto::desktop::Config*>(
      &::aspia::proto::desktop::_Config_default_instance_);
}
inline ::aspia::proto::desktop::Config* Computer::release_desktop_view_session() {
  // @@protoc_insertion_point(field_release:aspia.proto.Computer.desktop_view_session)
  
  ::aspia::proto::desktop::Config* temp = desktop_view_session_;
  desktop_view_session_ = NULL;
  return temp;
}
inline ::aspia::proto::desktop::Config* Computer::mutable_desktop_view_session() {
  
  if (desktop_view_session_ == NULL) {
    desktop_view_session_ = new ::aspia::proto::desktop::Config;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.Computer.desktop_view_session)
  return desktop_view_session_;
}
inline void Computer::set_allocated_desktop_view_session(::aspia::proto::desktop::Config* desktop_view_session) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(desktop_view_session_);
  }
  if (desktop_view_session) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      desktop_view_session = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, desktop_view_session, submessage_arena);
    }
    
  } else {
    
  }
  desktop_view_session_ = desktop_view_session;
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.Computer.desktop_view_session)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_computer_2eproto__INCLUDED
