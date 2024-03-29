// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_test_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_test_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_test_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_test_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test_2eproto;
class ConnectSessionRequest;
struct ConnectSessionRequestDefaultTypeInternal;
extern ConnectSessionRequestDefaultTypeInternal _ConnectSessionRequest_default_instance_;
class ConnectSessionResponse;
struct ConnectSessionResponseDefaultTypeInternal;
extern ConnectSessionResponseDefaultTypeInternal _ConnectSessionResponse_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::ConnectSessionRequest* Arena::CreateMaybeMessage<::ConnectSessionRequest>(Arena*);
template<> ::ConnectSessionResponse* Arena::CreateMaybeMessage<::ConnectSessionResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class ConnectSessionRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ConnectSessionRequest) */ {
 public:
  inline ConnectSessionRequest() : ConnectSessionRequest(nullptr) {}
  ~ConnectSessionRequest() override;
  explicit constexpr ConnectSessionRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ConnectSessionRequest(const ConnectSessionRequest& from);
  ConnectSessionRequest(ConnectSessionRequest&& from) noexcept
    : ConnectSessionRequest() {
    *this = ::std::move(from);
  }

  inline ConnectSessionRequest& operator=(const ConnectSessionRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ConnectSessionRequest& operator=(ConnectSessionRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ConnectSessionRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ConnectSessionRequest* internal_default_instance() {
    return reinterpret_cast<const ConnectSessionRequest*>(
               &_ConnectSessionRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ConnectSessionRequest& a, ConnectSessionRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ConnectSessionRequest* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ConnectSessionRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ConnectSessionRequest* New() const final {
    return new ConnectSessionRequest();
  }

  ConnectSessionRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ConnectSessionRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ConnectSessionRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ConnectSessionRequest& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ConnectSessionRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ConnectSessionRequest";
  }
  protected:
  explicit ConnectSessionRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVersionFieldNumber = 3,
    kDanglingTimeoutSecondsFieldNumber = 2,
    kCleanupInstanceFieldNumber = 1,
    kReconnectFieldNumber = 4,
  };
  // string version = 3;
  void clear_version();
  const std::string& version() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_version(ArgT0&& arg0, ArgT... args);
  std::string* mutable_version();
  PROTOBUF_MUST_USE_RESULT std::string* release_version();
  void set_allocated_version(std::string* version);
  private:
  const std::string& _internal_version() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_version(const std::string& value);
  std::string* _internal_mutable_version();
  public:

  // int32 dangling_timeout_seconds = 2;
  void clear_dangling_timeout_seconds();
  ::PROTOBUF_NAMESPACE_ID::int32 dangling_timeout_seconds() const;
  void set_dangling_timeout_seconds(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_dangling_timeout_seconds() const;
  void _internal_set_dangling_timeout_seconds(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // bool cleanup_instance = 1;
  void clear_cleanup_instance();
  bool cleanup_instance() const;
  void set_cleanup_instance(bool value);
  private:
  bool _internal_cleanup_instance() const;
  void _internal_set_cleanup_instance(bool value);
  public:

  // bool reconnect = 4;
  void clear_reconnect();
  bool reconnect() const;
  void set_reconnect(bool value);
  private:
  bool _internal_reconnect() const;
  void _internal_set_reconnect(bool value);
  public:

  // @@protoc_insertion_point(class_scope:ConnectSessionRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr version_;
  ::PROTOBUF_NAMESPACE_ID::int32 dangling_timeout_seconds_;
  bool cleanup_instance_;
  bool reconnect_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// -------------------------------------------------------------------

class ConnectSessionResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ConnectSessionResponse) */ {
 public:
  inline ConnectSessionResponse() : ConnectSessionResponse(nullptr) {}
  ~ConnectSessionResponse() override;
  explicit constexpr ConnectSessionResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ConnectSessionResponse(const ConnectSessionResponse& from);
  ConnectSessionResponse(ConnectSessionResponse&& from) noexcept
    : ConnectSessionResponse() {
    *this = ::std::move(from);
  }

  inline ConnectSessionResponse& operator=(const ConnectSessionResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ConnectSessionResponse& operator=(ConnectSessionResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ConnectSessionResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const ConnectSessionResponse* internal_default_instance() {
    return reinterpret_cast<const ConnectSessionResponse*>(
               &_ConnectSessionResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ConnectSessionResponse& a, ConnectSessionResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ConnectSessionResponse* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ConnectSessionResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ConnectSessionResponse* New() const final {
    return new ConnectSessionResponse();
  }

  ConnectSessionResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ConnectSessionResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ConnectSessionResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ConnectSessionResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ConnectSessionResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ConnectSessionResponse";
  }
  protected:
  explicit ConnectSessionResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPodNameListFieldNumber = 5,
    kSessionIdFieldNumber = 2,
    kEngineConfigFieldNumber = 4,
    kNamespaceFieldNumber = 7,
    kNumWorkersFieldNumber = 6,
  };
  // repeated string pod_name_list = 5;
  int pod_name_list_size() const;
  private:
  int _internal_pod_name_list_size() const;
  public:
  void clear_pod_name_list();
  const std::string& pod_name_list(int index) const;
  std::string* mutable_pod_name_list(int index);
  void set_pod_name_list(int index, const std::string& value);
  void set_pod_name_list(int index, std::string&& value);
  void set_pod_name_list(int index, const char* value);
  void set_pod_name_list(int index, const char* value, size_t size);
  std::string* add_pod_name_list();
  void add_pod_name_list(const std::string& value);
  void add_pod_name_list(std::string&& value);
  void add_pod_name_list(const char* value);
  void add_pod_name_list(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& pod_name_list() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_pod_name_list();
  private:
  const std::string& _internal_pod_name_list(int index) const;
  std::string* _internal_add_pod_name_list();
  public:

  // string session_id = 2;
  void clear_session_id();
  const std::string& session_id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_session_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_session_id();
  PROTOBUF_MUST_USE_RESULT std::string* release_session_id();
  void set_allocated_session_id(std::string* session_id);
  private:
  const std::string& _internal_session_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_session_id(const std::string& value);
  std::string* _internal_mutable_session_id();
  public:

  // string engine_config = 4;
  void clear_engine_config();
  const std::string& engine_config() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_engine_config(ArgT0&& arg0, ArgT... args);
  std::string* mutable_engine_config();
  PROTOBUF_MUST_USE_RESULT std::string* release_engine_config();
  void set_allocated_engine_config(std::string* engine_config);
  private:
  const std::string& _internal_engine_config() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_engine_config(const std::string& value);
  std::string* _internal_mutable_engine_config();
  public:

  // string namespace = 7;
  void clear_namespace_();
  const std::string& namespace_() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_namespace_(ArgT0&& arg0, ArgT... args);
  std::string* mutable_namespace_();
  PROTOBUF_MUST_USE_RESULT std::string* release_namespace_();
  void set_allocated_namespace_(std::string* namespace_);
  private:
  const std::string& _internal_namespace_() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_namespace_(const std::string& value);
  std::string* _internal_mutable_namespace_();
  public:

  // int32 num_workers = 6;
  void clear_num_workers();
  ::PROTOBUF_NAMESPACE_ID::int32 num_workers() const;
  void set_num_workers(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_num_workers() const;
  void _internal_set_num_workers(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:ConnectSessionResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> pod_name_list_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr session_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr engine_config_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr namespace__;
  ::PROTOBUF_NAMESPACE_ID::int32 num_workers_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ConnectSessionRequest

// bool cleanup_instance = 1;
inline void ConnectSessionRequest::clear_cleanup_instance() {
  cleanup_instance_ = false;
}
inline bool ConnectSessionRequest::_internal_cleanup_instance() const {
  return cleanup_instance_;
}
inline bool ConnectSessionRequest::cleanup_instance() const {
  // @@protoc_insertion_point(field_get:ConnectSessionRequest.cleanup_instance)
  return _internal_cleanup_instance();
}
inline void ConnectSessionRequest::_internal_set_cleanup_instance(bool value) {
  
  cleanup_instance_ = value;
}
inline void ConnectSessionRequest::set_cleanup_instance(bool value) {
  _internal_set_cleanup_instance(value);
  // @@protoc_insertion_point(field_set:ConnectSessionRequest.cleanup_instance)
}

// int32 dangling_timeout_seconds = 2;
inline void ConnectSessionRequest::clear_dangling_timeout_seconds() {
  dangling_timeout_seconds_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ConnectSessionRequest::_internal_dangling_timeout_seconds() const {
  return dangling_timeout_seconds_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ConnectSessionRequest::dangling_timeout_seconds() const {
  // @@protoc_insertion_point(field_get:ConnectSessionRequest.dangling_timeout_seconds)
  return _internal_dangling_timeout_seconds();
}
inline void ConnectSessionRequest::_internal_set_dangling_timeout_seconds(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  dangling_timeout_seconds_ = value;
}
inline void ConnectSessionRequest::set_dangling_timeout_seconds(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_dangling_timeout_seconds(value);
  // @@protoc_insertion_point(field_set:ConnectSessionRequest.dangling_timeout_seconds)
}

// string version = 3;
inline void ConnectSessionRequest::clear_version() {
  version_.ClearToEmpty();
}
inline const std::string& ConnectSessionRequest::version() const {
  // @@protoc_insertion_point(field_get:ConnectSessionRequest.version)
  return _internal_version();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ConnectSessionRequest::set_version(ArgT0&& arg0, ArgT... args) {
 
 version_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ConnectSessionRequest.version)
}
inline std::string* ConnectSessionRequest::mutable_version() {
  std::string* _s = _internal_mutable_version();
  // @@protoc_insertion_point(field_mutable:ConnectSessionRequest.version)
  return _s;
}
inline const std::string& ConnectSessionRequest::_internal_version() const {
  return version_.Get();
}
inline void ConnectSessionRequest::_internal_set_version(const std::string& value) {
  
  version_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ConnectSessionRequest::_internal_mutable_version() {
  
  return version_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ConnectSessionRequest::release_version() {
  // @@protoc_insertion_point(field_release:ConnectSessionRequest.version)
  return version_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ConnectSessionRequest::set_allocated_version(std::string* version) {
  if (version != nullptr) {
    
  } else {
    
  }
  version_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), version,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:ConnectSessionRequest.version)
}

// bool reconnect = 4;
inline void ConnectSessionRequest::clear_reconnect() {
  reconnect_ = false;
}
inline bool ConnectSessionRequest::_internal_reconnect() const {
  return reconnect_;
}
inline bool ConnectSessionRequest::reconnect() const {
  // @@protoc_insertion_point(field_get:ConnectSessionRequest.reconnect)
  return _internal_reconnect();
}
inline void ConnectSessionRequest::_internal_set_reconnect(bool value) {
  
  reconnect_ = value;
}
inline void ConnectSessionRequest::set_reconnect(bool value) {
  _internal_set_reconnect(value);
  // @@protoc_insertion_point(field_set:ConnectSessionRequest.reconnect)
}

// -------------------------------------------------------------------

// ConnectSessionResponse

// string session_id = 2;
inline void ConnectSessionResponse::clear_session_id() {
  session_id_.ClearToEmpty();
}
inline const std::string& ConnectSessionResponse::session_id() const {
  // @@protoc_insertion_point(field_get:ConnectSessionResponse.session_id)
  return _internal_session_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ConnectSessionResponse::set_session_id(ArgT0&& arg0, ArgT... args) {
 
 session_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ConnectSessionResponse.session_id)
}
inline std::string* ConnectSessionResponse::mutable_session_id() {
  std::string* _s = _internal_mutable_session_id();
  // @@protoc_insertion_point(field_mutable:ConnectSessionResponse.session_id)
  return _s;
}
inline const std::string& ConnectSessionResponse::_internal_session_id() const {
  return session_id_.Get();
}
inline void ConnectSessionResponse::_internal_set_session_id(const std::string& value) {
  
  session_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ConnectSessionResponse::_internal_mutable_session_id() {
  
  return session_id_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ConnectSessionResponse::release_session_id() {
  // @@protoc_insertion_point(field_release:ConnectSessionResponse.session_id)
  return session_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ConnectSessionResponse::set_allocated_session_id(std::string* session_id) {
  if (session_id != nullptr) {
    
  } else {
    
  }
  session_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), session_id,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:ConnectSessionResponse.session_id)
}

// string engine_config = 4;
inline void ConnectSessionResponse::clear_engine_config() {
  engine_config_.ClearToEmpty();
}
inline const std::string& ConnectSessionResponse::engine_config() const {
  // @@protoc_insertion_point(field_get:ConnectSessionResponse.engine_config)
  return _internal_engine_config();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ConnectSessionResponse::set_engine_config(ArgT0&& arg0, ArgT... args) {
 
 engine_config_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ConnectSessionResponse.engine_config)
}
inline std::string* ConnectSessionResponse::mutable_engine_config() {
  std::string* _s = _internal_mutable_engine_config();
  // @@protoc_insertion_point(field_mutable:ConnectSessionResponse.engine_config)
  return _s;
}
inline const std::string& ConnectSessionResponse::_internal_engine_config() const {
  return engine_config_.Get();
}
inline void ConnectSessionResponse::_internal_set_engine_config(const std::string& value) {
  
  engine_config_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ConnectSessionResponse::_internal_mutable_engine_config() {
  
  return engine_config_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ConnectSessionResponse::release_engine_config() {
  // @@protoc_insertion_point(field_release:ConnectSessionResponse.engine_config)
  return engine_config_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ConnectSessionResponse::set_allocated_engine_config(std::string* engine_config) {
  if (engine_config != nullptr) {
    
  } else {
    
  }
  engine_config_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), engine_config,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:ConnectSessionResponse.engine_config)
}

// repeated string pod_name_list = 5;
inline int ConnectSessionResponse::_internal_pod_name_list_size() const {
  return pod_name_list_.size();
}
inline int ConnectSessionResponse::pod_name_list_size() const {
  return _internal_pod_name_list_size();
}
inline void ConnectSessionResponse::clear_pod_name_list() {
  pod_name_list_.Clear();
}
inline std::string* ConnectSessionResponse::add_pod_name_list() {
  std::string* _s = _internal_add_pod_name_list();
  // @@protoc_insertion_point(field_add_mutable:ConnectSessionResponse.pod_name_list)
  return _s;
}
inline const std::string& ConnectSessionResponse::_internal_pod_name_list(int index) const {
  return pod_name_list_.Get(index);
}
inline const std::string& ConnectSessionResponse::pod_name_list(int index) const {
  // @@protoc_insertion_point(field_get:ConnectSessionResponse.pod_name_list)
  return _internal_pod_name_list(index);
}
inline std::string* ConnectSessionResponse::mutable_pod_name_list(int index) {
  // @@protoc_insertion_point(field_mutable:ConnectSessionResponse.pod_name_list)
  return pod_name_list_.Mutable(index);
}
inline void ConnectSessionResponse::set_pod_name_list(int index, const std::string& value) {
  pod_name_list_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:ConnectSessionResponse.pod_name_list)
}
inline void ConnectSessionResponse::set_pod_name_list(int index, std::string&& value) {
  pod_name_list_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:ConnectSessionResponse.pod_name_list)
}
inline void ConnectSessionResponse::set_pod_name_list(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  pod_name_list_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ConnectSessionResponse.pod_name_list)
}
inline void ConnectSessionResponse::set_pod_name_list(int index, const char* value, size_t size) {
  pod_name_list_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ConnectSessionResponse.pod_name_list)
}
inline std::string* ConnectSessionResponse::_internal_add_pod_name_list() {
  return pod_name_list_.Add();
}
inline void ConnectSessionResponse::add_pod_name_list(const std::string& value) {
  pod_name_list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ConnectSessionResponse.pod_name_list)
}
inline void ConnectSessionResponse::add_pod_name_list(std::string&& value) {
  pod_name_list_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:ConnectSessionResponse.pod_name_list)
}
inline void ConnectSessionResponse::add_pod_name_list(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  pod_name_list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ConnectSessionResponse.pod_name_list)
}
inline void ConnectSessionResponse::add_pod_name_list(const char* value, size_t size) {
  pod_name_list_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ConnectSessionResponse.pod_name_list)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ConnectSessionResponse::pod_name_list() const {
  // @@protoc_insertion_point(field_list:ConnectSessionResponse.pod_name_list)
  return pod_name_list_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ConnectSessionResponse::mutable_pod_name_list() {
  // @@protoc_insertion_point(field_mutable_list:ConnectSessionResponse.pod_name_list)
  return &pod_name_list_;
}

// int32 num_workers = 6;
inline void ConnectSessionResponse::clear_num_workers() {
  num_workers_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ConnectSessionResponse::_internal_num_workers() const {
  return num_workers_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ConnectSessionResponse::num_workers() const {
  // @@protoc_insertion_point(field_get:ConnectSessionResponse.num_workers)
  return _internal_num_workers();
}
inline void ConnectSessionResponse::_internal_set_num_workers(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  num_workers_ = value;
}
inline void ConnectSessionResponse::set_num_workers(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_num_workers(value);
  // @@protoc_insertion_point(field_set:ConnectSessionResponse.num_workers)
}

// string namespace = 7;
inline void ConnectSessionResponse::clear_namespace_() {
  namespace__.ClearToEmpty();
}
inline const std::string& ConnectSessionResponse::namespace_() const {
  // @@protoc_insertion_point(field_get:ConnectSessionResponse.namespace)
  return _internal_namespace_();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ConnectSessionResponse::set_namespace_(ArgT0&& arg0, ArgT... args) {
 
 namespace__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:ConnectSessionResponse.namespace)
}
inline std::string* ConnectSessionResponse::mutable_namespace_() {
  std::string* _s = _internal_mutable_namespace_();
  // @@protoc_insertion_point(field_mutable:ConnectSessionResponse.namespace)
  return _s;
}
inline const std::string& ConnectSessionResponse::_internal_namespace_() const {
  return namespace__.Get();
}
inline void ConnectSessionResponse::_internal_set_namespace_(const std::string& value) {
  
  namespace__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ConnectSessionResponse::_internal_mutable_namespace_() {
  
  return namespace__.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ConnectSessionResponse::release_namespace_() {
  // @@protoc_insertion_point(field_release:ConnectSessionResponse.namespace)
  return namespace__.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ConnectSessionResponse::set_allocated_namespace_(std::string* namespace_) {
  if (namespace_ != nullptr) {
    
  } else {
    
  }
  namespace__.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), namespace_,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:ConnectSessionResponse.namespace)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_test_2eproto
