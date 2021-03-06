// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protomessage.proto

#ifndef PROTOBUF_protomessage_2eproto__INCLUDED
#define PROTOBUF_protomessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_protomessage_2eproto();
void protobuf_AssignDesc_protomessage_2eproto();
void protobuf_ShutdownFile_protomessage_2eproto();

class Message;
class Message_Log;

// ===================================================================

class Message_Log : public ::google::protobuf::Message {
 public:
  Message_Log();
  virtual ~Message_Log();

  Message_Log(const Message_Log& from);

  inline Message_Log& operator=(const Message_Log& from) {
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
  static const Message_Log& default_instance();

  void Swap(Message_Log* other);

  // implements Message ----------------------------------------------

  Message_Log* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Message_Log& from);
  void MergeFrom(const Message_Log& from);
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

  // required string name_user = 1;
  inline bool has_name_user() const;
  inline void clear_name_user();
  static const int kNameUserFieldNumber = 1;
  inline const ::std::string& name_user() const;
  inline void set_name_user(const ::std::string& value);
  inline void set_name_user(const char* value);
  inline void set_name_user(const char* value, size_t size);
  inline ::std::string* mutable_name_user();
  inline ::std::string* release_name_user();
  inline void set_allocated_name_user(::std::string* name_user);

  // required string password = 2;
  inline bool has_password() const;
  inline void clear_password();
  static const int kPasswordFieldNumber = 2;
  inline const ::std::string& password() const;
  inline void set_password(const ::std::string& value);
  inline void set_password(const char* value);
  inline void set_password(const char* value, size_t size);
  inline ::std::string* mutable_password();
  inline ::std::string* release_password();
  inline void set_allocated_password(::std::string* password);

  // required string ip_user = 3;
  inline bool has_ip_user() const;
  inline void clear_ip_user();
  static const int kIpUserFieldNumber = 3;
  inline const ::std::string& ip_user() const;
  inline void set_ip_user(const ::std::string& value);
  inline void set_ip_user(const char* value);
  inline void set_ip_user(const char* value, size_t size);
  inline ::std::string* mutable_ip_user();
  inline ::std::string* release_ip_user();
  inline void set_allocated_ip_user(::std::string* ip_user);

  // required uint32 port_user = 4;
  inline bool has_port_user() const;
  inline void clear_port_user();
  static const int kPortUserFieldNumber = 4;
  inline ::google::protobuf::uint32 port_user() const;
  inline void set_port_user(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:Message.Log)
 private:
  inline void set_has_name_user();
  inline void clear_has_name_user();
  inline void set_has_password();
  inline void clear_has_password();
  inline void set_has_ip_user();
  inline void clear_has_ip_user();
  inline void set_has_port_user();
  inline void clear_has_port_user();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_user_;
  ::std::string* password_;
  ::std::string* ip_user_;
  ::google::protobuf::uint32 port_user_;
  friend void  protobuf_AddDesc_protomessage_2eproto();
  friend void protobuf_AssignDesc_protomessage_2eproto();
  friend void protobuf_ShutdownFile_protomessage_2eproto();

  void InitAsDefaultInstance();
  static Message_Log* default_instance_;
};
// -------------------------------------------------------------------

class Message : public ::google::protobuf::Message {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);

  inline Message& operator=(const Message& from) {
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
  static const Message& default_instance();

  void Swap(Message* other);

  // implements Message ----------------------------------------------

  Message* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
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

  typedef Message_Log Log;

  // accessors -------------------------------------------------------

  // required uint32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::uint32 type() const;
  inline void set_type(::google::protobuf::uint32 value);

  // required string username = 2;
  inline bool has_username() const;
  inline void clear_username();
  static const int kUsernameFieldNumber = 2;
  inline const ::std::string& username() const;
  inline void set_username(const ::std::string& value);
  inline void set_username(const char* value);
  inline void set_username(const char* value, size_t size);
  inline ::std::string* mutable_username();
  inline ::std::string* release_username();
  inline void set_allocated_username(::std::string* username);

  // optional string salaname = 3;
  inline bool has_salaname() const;
  inline void clear_salaname();
  static const int kSalanameFieldNumber = 3;
  inline const ::std::string& salaname() const;
  inline void set_salaname(const ::std::string& value);
  inline void set_salaname(const char* value);
  inline void set_salaname(const char* value, size_t size);
  inline ::std::string* mutable_salaname();
  inline ::std::string* release_salaname();
  inline void set_allocated_salaname(::std::string* salaname);

  // required string ip = 4;
  inline bool has_ip() const;
  inline void clear_ip();
  static const int kIpFieldNumber = 4;
  inline const ::std::string& ip() const;
  inline void set_ip(const ::std::string& value);
  inline void set_ip(const char* value);
  inline void set_ip(const char* value, size_t size);
  inline ::std::string* mutable_ip();
  inline ::std::string* release_ip();
  inline void set_allocated_ip(::std::string* ip);

  // optional string message = 5;
  inline bool has_message() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 5;
  inline const ::std::string& message() const;
  inline void set_message(const ::std::string& value);
  inline void set_message(const char* value);
  inline void set_message(const char* value, size_t size);
  inline ::std::string* mutable_message();
  inline ::std::string* release_message();
  inline void set_allocated_message(::std::string* message);

  // required uint32 port = 6;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 6;
  inline ::google::protobuf::uint32 port() const;
  inline void set_port(::google::protobuf::uint32 value);

  // optional bytes avatar = 7;
  inline bool has_avatar() const;
  inline void clear_avatar();
  static const int kAvatarFieldNumber = 7;
  inline const ::std::string& avatar() const;
  inline void set_avatar(const ::std::string& value);
  inline void set_avatar(const char* value);
  inline void set_avatar(const void* value, size_t size);
  inline ::std::string* mutable_avatar();
  inline ::std::string* release_avatar();
  inline void set_allocated_avatar(::std::string* avatar);

  // optional .Message.Log login = 8;
  inline bool has_login() const;
  inline void clear_login();
  static const int kLoginFieldNumber = 8;
  inline const ::Message_Log& login() const;
  inline ::Message_Log* mutable_login();
  inline ::Message_Log* release_login();
  inline void set_allocated_login(::Message_Log* login);

  // @@protoc_insertion_point(class_scope:Message)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_salaname();
  inline void clear_has_salaname();
  inline void set_has_ip();
  inline void clear_has_ip();
  inline void set_has_message();
  inline void clear_has_message();
  inline void set_has_port();
  inline void clear_has_port();
  inline void set_has_avatar();
  inline void clear_has_avatar();
  inline void set_has_login();
  inline void clear_has_login();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* username_;
  ::std::string* salaname_;
  ::google::protobuf::uint32 type_;
  ::google::protobuf::uint32 port_;
  ::std::string* ip_;
  ::std::string* message_;
  ::std::string* avatar_;
  ::Message_Log* login_;
  friend void  protobuf_AddDesc_protomessage_2eproto();
  friend void protobuf_AssignDesc_protomessage_2eproto();
  friend void protobuf_ShutdownFile_protomessage_2eproto();

  void InitAsDefaultInstance();
  static Message* default_instance_;
};
// ===================================================================


// ===================================================================

// Message_Log

// required string name_user = 1;
inline bool Message_Log::has_name_user() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Message_Log::set_has_name_user() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Message_Log::clear_has_name_user() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Message_Log::clear_name_user() {
  if (name_user_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_user_->clear();
  }
  clear_has_name_user();
}
inline const ::std::string& Message_Log::name_user() const {
  // @@protoc_insertion_point(field_get:Message.Log.name_user)
  return *name_user_;
}
inline void Message_Log::set_name_user(const ::std::string& value) {
  set_has_name_user();
  if (name_user_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_user_ = new ::std::string;
  }
  name_user_->assign(value);
  // @@protoc_insertion_point(field_set:Message.Log.name_user)
}
inline void Message_Log::set_name_user(const char* value) {
  set_has_name_user();
  if (name_user_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_user_ = new ::std::string;
  }
  name_user_->assign(value);
  // @@protoc_insertion_point(field_set_char:Message.Log.name_user)
}
inline void Message_Log::set_name_user(const char* value, size_t size) {
  set_has_name_user();
  if (name_user_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_user_ = new ::std::string;
  }
  name_user_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Message.Log.name_user)
}
inline ::std::string* Message_Log::mutable_name_user() {
  set_has_name_user();
  if (name_user_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_user_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Message.Log.name_user)
  return name_user_;
}
inline ::std::string* Message_Log::release_name_user() {
  clear_has_name_user();
  if (name_user_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_user_;
    name_user_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Message_Log::set_allocated_name_user(::std::string* name_user) {
  if (name_user_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_user_;
  }
  if (name_user) {
    set_has_name_user();
    name_user_ = name_user;
  } else {
    clear_has_name_user();
    name_user_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Message.Log.name_user)
}

// required string password = 2;
inline bool Message_Log::has_password() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Message_Log::set_has_password() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Message_Log::clear_has_password() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Message_Log::clear_password() {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_->clear();
  }
  clear_has_password();
}
inline const ::std::string& Message_Log::password() const {
  // @@protoc_insertion_point(field_get:Message.Log.password)
  return *password_;
}
inline void Message_Log::set_password(const ::std::string& value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set:Message.Log.password)
}
inline void Message_Log::set_password(const char* value) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(value);
  // @@protoc_insertion_point(field_set_char:Message.Log.password)
}
inline void Message_Log::set_password(const char* value, size_t size) {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  password_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Message.Log.password)
}
inline ::std::string* Message_Log::mutable_password() {
  set_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    password_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Message.Log.password)
  return password_;
}
inline ::std::string* Message_Log::release_password() {
  clear_has_password();
  if (password_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = password_;
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Message_Log::set_allocated_password(::std::string* password) {
  if (password_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete password_;
  }
  if (password) {
    set_has_password();
    password_ = password;
  } else {
    clear_has_password();
    password_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Message.Log.password)
}

// required string ip_user = 3;
inline bool Message_Log::has_ip_user() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Message_Log::set_has_ip_user() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Message_Log::clear_has_ip_user() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Message_Log::clear_ip_user() {
  if (ip_user_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_user_->clear();
  }
  clear_has_ip_user();
}
inline const ::std::string& Message_Log::ip_user() const {
  // @@protoc_insertion_point(field_get:Message.Log.ip_user)
  return *ip_user_;
}
inline void Message_Log::set_ip_user(const ::std::string& value) {
  set_has_ip_user();
  if (ip_user_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_user_ = new ::std::string;
  }
  ip_user_->assign(value);
  // @@protoc_insertion_point(field_set:Message.Log.ip_user)
}
inline void Message_Log::set_ip_user(const char* value) {
  set_has_ip_user();
  if (ip_user_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_user_ = new ::std::string;
  }
  ip_user_->assign(value);
  // @@protoc_insertion_point(field_set_char:Message.Log.ip_user)
}
inline void Message_Log::set_ip_user(const char* value, size_t size) {
  set_has_ip_user();
  if (ip_user_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_user_ = new ::std::string;
  }
  ip_user_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Message.Log.ip_user)
}
inline ::std::string* Message_Log::mutable_ip_user() {
  set_has_ip_user();
  if (ip_user_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_user_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Message.Log.ip_user)
  return ip_user_;
}
inline ::std::string* Message_Log::release_ip_user() {
  clear_has_ip_user();
  if (ip_user_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = ip_user_;
    ip_user_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Message_Log::set_allocated_ip_user(::std::string* ip_user) {
  if (ip_user_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete ip_user_;
  }
  if (ip_user) {
    set_has_ip_user();
    ip_user_ = ip_user;
  } else {
    clear_has_ip_user();
    ip_user_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Message.Log.ip_user)
}

// required uint32 port_user = 4;
inline bool Message_Log::has_port_user() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Message_Log::set_has_port_user() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Message_Log::clear_has_port_user() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Message_Log::clear_port_user() {
  port_user_ = 0u;
  clear_has_port_user();
}
inline ::google::protobuf::uint32 Message_Log::port_user() const {
  // @@protoc_insertion_point(field_get:Message.Log.port_user)
  return port_user_;
}
inline void Message_Log::set_port_user(::google::protobuf::uint32 value) {
  set_has_port_user();
  port_user_ = value;
  // @@protoc_insertion_point(field_set:Message.Log.port_user)
}

// -------------------------------------------------------------------

// Message

// required uint32 type = 1;
inline bool Message::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Message::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Message::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Message::clear_type() {
  type_ = 0u;
  clear_has_type();
}
inline ::google::protobuf::uint32 Message::type() const {
  // @@protoc_insertion_point(field_get:Message.type)
  return type_;
}
inline void Message::set_type(::google::protobuf::uint32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:Message.type)
}

// required string username = 2;
inline bool Message::has_username() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Message::set_has_username() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Message::clear_has_username() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Message::clear_username() {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_->clear();
  }
  clear_has_username();
}
inline const ::std::string& Message::username() const {
  // @@protoc_insertion_point(field_get:Message.username)
  return *username_;
}
inline void Message::set_username(const ::std::string& value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(value);
  // @@protoc_insertion_point(field_set:Message.username)
}
inline void Message::set_username(const char* value) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(value);
  // @@protoc_insertion_point(field_set_char:Message.username)
}
inline void Message::set_username(const char* value, size_t size) {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  username_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Message.username)
}
inline ::std::string* Message::mutable_username() {
  set_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    username_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Message.username)
  return username_;
}
inline ::std::string* Message::release_username() {
  clear_has_username();
  if (username_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = username_;
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Message::set_allocated_username(::std::string* username) {
  if (username_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete username_;
  }
  if (username) {
    set_has_username();
    username_ = username;
  } else {
    clear_has_username();
    username_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Message.username)
}

// optional string salaname = 3;
inline bool Message::has_salaname() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Message::set_has_salaname() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Message::clear_has_salaname() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Message::clear_salaname() {
  if (salaname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    salaname_->clear();
  }
  clear_has_salaname();
}
inline const ::std::string& Message::salaname() const {
  // @@protoc_insertion_point(field_get:Message.salaname)
  return *salaname_;
}
inline void Message::set_salaname(const ::std::string& value) {
  set_has_salaname();
  if (salaname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    salaname_ = new ::std::string;
  }
  salaname_->assign(value);
  // @@protoc_insertion_point(field_set:Message.salaname)
}
inline void Message::set_salaname(const char* value) {
  set_has_salaname();
  if (salaname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    salaname_ = new ::std::string;
  }
  salaname_->assign(value);
  // @@protoc_insertion_point(field_set_char:Message.salaname)
}
inline void Message::set_salaname(const char* value, size_t size) {
  set_has_salaname();
  if (salaname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    salaname_ = new ::std::string;
  }
  salaname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Message.salaname)
}
inline ::std::string* Message::mutable_salaname() {
  set_has_salaname();
  if (salaname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    salaname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Message.salaname)
  return salaname_;
}
inline ::std::string* Message::release_salaname() {
  clear_has_salaname();
  if (salaname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = salaname_;
    salaname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Message::set_allocated_salaname(::std::string* salaname) {
  if (salaname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete salaname_;
  }
  if (salaname) {
    set_has_salaname();
    salaname_ = salaname;
  } else {
    clear_has_salaname();
    salaname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Message.salaname)
}

// required string ip = 4;
inline bool Message::has_ip() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Message::set_has_ip() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Message::clear_has_ip() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Message::clear_ip() {
  if (ip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_->clear();
  }
  clear_has_ip();
}
inline const ::std::string& Message::ip() const {
  // @@protoc_insertion_point(field_get:Message.ip)
  return *ip_;
}
inline void Message::set_ip(const ::std::string& value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
  // @@protoc_insertion_point(field_set:Message.ip)
}
inline void Message::set_ip(const char* value) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_ = new ::std::string;
  }
  ip_->assign(value);
  // @@protoc_insertion_point(field_set_char:Message.ip)
}
inline void Message::set_ip(const char* value, size_t size) {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_ = new ::std::string;
  }
  ip_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Message.ip)
}
inline ::std::string* Message::mutable_ip() {
  set_has_ip();
  if (ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    ip_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Message.ip)
  return ip_;
}
inline ::std::string* Message::release_ip() {
  clear_has_ip();
  if (ip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = ip_;
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Message::set_allocated_ip(::std::string* ip) {
  if (ip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete ip_;
  }
  if (ip) {
    set_has_ip();
    ip_ = ip;
  } else {
    clear_has_ip();
    ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Message.ip)
}

// optional string message = 5;
inline bool Message::has_message() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Message::set_has_message() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Message::clear_has_message() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Message::clear_message() {
  if (message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& Message::message() const {
  // @@protoc_insertion_point(field_get:Message.message)
  return *message_;
}
inline void Message::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(value);
  // @@protoc_insertion_point(field_set:Message.message)
}
inline void Message::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(value);
  // @@protoc_insertion_point(field_set_char:Message.message)
}
inline void Message::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Message.message)
}
inline ::std::string* Message::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Message.message)
  return message_;
}
inline ::std::string* Message::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Message::set_allocated_message(::std::string* message) {
  if (message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete message_;
  }
  if (message) {
    set_has_message();
    message_ = message;
  } else {
    clear_has_message();
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Message.message)
}

// required uint32 port = 6;
inline bool Message::has_port() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Message::set_has_port() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Message::clear_has_port() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Message::clear_port() {
  port_ = 0u;
  clear_has_port();
}
inline ::google::protobuf::uint32 Message::port() const {
  // @@protoc_insertion_point(field_get:Message.port)
  return port_;
}
inline void Message::set_port(::google::protobuf::uint32 value) {
  set_has_port();
  port_ = value;
  // @@protoc_insertion_point(field_set:Message.port)
}

// optional bytes avatar = 7;
inline bool Message::has_avatar() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Message::set_has_avatar() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Message::clear_has_avatar() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Message::clear_avatar() {
  if (avatar_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    avatar_->clear();
  }
  clear_has_avatar();
}
inline const ::std::string& Message::avatar() const {
  // @@protoc_insertion_point(field_get:Message.avatar)
  return *avatar_;
}
inline void Message::set_avatar(const ::std::string& value) {
  set_has_avatar();
  if (avatar_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    avatar_ = new ::std::string;
  }
  avatar_->assign(value);
  // @@protoc_insertion_point(field_set:Message.avatar)
}
inline void Message::set_avatar(const char* value) {
  set_has_avatar();
  if (avatar_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    avatar_ = new ::std::string;
  }
  avatar_->assign(value);
  // @@protoc_insertion_point(field_set_char:Message.avatar)
}
inline void Message::set_avatar(const void* value, size_t size) {
  set_has_avatar();
  if (avatar_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    avatar_ = new ::std::string;
  }
  avatar_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Message.avatar)
}
inline ::std::string* Message::mutable_avatar() {
  set_has_avatar();
  if (avatar_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    avatar_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Message.avatar)
  return avatar_;
}
inline ::std::string* Message::release_avatar() {
  clear_has_avatar();
  if (avatar_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = avatar_;
    avatar_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Message::set_allocated_avatar(::std::string* avatar) {
  if (avatar_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete avatar_;
  }
  if (avatar) {
    set_has_avatar();
    avatar_ = avatar;
  } else {
    clear_has_avatar();
    avatar_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Message.avatar)
}

// optional .Message.Log login = 8;
inline bool Message::has_login() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Message::set_has_login() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Message::clear_has_login() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Message::clear_login() {
  if (login_ != NULL) login_->::Message_Log::Clear();
  clear_has_login();
}
inline const ::Message_Log& Message::login() const {
  // @@protoc_insertion_point(field_get:Message.login)
  return login_ != NULL ? *login_ : *default_instance_->login_;
}
inline ::Message_Log* Message::mutable_login() {
  set_has_login();
  if (login_ == NULL) login_ = new ::Message_Log;
  // @@protoc_insertion_point(field_mutable:Message.login)
  return login_;
}
inline ::Message_Log* Message::release_login() {
  clear_has_login();
  ::Message_Log* temp = login_;
  login_ = NULL;
  return temp;
}
inline void Message::set_allocated_login(::Message_Log* login) {
  delete login_;
  login_ = login;
  if (login) {
    set_has_login();
  } else {
    clear_has_login();
  }
  // @@protoc_insertion_point(field_set_allocated:Message.login)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protomessage_2eproto__INCLUDED
