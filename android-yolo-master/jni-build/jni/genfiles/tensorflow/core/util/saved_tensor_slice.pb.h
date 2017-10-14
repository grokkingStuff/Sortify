// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/util/saved_tensor_slice.proto

#ifndef PROTOBUF_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "tensorflow/core/framework/tensor_shape.pb.h"
#include "tensorflow/core/framework/tensor_slice.pb.h"
#include "tensorflow/core/framework/tensor.pb.h"
#include "tensorflow/core/framework/types.pb.h"
#include "tensorflow/core/framework/versions.pb.h"
// @@protoc_insertion_point(includes)

namespace tensorflow {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
void protobuf_AssignDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
void protobuf_ShutdownFile_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();

class SavedSlice;
class SavedSliceMeta;
class SavedTensorSliceMeta;
class SavedTensorSlices;

// ===================================================================

class SavedSliceMeta : public ::google::protobuf::Message {
 public:
  SavedSliceMeta();
  virtual ~SavedSliceMeta();

  SavedSliceMeta(const SavedSliceMeta& from);

  inline SavedSliceMeta& operator=(const SavedSliceMeta& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedSliceMeta& default_instance();

  void UnsafeArenaSwap(SavedSliceMeta* other);
  void Swap(SavedSliceMeta* other);

  // implements Message ----------------------------------------------

  inline SavedSliceMeta* New() const { return New(NULL); }

  SavedSliceMeta* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SavedSliceMeta& from);
  void MergeFrom(const SavedSliceMeta& from);
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
  void InternalSwap(SavedSliceMeta* other);
  protected:
  explicit SavedSliceMeta(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);
  ::std::string* unsafe_arena_release_name();
  void unsafe_arena_set_allocated_name(
      ::std::string* name);

  // optional .tensorflow.TensorShapeProto shape = 2;
  bool has_shape() const;
  void clear_shape();
  static const int kShapeFieldNumber = 2;
  private:
  void _slow_mutable_shape();
  void _slow_set_allocated_shape(
      ::google::protobuf::Arena* message_arena, ::tensorflow::TensorShapeProto** shape);
  ::tensorflow::TensorShapeProto* _slow_release_shape();
  public:
  const ::tensorflow::TensorShapeProto& shape() const;
  ::tensorflow::TensorShapeProto* mutable_shape();
  ::tensorflow::TensorShapeProto* release_shape();
  void set_allocated_shape(::tensorflow::TensorShapeProto* shape);
  ::tensorflow::TensorShapeProto* unsafe_arena_release_shape();
  void unsafe_arena_set_allocated_shape(
      ::tensorflow::TensorShapeProto* shape);

  // optional .tensorflow.DataType type = 3;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::tensorflow::DataType type() const;
  void set_type(::tensorflow::DataType value);

  // repeated .tensorflow.TensorSliceProto slice = 4;
  int slice_size() const;
  void clear_slice();
  static const int kSliceFieldNumber = 4;
  const ::tensorflow::TensorSliceProto& slice(int index) const;
  ::tensorflow::TensorSliceProto* mutable_slice(int index);
  ::tensorflow::TensorSliceProto* add_slice();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >*
      mutable_slice();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >&
      slice() const;

  // @@protoc_insertion_point(class_scope:tensorflow.SavedSliceMeta)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::tensorflow::TensorShapeProto* shape_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto > slice_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();

  void InitAsDefaultInstance();
  static SavedSliceMeta* default_instance_;
};
// -------------------------------------------------------------------

class SavedTensorSliceMeta : public ::google::protobuf::Message {
 public:
  SavedTensorSliceMeta();
  virtual ~SavedTensorSliceMeta();

  SavedTensorSliceMeta(const SavedTensorSliceMeta& from);

  inline SavedTensorSliceMeta& operator=(const SavedTensorSliceMeta& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedTensorSliceMeta& default_instance();

  void UnsafeArenaSwap(SavedTensorSliceMeta* other);
  void Swap(SavedTensorSliceMeta* other);

  // implements Message ----------------------------------------------

  inline SavedTensorSliceMeta* New() const { return New(NULL); }

  SavedTensorSliceMeta* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SavedTensorSliceMeta& from);
  void MergeFrom(const SavedTensorSliceMeta& from);
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
  void InternalSwap(SavedTensorSliceMeta* other);
  protected:
  explicit SavedTensorSliceMeta(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .tensorflow.SavedSliceMeta tensor = 1;
  int tensor_size() const;
  void clear_tensor();
  static const int kTensorFieldNumber = 1;
  const ::tensorflow::SavedSliceMeta& tensor(int index) const;
  ::tensorflow::SavedSliceMeta* mutable_tensor(int index);
  ::tensorflow::SavedSliceMeta* add_tensor();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSliceMeta >*
      mutable_tensor();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSliceMeta >&
      tensor() const;

  // optional .tensorflow.VersionDef versions = 2;
  bool has_versions() const;
  void clear_versions();
  static const int kVersionsFieldNumber = 2;
  private:
  void _slow_mutable_versions();
  void _slow_set_allocated_versions(
      ::google::protobuf::Arena* message_arena, ::tensorflow::VersionDef** versions);
  ::tensorflow::VersionDef* _slow_release_versions();
  public:
  const ::tensorflow::VersionDef& versions() const;
  ::tensorflow::VersionDef* mutable_versions();
  ::tensorflow::VersionDef* release_versions();
  void set_allocated_versions(::tensorflow::VersionDef* versions);
  ::tensorflow::VersionDef* unsafe_arena_release_versions();
  void unsafe_arena_set_allocated_versions(
      ::tensorflow::VersionDef* versions);

  // @@protoc_insertion_point(class_scope:tensorflow.SavedTensorSliceMeta)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSliceMeta > tensor_;
  ::tensorflow::VersionDef* versions_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();

  void InitAsDefaultInstance();
  static SavedTensorSliceMeta* default_instance_;
};
// -------------------------------------------------------------------

class SavedSlice : public ::google::protobuf::Message {
 public:
  SavedSlice();
  virtual ~SavedSlice();

  SavedSlice(const SavedSlice& from);

  inline SavedSlice& operator=(const SavedSlice& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedSlice& default_instance();

  void UnsafeArenaSwap(SavedSlice* other);
  void Swap(SavedSlice* other);

  // implements Message ----------------------------------------------

  inline SavedSlice* New() const { return New(NULL); }

  SavedSlice* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SavedSlice& from);
  void MergeFrom(const SavedSlice& from);
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
  void InternalSwap(SavedSlice* other);
  protected:
  explicit SavedSlice(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);
  ::std::string* unsafe_arena_release_name();
  void unsafe_arena_set_allocated_name(
      ::std::string* name);

  // optional .tensorflow.TensorSliceProto slice = 2;
  bool has_slice() const;
  void clear_slice();
  static const int kSliceFieldNumber = 2;
  private:
  void _slow_mutable_slice();
  void _slow_set_allocated_slice(
      ::google::protobuf::Arena* message_arena, ::tensorflow::TensorSliceProto** slice);
  ::tensorflow::TensorSliceProto* _slow_release_slice();
  public:
  const ::tensorflow::TensorSliceProto& slice() const;
  ::tensorflow::TensorSliceProto* mutable_slice();
  ::tensorflow::TensorSliceProto* release_slice();
  void set_allocated_slice(::tensorflow::TensorSliceProto* slice);
  ::tensorflow::TensorSliceProto* unsafe_arena_release_slice();
  void unsafe_arena_set_allocated_slice(
      ::tensorflow::TensorSliceProto* slice);

  // optional .tensorflow.TensorProto data = 3;
  bool has_data() const;
  void clear_data();
  static const int kDataFieldNumber = 3;
  private:
  void _slow_mutable_data();
  void _slow_set_allocated_data(
      ::google::protobuf::Arena* message_arena, ::tensorflow::TensorProto** data);
  ::tensorflow::TensorProto* _slow_release_data();
  public:
  const ::tensorflow::TensorProto& data() const;
  ::tensorflow::TensorProto* mutable_data();
  ::tensorflow::TensorProto* release_data();
  void set_allocated_data(::tensorflow::TensorProto* data);
  ::tensorflow::TensorProto* unsafe_arena_release_data();
  void unsafe_arena_set_allocated_data(
      ::tensorflow::TensorProto* data);

  // @@protoc_insertion_point(class_scope:tensorflow.SavedSlice)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::tensorflow::TensorSliceProto* slice_;
  ::tensorflow::TensorProto* data_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();

  void InitAsDefaultInstance();
  static SavedSlice* default_instance_;
};
// -------------------------------------------------------------------

class SavedTensorSlices : public ::google::protobuf::Message {
 public:
  SavedTensorSlices();
  virtual ~SavedTensorSlices();

  SavedTensorSlices(const SavedTensorSlices& from);

  inline SavedTensorSlices& operator=(const SavedTensorSlices& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const SavedTensorSlices& default_instance();

  void UnsafeArenaSwap(SavedTensorSlices* other);
  void Swap(SavedTensorSlices* other);

  // implements Message ----------------------------------------------

  inline SavedTensorSlices* New() const { return New(NULL); }

  SavedTensorSlices* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SavedTensorSlices& from);
  void MergeFrom(const SavedTensorSlices& from);
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
  void InternalSwap(SavedTensorSlices* other);
  protected:
  explicit SavedTensorSlices(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .tensorflow.SavedTensorSliceMeta meta = 1;
  bool has_meta() const;
  void clear_meta();
  static const int kMetaFieldNumber = 1;
  private:
  void _slow_mutable_meta();
  void _slow_set_allocated_meta(
      ::google::protobuf::Arena* message_arena, ::tensorflow::SavedTensorSliceMeta** meta);
  ::tensorflow::SavedTensorSliceMeta* _slow_release_meta();
  public:
  const ::tensorflow::SavedTensorSliceMeta& meta() const;
  ::tensorflow::SavedTensorSliceMeta* mutable_meta();
  ::tensorflow::SavedTensorSliceMeta* release_meta();
  void set_allocated_meta(::tensorflow::SavedTensorSliceMeta* meta);
  ::tensorflow::SavedTensorSliceMeta* unsafe_arena_release_meta();
  void unsafe_arena_set_allocated_meta(
      ::tensorflow::SavedTensorSliceMeta* meta);

  // optional .tensorflow.SavedSlice data = 2;
  bool has_data() const;
  void clear_data();
  static const int kDataFieldNumber = 2;
  private:
  void _slow_mutable_data();
  void _slow_set_allocated_data(
      ::google::protobuf::Arena* message_arena, ::tensorflow::SavedSlice** data);
  ::tensorflow::SavedSlice* _slow_release_data();
  public:
  const ::tensorflow::SavedSlice& data() const;
  ::tensorflow::SavedSlice* mutable_data();
  ::tensorflow::SavedSlice* release_data();
  void set_allocated_data(::tensorflow::SavedSlice* data);
  ::tensorflow::SavedSlice* unsafe_arena_release_data();
  void unsafe_arena_set_allocated_data(
      ::tensorflow::SavedSlice* data);

  // @@protoc_insertion_point(class_scope:tensorflow.SavedTensorSlices)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool _is_default_instance_;
  ::tensorflow::SavedTensorSliceMeta* meta_;
  ::tensorflow::SavedSlice* data_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto();

  void InitAsDefaultInstance();
  static SavedTensorSlices* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SavedSliceMeta

// optional string name = 1;
inline void SavedSliceMeta::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& SavedSliceMeta::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSliceMeta.name)
  return name_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SavedSliceMeta::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.SavedSliceMeta.name)
}
inline void SavedSliceMeta::set_name(const char* value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.SavedSliceMeta.name)
}
inline void SavedSliceMeta::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.SavedSliceMeta.name)
}
inline ::std::string* SavedSliceMeta::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSliceMeta.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* SavedSliceMeta::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.SavedSliceMeta.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* SavedSliceMeta::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.SavedSliceMeta.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void SavedSliceMeta::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedSliceMeta.name)
}
inline void SavedSliceMeta::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.SavedSliceMeta.name)
}

// optional .tensorflow.TensorShapeProto shape = 2;
inline bool SavedSliceMeta::has_shape() const {
  return !_is_default_instance_ && shape_ != NULL;
}
inline void SavedSliceMeta::clear_shape() {
  if (GetArenaNoVirtual() == NULL && shape_ != NULL) delete shape_;
  shape_ = NULL;
}
inline const ::tensorflow::TensorShapeProto& SavedSliceMeta::shape() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSliceMeta.shape)
  return shape_ != NULL ? *shape_ : *default_instance_->shape_;
}
inline ::tensorflow::TensorShapeProto* SavedSliceMeta::mutable_shape() {
  
  if (shape_ == NULL) {
    _slow_mutable_shape();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSliceMeta.shape)
  return shape_;
}
inline ::tensorflow::TensorShapeProto* SavedSliceMeta::release_shape() {
  // @@protoc_insertion_point(field_release:tensorflow.SavedSliceMeta.shape)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_shape();
  } else {
    ::tensorflow::TensorShapeProto* temp = shape_;
    shape_ = NULL;
    return temp;
  }
}
inline  void SavedSliceMeta::set_allocated_shape(::tensorflow::TensorShapeProto* shape) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete shape_;
  }
  if (shape != NULL) {
    _slow_set_allocated_shape(message_arena, &shape);
  }
  shape_ = shape;
  if (shape) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedSliceMeta.shape)
}

// optional .tensorflow.DataType type = 3;
inline void SavedSliceMeta::clear_type() {
  type_ = 0;
}
inline ::tensorflow::DataType SavedSliceMeta::type() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSliceMeta.type)
  return static_cast< ::tensorflow::DataType >(type_);
}
inline void SavedSliceMeta::set_type(::tensorflow::DataType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.SavedSliceMeta.type)
}

// repeated .tensorflow.TensorSliceProto slice = 4;
inline int SavedSliceMeta::slice_size() const {
  return slice_.size();
}
inline void SavedSliceMeta::clear_slice() {
  slice_.Clear();
}
inline const ::tensorflow::TensorSliceProto& SavedSliceMeta::slice(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSliceMeta.slice)
  return slice_.Get(index);
}
inline ::tensorflow::TensorSliceProto* SavedSliceMeta::mutable_slice(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSliceMeta.slice)
  return slice_.Mutable(index);
}
inline ::tensorflow::TensorSliceProto* SavedSliceMeta::add_slice() {
  // @@protoc_insertion_point(field_add:tensorflow.SavedSliceMeta.slice)
  return slice_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >*
SavedSliceMeta::mutable_slice() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.SavedSliceMeta.slice)
  return &slice_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::TensorSliceProto >&
SavedSliceMeta::slice() const {
  // @@protoc_insertion_point(field_list:tensorflow.SavedSliceMeta.slice)
  return slice_;
}

// -------------------------------------------------------------------

// SavedTensorSliceMeta

// repeated .tensorflow.SavedSliceMeta tensor = 1;
inline int SavedTensorSliceMeta::tensor_size() const {
  return tensor_.size();
}
inline void SavedTensorSliceMeta::clear_tensor() {
  tensor_.Clear();
}
inline const ::tensorflow::SavedSliceMeta& SavedTensorSliceMeta::tensor(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedTensorSliceMeta.tensor)
  return tensor_.Get(index);
}
inline ::tensorflow::SavedSliceMeta* SavedTensorSliceMeta::mutable_tensor(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedTensorSliceMeta.tensor)
  return tensor_.Mutable(index);
}
inline ::tensorflow::SavedSliceMeta* SavedTensorSliceMeta::add_tensor() {
  // @@protoc_insertion_point(field_add:tensorflow.SavedTensorSliceMeta.tensor)
  return tensor_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSliceMeta >*
SavedTensorSliceMeta::mutable_tensor() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.SavedTensorSliceMeta.tensor)
  return &tensor_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::SavedSliceMeta >&
SavedTensorSliceMeta::tensor() const {
  // @@protoc_insertion_point(field_list:tensorflow.SavedTensorSliceMeta.tensor)
  return tensor_;
}

// optional .tensorflow.VersionDef versions = 2;
inline bool SavedTensorSliceMeta::has_versions() const {
  return !_is_default_instance_ && versions_ != NULL;
}
inline void SavedTensorSliceMeta::clear_versions() {
  if (GetArenaNoVirtual() == NULL && versions_ != NULL) delete versions_;
  versions_ = NULL;
}
inline const ::tensorflow::VersionDef& SavedTensorSliceMeta::versions() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedTensorSliceMeta.versions)
  return versions_ != NULL ? *versions_ : *default_instance_->versions_;
}
inline ::tensorflow::VersionDef* SavedTensorSliceMeta::mutable_versions() {
  
  if (versions_ == NULL) {
    _slow_mutable_versions();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedTensorSliceMeta.versions)
  return versions_;
}
inline ::tensorflow::VersionDef* SavedTensorSliceMeta::release_versions() {
  // @@protoc_insertion_point(field_release:tensorflow.SavedTensorSliceMeta.versions)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_versions();
  } else {
    ::tensorflow::VersionDef* temp = versions_;
    versions_ = NULL;
    return temp;
  }
}
inline  void SavedTensorSliceMeta::set_allocated_versions(::tensorflow::VersionDef* versions) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete versions_;
  }
  if (versions != NULL) {
    _slow_set_allocated_versions(message_arena, &versions);
  }
  versions_ = versions;
  if (versions) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedTensorSliceMeta.versions)
}

// -------------------------------------------------------------------

// SavedSlice

// optional string name = 1;
inline void SavedSlice::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& SavedSlice::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSlice.name)
  return name_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SavedSlice::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.SavedSlice.name)
}
inline void SavedSlice::set_name(const char* value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.SavedSlice.name)
}
inline void SavedSlice::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.SavedSlice.name)
}
inline ::std::string* SavedSlice::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSlice.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* SavedSlice::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.SavedSlice.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* SavedSlice::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.SavedSlice.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void SavedSlice::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedSlice.name)
}
inline void SavedSlice::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.SavedSlice.name)
}

// optional .tensorflow.TensorSliceProto slice = 2;
inline bool SavedSlice::has_slice() const {
  return !_is_default_instance_ && slice_ != NULL;
}
inline void SavedSlice::clear_slice() {
  if (GetArenaNoVirtual() == NULL && slice_ != NULL) delete slice_;
  slice_ = NULL;
}
inline const ::tensorflow::TensorSliceProto& SavedSlice::slice() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSlice.slice)
  return slice_ != NULL ? *slice_ : *default_instance_->slice_;
}
inline ::tensorflow::TensorSliceProto* SavedSlice::mutable_slice() {
  
  if (slice_ == NULL) {
    _slow_mutable_slice();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSlice.slice)
  return slice_;
}
inline ::tensorflow::TensorSliceProto* SavedSlice::release_slice() {
  // @@protoc_insertion_point(field_release:tensorflow.SavedSlice.slice)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_slice();
  } else {
    ::tensorflow::TensorSliceProto* temp = slice_;
    slice_ = NULL;
    return temp;
  }
}
inline  void SavedSlice::set_allocated_slice(::tensorflow::TensorSliceProto* slice) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete slice_;
  }
  if (slice != NULL) {
    _slow_set_allocated_slice(message_arena, &slice);
  }
  slice_ = slice;
  if (slice) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedSlice.slice)
}

// optional .tensorflow.TensorProto data = 3;
inline bool SavedSlice::has_data() const {
  return !_is_default_instance_ && data_ != NULL;
}
inline void SavedSlice::clear_data() {
  if (GetArenaNoVirtual() == NULL && data_ != NULL) delete data_;
  data_ = NULL;
}
inline const ::tensorflow::TensorProto& SavedSlice::data() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedSlice.data)
  return data_ != NULL ? *data_ : *default_instance_->data_;
}
inline ::tensorflow::TensorProto* SavedSlice::mutable_data() {
  
  if (data_ == NULL) {
    _slow_mutable_data();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedSlice.data)
  return data_;
}
inline ::tensorflow::TensorProto* SavedSlice::release_data() {
  // @@protoc_insertion_point(field_release:tensorflow.SavedSlice.data)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_data();
  } else {
    ::tensorflow::TensorProto* temp = data_;
    data_ = NULL;
    return temp;
  }
}
inline  void SavedSlice::set_allocated_data(::tensorflow::TensorProto* data) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete data_;
  }
  if (data != NULL) {
    _slow_set_allocated_data(message_arena, &data);
  }
  data_ = data;
  if (data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedSlice.data)
}

// -------------------------------------------------------------------

// SavedTensorSlices

// optional .tensorflow.SavedTensorSliceMeta meta = 1;
inline bool SavedTensorSlices::has_meta() const {
  return !_is_default_instance_ && meta_ != NULL;
}
inline void SavedTensorSlices::clear_meta() {
  if (GetArenaNoVirtual() == NULL && meta_ != NULL) delete meta_;
  meta_ = NULL;
}
inline const ::tensorflow::SavedTensorSliceMeta& SavedTensorSlices::meta() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedTensorSlices.meta)
  return meta_ != NULL ? *meta_ : *default_instance_->meta_;
}
inline ::tensorflow::SavedTensorSliceMeta* SavedTensorSlices::mutable_meta() {
  
  if (meta_ == NULL) {
    _slow_mutable_meta();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedTensorSlices.meta)
  return meta_;
}
inline ::tensorflow::SavedTensorSliceMeta* SavedTensorSlices::release_meta() {
  // @@protoc_insertion_point(field_release:tensorflow.SavedTensorSlices.meta)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_meta();
  } else {
    ::tensorflow::SavedTensorSliceMeta* temp = meta_;
    meta_ = NULL;
    return temp;
  }
}
inline  void SavedTensorSlices::set_allocated_meta(::tensorflow::SavedTensorSliceMeta* meta) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete meta_;
  }
  if (meta != NULL) {
    _slow_set_allocated_meta(message_arena, &meta);
  }
  meta_ = meta;
  if (meta) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedTensorSlices.meta)
}

// optional .tensorflow.SavedSlice data = 2;
inline bool SavedTensorSlices::has_data() const {
  return !_is_default_instance_ && data_ != NULL;
}
inline void SavedTensorSlices::clear_data() {
  if (GetArenaNoVirtual() == NULL && data_ != NULL) delete data_;
  data_ = NULL;
}
inline const ::tensorflow::SavedSlice& SavedTensorSlices::data() const {
  // @@protoc_insertion_point(field_get:tensorflow.SavedTensorSlices.data)
  return data_ != NULL ? *data_ : *default_instance_->data_;
}
inline ::tensorflow::SavedSlice* SavedTensorSlices::mutable_data() {
  
  if (data_ == NULL) {
    _slow_mutable_data();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.SavedTensorSlices.data)
  return data_;
}
inline ::tensorflow::SavedSlice* SavedTensorSlices::release_data() {
  // @@protoc_insertion_point(field_release:tensorflow.SavedTensorSlices.data)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_data();
  } else {
    ::tensorflow::SavedSlice* temp = data_;
    data_ = NULL;
    return temp;
  }
}
inline  void SavedTensorSlices::set_allocated_data(::tensorflow::SavedSlice* data) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete data_;
  }
  if (data != NULL) {
    _slow_set_allocated_data(message_arena, &data);
  }
  data_ = data;
  if (data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.SavedTensorSlices.data)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2futil_2fsaved_5ftensor_5fslice_2eproto__INCLUDED
