// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SCHEMAMOSAICDEFINITIONTRANSACTION_CATAPULT_BUFFERS_H_
#define FLATBUFFERS_GENERATED_SCHEMAMOSAICDEFINITIONTRANSACTION_CATAPULT_BUFFERS_H_

#include "flatbuffers/flatbuffers.h"

namespace Catapult {
namespace Buffers {

struct MosaicDefinitionTransactionBuffer;

struct MosaicDefinitionTransactionBuffer FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SIZE = 4,
    VT_SIGNATURE = 6,
    VT_SIGNER = 8,
    VT_VERSION = 10,
    VT_TYPE = 12,
    VT_FEE = 14,
    VT_DEADLINE = 16,
    VT_PARENTID = 18,
    VT_MOSAICID = 20,
    VT_MOSAICNAMELENGTH = 22,
    VT_NUMOPTIONALPROPERTIES = 24,
    VT_FLAGS = 26,
    VT_DIVISIBILITY = 28,
    VT_MOSAICNAME = 30,
    VT_INDICATEDURATION = 32,
    VT_DURATION = 34
  };
  uint32_t size() const {
    return GetField<uint32_t>(VT_SIZE, 0);
  }
  const flatbuffers::Vector<uint8_t> *signature() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_SIGNATURE);
  }
  const flatbuffers::Vector<uint8_t> *signer() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_SIGNER);
  }
  uint16_t version() const {
    return GetField<uint16_t>(VT_VERSION, 0);
  }
  uint16_t type() const {
    return GetField<uint16_t>(VT_TYPE, 0);
  }
  const flatbuffers::Vector<uint32_t> *fee() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_FEE);
  }
  const flatbuffers::Vector<uint32_t> *deadline() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_DEADLINE);
  }
  const flatbuffers::Vector<uint32_t> *parentId() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_PARENTID);
  }
  const flatbuffers::Vector<uint32_t> *mosaicId() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_MOSAICID);
  }
  uint8_t mosaicNameLength() const {
    return GetField<uint8_t>(VT_MOSAICNAMELENGTH, 0);
  }
  uint8_t numOptionalProperties() const {
    return GetField<uint8_t>(VT_NUMOPTIONALPROPERTIES, 0);
  }
  uint8_t flags() const {
    return GetField<uint8_t>(VT_FLAGS, 0);
  }
  uint8_t divisibility() const {
    return GetField<uint8_t>(VT_DIVISIBILITY, 0);
  }
  const flatbuffers::String *mosaicName() const {
    return GetPointer<const flatbuffers::String *>(VT_MOSAICNAME);
  }
  uint8_t indicateDuration() const {
    return GetField<uint8_t>(VT_INDICATEDURATION, 0);
  }
  const flatbuffers::Vector<uint32_t> *duration() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_DURATION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_SIZE) &&
           VerifyOffset(verifier, VT_SIGNATURE) &&
           verifier.VerifyVector(signature()) &&
           VerifyOffset(verifier, VT_SIGNER) &&
           verifier.VerifyVector(signer()) &&
           VerifyField<uint16_t>(verifier, VT_VERSION) &&
           VerifyField<uint16_t>(verifier, VT_TYPE) &&
           VerifyOffset(verifier, VT_FEE) &&
           verifier.VerifyVector(fee()) &&
           VerifyOffset(verifier, VT_DEADLINE) &&
           verifier.VerifyVector(deadline()) &&
           VerifyOffset(verifier, VT_PARENTID) &&
           verifier.VerifyVector(parentId()) &&
           VerifyOffset(verifier, VT_MOSAICID) &&
           verifier.VerifyVector(mosaicId()) &&
           VerifyField<uint8_t>(verifier, VT_MOSAICNAMELENGTH) &&
           VerifyField<uint8_t>(verifier, VT_NUMOPTIONALPROPERTIES) &&
           VerifyField<uint8_t>(verifier, VT_FLAGS) &&
           VerifyField<uint8_t>(verifier, VT_DIVISIBILITY) &&
           VerifyOffset(verifier, VT_MOSAICNAME) &&
           verifier.VerifyString(mosaicName()) &&
           VerifyField<uint8_t>(verifier, VT_INDICATEDURATION) &&
           VerifyOffset(verifier, VT_DURATION) &&
           verifier.VerifyVector(duration()) &&
           verifier.EndTable();
  }
};

struct MosaicDefinitionTransactionBufferBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_size(uint32_t size) {
    fbb_.AddElement<uint32_t>(MosaicDefinitionTransactionBuffer::VT_SIZE, size, 0);
  }
  void add_signature(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signature) {
    fbb_.AddOffset(MosaicDefinitionTransactionBuffer::VT_SIGNATURE, signature);
  }
  void add_signer(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signer) {
    fbb_.AddOffset(MosaicDefinitionTransactionBuffer::VT_SIGNER, signer);
  }
  void add_version(uint16_t version) {
    fbb_.AddElement<uint16_t>(MosaicDefinitionTransactionBuffer::VT_VERSION, version, 0);
  }
  void add_type(uint16_t type) {
    fbb_.AddElement<uint16_t>(MosaicDefinitionTransactionBuffer::VT_TYPE, type, 0);
  }
  void add_fee(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> fee) {
    fbb_.AddOffset(MosaicDefinitionTransactionBuffer::VT_FEE, fee);
  }
  void add_deadline(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> deadline) {
    fbb_.AddOffset(MosaicDefinitionTransactionBuffer::VT_DEADLINE, deadline);
  }
  void add_parentId(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> parentId) {
    fbb_.AddOffset(MosaicDefinitionTransactionBuffer::VT_PARENTID, parentId);
  }
  void add_mosaicId(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> mosaicId) {
    fbb_.AddOffset(MosaicDefinitionTransactionBuffer::VT_MOSAICID, mosaicId);
  }
  void add_mosaicNameLength(uint8_t mosaicNameLength) {
    fbb_.AddElement<uint8_t>(MosaicDefinitionTransactionBuffer::VT_MOSAICNAMELENGTH, mosaicNameLength, 0);
  }
  void add_numOptionalProperties(uint8_t numOptionalProperties) {
    fbb_.AddElement<uint8_t>(MosaicDefinitionTransactionBuffer::VT_NUMOPTIONALPROPERTIES, numOptionalProperties, 0);
  }
  void add_flags(uint8_t flags) {
    fbb_.AddElement<uint8_t>(MosaicDefinitionTransactionBuffer::VT_FLAGS, flags, 0);
  }
  void add_divisibility(uint8_t divisibility) {
    fbb_.AddElement<uint8_t>(MosaicDefinitionTransactionBuffer::VT_DIVISIBILITY, divisibility, 0);
  }
  void add_mosaicName(flatbuffers::Offset<flatbuffers::String> mosaicName) {
    fbb_.AddOffset(MosaicDefinitionTransactionBuffer::VT_MOSAICNAME, mosaicName);
  }
  void add_indicateDuration(uint8_t indicateDuration) {
    fbb_.AddElement<uint8_t>(MosaicDefinitionTransactionBuffer::VT_INDICATEDURATION, indicateDuration, 0);
  }
  void add_duration(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> duration) {
    fbb_.AddOffset(MosaicDefinitionTransactionBuffer::VT_DURATION, duration);
  }
  explicit MosaicDefinitionTransactionBufferBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MosaicDefinitionTransactionBufferBuilder &operator=(const MosaicDefinitionTransactionBufferBuilder &);
  flatbuffers::Offset<MosaicDefinitionTransactionBuffer> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<MosaicDefinitionTransactionBuffer>(end);
    return o;
  }
};

inline flatbuffers::Offset<MosaicDefinitionTransactionBuffer> CreateMosaicDefinitionTransactionBuffer(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t size = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signature = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signer = 0,
    uint16_t version = 0,
    uint16_t type = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> fee = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> deadline = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> parentId = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> mosaicId = 0,
    uint8_t mosaicNameLength = 0,
    uint8_t numOptionalProperties = 0,
    uint8_t flags = 0,
    uint8_t divisibility = 0,
    flatbuffers::Offset<flatbuffers::String> mosaicName = 0,
    uint8_t indicateDuration = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> duration = 0) {
  MosaicDefinitionTransactionBufferBuilder builder_(_fbb);
  builder_.add_duration(duration);
  builder_.add_mosaicName(mosaicName);
  builder_.add_mosaicId(mosaicId);
  builder_.add_parentId(parentId);
  builder_.add_deadline(deadline);
  builder_.add_fee(fee);
  builder_.add_signer(signer);
  builder_.add_signature(signature);
  builder_.add_size(size);
  builder_.add_type(type);
  builder_.add_version(version);
  builder_.add_indicateDuration(indicateDuration);
  builder_.add_divisibility(divisibility);
  builder_.add_flags(flags);
  builder_.add_numOptionalProperties(numOptionalProperties);
  builder_.add_mosaicNameLength(mosaicNameLength);
  return builder_.Finish();
}

inline flatbuffers::Offset<MosaicDefinitionTransactionBuffer> CreateMosaicDefinitionTransactionBufferDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t size = 0,
    const std::vector<uint8_t> *signature = nullptr,
    const std::vector<uint8_t> *signer = nullptr,
    uint16_t version = 0,
    uint16_t type = 0,
    const std::vector<uint32_t> *fee = nullptr,
    const std::vector<uint32_t> *deadline = nullptr,
    const std::vector<uint32_t> *parentId = nullptr,
    const std::vector<uint32_t> *mosaicId = nullptr,
    uint8_t mosaicNameLength = 0,
    uint8_t numOptionalProperties = 0,
    uint8_t flags = 0,
    uint8_t divisibility = 0,
    const char *mosaicName = nullptr,
    uint8_t indicateDuration = 0,
    const std::vector<uint32_t> *duration = nullptr) {
  auto signature__ = signature ? _fbb.CreateVector<uint8_t>(*signature) : 0;
  auto signer__ = signer ? _fbb.CreateVector<uint8_t>(*signer) : 0;
  auto fee__ = fee ? _fbb.CreateVector<uint32_t>(*fee) : 0;
  auto deadline__ = deadline ? _fbb.CreateVector<uint32_t>(*deadline) : 0;
  auto parentId__ = parentId ? _fbb.CreateVector<uint32_t>(*parentId) : 0;
  auto mosaicId__ = mosaicId ? _fbb.CreateVector<uint32_t>(*mosaicId) : 0;
  auto mosaicName__ = mosaicName ? _fbb.CreateString(mosaicName) : 0;
  auto duration__ = duration ? _fbb.CreateVector<uint32_t>(*duration) : 0;
  return Catapult::Buffers::CreateMosaicDefinitionTransactionBuffer(
      _fbb,
      size,
      signature__,
      signer__,
      version,
      type,
      fee__,
      deadline__,
      parentId__,
      mosaicId__,
      mosaicNameLength,
      numOptionalProperties,
      flags,
      divisibility,
      mosaicName__,
      indicateDuration,
      duration__);
}

inline const Catapult::Buffers::MosaicDefinitionTransactionBuffer *GetMosaicDefinitionTransactionBuffer(const void *buf) {
  return flatbuffers::GetRoot<Catapult::Buffers::MosaicDefinitionTransactionBuffer>(buf);
}

inline const Catapult::Buffers::MosaicDefinitionTransactionBuffer *GetSizePrefixedMosaicDefinitionTransactionBuffer(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Catapult::Buffers::MosaicDefinitionTransactionBuffer>(buf);
}

inline bool VerifyMosaicDefinitionTransactionBufferBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Catapult::Buffers::MosaicDefinitionTransactionBuffer>(nullptr);
}

inline bool VerifySizePrefixedMosaicDefinitionTransactionBufferBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Catapult::Buffers::MosaicDefinitionTransactionBuffer>(nullptr);
}

inline void FinishMosaicDefinitionTransactionBufferBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Catapult::Buffers::MosaicDefinitionTransactionBuffer> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedMosaicDefinitionTransactionBufferBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Catapult::Buffers::MosaicDefinitionTransactionBuffer> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Buffers
}  // namespace Catapult

#endif  // FLATBUFFERS_GENERATED_SCHEMAMOSAICDEFINITIONTRANSACTION_CATAPULT_BUFFERS_H_
