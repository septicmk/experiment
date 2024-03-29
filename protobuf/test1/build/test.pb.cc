// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
constexpr ConnectSessionRequest::ConnectSessionRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : version_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , dangling_timeout_seconds_(0)
  , cleanup_instance_(false)
  , reconnect_(false){}
struct ConnectSessionRequestDefaultTypeInternal {
  constexpr ConnectSessionRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ConnectSessionRequestDefaultTypeInternal() {}
  union {
    ConnectSessionRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ConnectSessionRequestDefaultTypeInternal _ConnectSessionRequest_default_instance_;
constexpr ConnectSessionResponse::ConnectSessionResponse(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : pod_name_list_()
  , session_id_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , engine_config_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , namespace__(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , num_workers_(0){}
struct ConnectSessionResponseDefaultTypeInternal {
  constexpr ConnectSessionResponseDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ConnectSessionResponseDefaultTypeInternal() {}
  union {
    ConnectSessionResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ConnectSessionResponseDefaultTypeInternal _ConnectSessionResponse_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_test_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_test_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_test_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_test_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ConnectSessionRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::ConnectSessionRequest, cleanup_instance_),
  PROTOBUF_FIELD_OFFSET(::ConnectSessionRequest, dangling_timeout_seconds_),
  PROTOBUF_FIELD_OFFSET(::ConnectSessionRequest, version_),
  PROTOBUF_FIELD_OFFSET(::ConnectSessionRequest, reconnect_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::ConnectSessionResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::ConnectSessionResponse, session_id_),
  PROTOBUF_FIELD_OFFSET(::ConnectSessionResponse, engine_config_),
  PROTOBUF_FIELD_OFFSET(::ConnectSessionResponse, pod_name_list_),
  PROTOBUF_FIELD_OFFSET(::ConnectSessionResponse, num_workers_),
  PROTOBUF_FIELD_OFFSET(::ConnectSessionResponse, namespace__),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::ConnectSessionRequest)},
  { 10, -1, -1, sizeof(::ConnectSessionResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ConnectSessionRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_ConnectSessionResponse_default_instance_),
};

const char descriptor_table_protodef_test_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\ntest.proto\"w\n\025ConnectSessionRequest\022\030\n"
  "\020cleanup_instance\030\001 \001(\010\022 \n\030dangling_time"
  "out_seconds\030\002 \001(\005\022\017\n\007version\030\003 \001(\t\022\021\n\tre"
  "connect\030\004 \001(\010\"\202\001\n\026ConnectSessionResponse"
  "\022\022\n\nsession_id\030\002 \001(\t\022\025\n\rengine_config\030\004 "
  "\001(\t\022\025\n\rpod_name_list\030\005 \003(\t\022\023\n\013num_worker"
  "s\030\006 \001(\005\022\021\n\tnamespace\030\007 \001(\tb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_test_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test_2eproto = {
  false, false, 274, descriptor_table_protodef_test_2eproto, "test.proto", 
  &descriptor_table_test_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_test_2eproto::offsets,
  file_level_metadata_test_2eproto, file_level_enum_descriptors_test_2eproto, file_level_service_descriptors_test_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_test_2eproto_getter() {
  return &descriptor_table_test_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_test_2eproto(&descriptor_table_test_2eproto);

// ===================================================================

class ConnectSessionRequest::_Internal {
 public:
};

ConnectSessionRequest::ConnectSessionRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:ConnectSessionRequest)
}
ConnectSessionRequest::ConnectSessionRequest(const ConnectSessionRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_version().empty()) {
    version_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_version(), 
      GetArenaForAllocation());
  }
  ::memcpy(&dangling_timeout_seconds_, &from.dangling_timeout_seconds_,
    static_cast<size_t>(reinterpret_cast<char*>(&reconnect_) -
    reinterpret_cast<char*>(&dangling_timeout_seconds_)) + sizeof(reconnect_));
  // @@protoc_insertion_point(copy_constructor:ConnectSessionRequest)
}

void ConnectSessionRequest::SharedCtor() {
version_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&dangling_timeout_seconds_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&reconnect_) -
    reinterpret_cast<char*>(&dangling_timeout_seconds_)) + sizeof(reconnect_));
}

ConnectSessionRequest::~ConnectSessionRequest() {
  // @@protoc_insertion_point(destructor:ConnectSessionRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ConnectSessionRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  version_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ConnectSessionRequest::ArenaDtor(void* object) {
  ConnectSessionRequest* _this = reinterpret_cast< ConnectSessionRequest* >(object);
  (void)_this;
}
void ConnectSessionRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ConnectSessionRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ConnectSessionRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:ConnectSessionRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  version_.ClearToEmpty();
  ::memset(&dangling_timeout_seconds_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&reconnect_) -
      reinterpret_cast<char*>(&dangling_timeout_seconds_)) + sizeof(reconnect_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ConnectSessionRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool cleanup_instance = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          cleanup_instance_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 dangling_timeout_seconds = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          dangling_timeout_seconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string version = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_version();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ConnectSessionRequest.version"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool reconnect = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          reconnect_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ConnectSessionRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ConnectSessionRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool cleanup_instance = 1;
  if (this->_internal_cleanup_instance() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_cleanup_instance(), target);
  }

  // int32 dangling_timeout_seconds = 2;
  if (this->_internal_dangling_timeout_seconds() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_dangling_timeout_seconds(), target);
  }

  // string version = 3;
  if (!this->_internal_version().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_version().data(), static_cast<int>(this->_internal_version().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ConnectSessionRequest.version");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_version(), target);
  }

  // bool reconnect = 4;
  if (this->_internal_reconnect() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_reconnect(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ConnectSessionRequest)
  return target;
}

size_t ConnectSessionRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ConnectSessionRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string version = 3;
  if (!this->_internal_version().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_version());
  }

  // int32 dangling_timeout_seconds = 2;
  if (this->_internal_dangling_timeout_seconds() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_dangling_timeout_seconds());
  }

  // bool cleanup_instance = 1;
  if (this->_internal_cleanup_instance() != 0) {
    total_size += 1 + 1;
  }

  // bool reconnect = 4;
  if (this->_internal_reconnect() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ConnectSessionRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ConnectSessionRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ConnectSessionRequest::GetClassData() const { return &_class_data_; }

void ConnectSessionRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ConnectSessionRequest *>(to)->MergeFrom(
      static_cast<const ConnectSessionRequest &>(from));
}


void ConnectSessionRequest::MergeFrom(const ConnectSessionRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ConnectSessionRequest)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_version().empty()) {
    _internal_set_version(from._internal_version());
  }
  if (from._internal_dangling_timeout_seconds() != 0) {
    _internal_set_dangling_timeout_seconds(from._internal_dangling_timeout_seconds());
  }
  if (from._internal_cleanup_instance() != 0) {
    _internal_set_cleanup_instance(from._internal_cleanup_instance());
  }
  if (from._internal_reconnect() != 0) {
    _internal_set_reconnect(from._internal_reconnect());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ConnectSessionRequest::CopyFrom(const ConnectSessionRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ConnectSessionRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConnectSessionRequest::IsInitialized() const {
  return true;
}

void ConnectSessionRequest::InternalSwap(ConnectSessionRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &version_, lhs_arena,
      &other->version_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ConnectSessionRequest, reconnect_)
      + sizeof(ConnectSessionRequest::reconnect_)
      - PROTOBUF_FIELD_OFFSET(ConnectSessionRequest, dangling_timeout_seconds_)>(
          reinterpret_cast<char*>(&dangling_timeout_seconds_),
          reinterpret_cast<char*>(&other->dangling_timeout_seconds_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ConnectSessionRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_test_2eproto_getter, &descriptor_table_test_2eproto_once,
      file_level_metadata_test_2eproto[0]);
}

// ===================================================================

class ConnectSessionResponse::_Internal {
 public:
};

ConnectSessionResponse::ConnectSessionResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  pod_name_list_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:ConnectSessionResponse)
}
ConnectSessionResponse::ConnectSessionResponse(const ConnectSessionResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      pod_name_list_(from.pod_name_list_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  session_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_session_id().empty()) {
    session_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_session_id(), 
      GetArenaForAllocation());
  }
  engine_config_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_engine_config().empty()) {
    engine_config_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_engine_config(), 
      GetArenaForAllocation());
  }
  namespace__.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_namespace_().empty()) {
    namespace__.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_namespace_(), 
      GetArenaForAllocation());
  }
  num_workers_ = from.num_workers_;
  // @@protoc_insertion_point(copy_constructor:ConnectSessionResponse)
}

void ConnectSessionResponse::SharedCtor() {
session_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
engine_config_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
namespace__.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
num_workers_ = 0;
}

ConnectSessionResponse::~ConnectSessionResponse() {
  // @@protoc_insertion_point(destructor:ConnectSessionResponse)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ConnectSessionResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  session_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  engine_config_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  namespace__.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ConnectSessionResponse::ArenaDtor(void* object) {
  ConnectSessionResponse* _this = reinterpret_cast< ConnectSessionResponse* >(object);
  (void)_this;
}
void ConnectSessionResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ConnectSessionResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ConnectSessionResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:ConnectSessionResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  pod_name_list_.Clear();
  session_id_.ClearToEmpty();
  engine_config_.ClearToEmpty();
  namespace__.ClearToEmpty();
  num_workers_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ConnectSessionResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string session_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_session_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ConnectSessionResponse.session_id"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string engine_config = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_engine_config();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ConnectSessionResponse.engine_config"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string pod_name_list = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_pod_name_list();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ConnectSessionResponse.pod_name_list"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else
          goto handle_unusual;
        continue;
      // int32 num_workers = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          num_workers_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string namespace = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_namespace_();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "ConnectSessionResponse.namespace"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ConnectSessionResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ConnectSessionResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string session_id = 2;
  if (!this->_internal_session_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_session_id().data(), static_cast<int>(this->_internal_session_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ConnectSessionResponse.session_id");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_session_id(), target);
  }

  // string engine_config = 4;
  if (!this->_internal_engine_config().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_engine_config().data(), static_cast<int>(this->_internal_engine_config().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ConnectSessionResponse.engine_config");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_engine_config(), target);
  }

  // repeated string pod_name_list = 5;
  for (int i = 0, n = this->_internal_pod_name_list_size(); i < n; i++) {
    const auto& s = this->_internal_pod_name_list(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ConnectSessionResponse.pod_name_list");
    target = stream->WriteString(5, s, target);
  }

  // int32 num_workers = 6;
  if (this->_internal_num_workers() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(6, this->_internal_num_workers(), target);
  }

  // string namespace = 7;
  if (!this->_internal_namespace_().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_namespace_().data(), static_cast<int>(this->_internal_namespace_().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ConnectSessionResponse.namespace");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_namespace_(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ConnectSessionResponse)
  return target;
}

size_t ConnectSessionResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ConnectSessionResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string pod_name_list = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(pod_name_list_.size());
  for (int i = 0, n = pod_name_list_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      pod_name_list_.Get(i));
  }

  // string session_id = 2;
  if (!this->_internal_session_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_session_id());
  }

  // string engine_config = 4;
  if (!this->_internal_engine_config().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_engine_config());
  }

  // string namespace = 7;
  if (!this->_internal_namespace_().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_namespace_());
  }

  // int32 num_workers = 6;
  if (this->_internal_num_workers() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_num_workers());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ConnectSessionResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ConnectSessionResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ConnectSessionResponse::GetClassData() const { return &_class_data_; }

void ConnectSessionResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ConnectSessionResponse *>(to)->MergeFrom(
      static_cast<const ConnectSessionResponse &>(from));
}


void ConnectSessionResponse::MergeFrom(const ConnectSessionResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ConnectSessionResponse)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  pod_name_list_.MergeFrom(from.pod_name_list_);
  if (!from._internal_session_id().empty()) {
    _internal_set_session_id(from._internal_session_id());
  }
  if (!from._internal_engine_config().empty()) {
    _internal_set_engine_config(from._internal_engine_config());
  }
  if (!from._internal_namespace_().empty()) {
    _internal_set_namespace_(from._internal_namespace_());
  }
  if (from._internal_num_workers() != 0) {
    _internal_set_num_workers(from._internal_num_workers());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ConnectSessionResponse::CopyFrom(const ConnectSessionResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ConnectSessionResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ConnectSessionResponse::IsInitialized() const {
  return true;
}

void ConnectSessionResponse::InternalSwap(ConnectSessionResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  pod_name_list_.InternalSwap(&other->pod_name_list_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &session_id_, lhs_arena,
      &other->session_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &engine_config_, lhs_arena,
      &other->engine_config_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &namespace__, lhs_arena,
      &other->namespace__, rhs_arena
  );
  swap(num_workers_, other->num_workers_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ConnectSessionResponse::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_test_2eproto_getter, &descriptor_table_test_2eproto_once,
      file_level_metadata_test_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ConnectSessionRequest* Arena::CreateMaybeMessage< ::ConnectSessionRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ConnectSessionRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::ConnectSessionResponse* Arena::CreateMaybeMessage< ::ConnectSessionResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ConnectSessionResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
