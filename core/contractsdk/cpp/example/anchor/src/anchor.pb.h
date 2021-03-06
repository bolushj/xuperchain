// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: anchor.proto

#ifndef PROTOBUF_INCLUDED_anchor_2eproto
#define PROTOBUF_INCLUDED_anchor_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_anchor_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_anchor_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
namespace anchor {
class Entity;
class EntityDefaultTypeInternal;
extern EntityDefaultTypeInternal _Entity_default_instance_;
}  // namespace anchor
namespace google {
namespace protobuf {
template<> ::anchor::Entity* Arena::CreateMaybeMessage<::anchor::Entity>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace anchor {

// ===================================================================

class Entity :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:anchor.Entity) */ {
 public:
  Entity();
  virtual ~Entity();

  Entity(const Entity& from);

  inline Entity& operator=(const Entity& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Entity(Entity&& from) noexcept
    : Entity() {
    *this = ::std::move(from);
  }

  inline Entity& operator=(Entity&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Entity& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Entity* internal_default_instance() {
    return reinterpret_cast<const Entity*>(
               &_Entity_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Entity* other);
  friend void swap(Entity& a, Entity& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Entity* New() const final {
    return CreateMaybeMessage<Entity>(nullptr);
  }

  Entity* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Entity>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const Entity& from);
  void MergeFrom(const Entity& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Entity* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
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

  // bytes desc = 3;
  void clear_desc();
  static const int kDescFieldNumber = 3;
  const ::std::string& desc() const;
  void set_desc(const ::std::string& value);
  #if LANG_CXX11
  void set_desc(::std::string&& value);
  #endif
  void set_desc(const char* value);
  void set_desc(const void* value, size_t size);
  ::std::string* mutable_desc();
  ::std::string* release_desc();
  void set_allocated_desc(::std::string* desc);

  // int64 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:anchor.Entity)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr desc_;
  ::google::protobuf::int64 id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_anchor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Entity

// int64 id = 1;
inline void Entity::clear_id() {
  id_ = PROTOBUF_LONGLONG(0);
}
inline ::google::protobuf::int64 Entity::id() const {
  // @@protoc_insertion_point(field_get:anchor.Entity.id)
  return id_;
}
inline void Entity::set_id(::google::protobuf::int64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:anchor.Entity.id)
}

// string name = 2;
inline void Entity::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Entity::name() const {
  // @@protoc_insertion_point(field_get:anchor.Entity.name)
  return name_.GetNoArena();
}
inline void Entity::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:anchor.Entity.name)
}
#if LANG_CXX11
inline void Entity::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:anchor.Entity.name)
}
#endif
inline void Entity::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:anchor.Entity.name)
}
inline void Entity::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:anchor.Entity.name)
}
inline ::std::string* Entity::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:anchor.Entity.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Entity::release_name() {
  // @@protoc_insertion_point(field_release:anchor.Entity.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Entity::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:anchor.Entity.name)
}

// bytes desc = 3;
inline void Entity::clear_desc() {
  desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Entity::desc() const {
  // @@protoc_insertion_point(field_get:anchor.Entity.desc)
  return desc_.GetNoArena();
}
inline void Entity::set_desc(const ::std::string& value) {
  
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:anchor.Entity.desc)
}
#if LANG_CXX11
inline void Entity::set_desc(::std::string&& value) {
  
  desc_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:anchor.Entity.desc)
}
#endif
inline void Entity::set_desc(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:anchor.Entity.desc)
}
inline void Entity::set_desc(const void* value, size_t size) {
  
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:anchor.Entity.desc)
}
inline ::std::string* Entity::mutable_desc() {
  
  // @@protoc_insertion_point(field_mutable:anchor.Entity.desc)
  return desc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Entity::release_desc() {
  // @@protoc_insertion_point(field_release:anchor.Entity.desc)
  
  return desc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Entity::set_allocated_desc(::std::string* desc) {
  if (desc != nullptr) {
    
  } else {
    
  }
  desc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), desc);
  // @@protoc_insertion_point(field_set_allocated:anchor.Entity.desc)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace anchor

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_anchor_2eproto
