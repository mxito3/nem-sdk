// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SCHEMAMOSAICSUPPLYCHANGETRANSACTION_CATAPULT_BUFFERS_H_
#define FLATBUFFERS_GENERATED_SCHEMAMOSAICSUPPLYCHANGETRANSACTION_CATAPULT_BUFFERS_H_

#include "flatbuffers/flatbuffers.h"

namespace Catapult {
namespace Buffers {

struct MosaicSupplyChangeTransactionBuffer;

struct MosaicSupplyChangeTransactionBuffer FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SIZE = 4,
    VT_SIGNATURE = 6,
    VT_SIGNER = 8,
    VT_VERSION = 10,
    VT_TYPE = 12,
    VT_FEE = 14,
    VT_DEADLINE = 16,
    VT_MOSAICID = 18,
    VT_DIRECTION = 20,
    VT_DELTA = 22
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
  const flatbuffers::Vector<uint32_t> *mosaicId() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_MOSAICID);
  }
  uint8_t direction() const {
    return GetField<uint8_t>(VT_DIRECTION, 0);
  }
  const flatbuffers::Vector<uint32_t> *delta() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_DELTA);
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
           VerifyOffset(verifier, VT_MOSAICID) &&
           verifier.VerifyVector(mosaicId()) &&
           VerifyField<uint8_t>(verifier, VT_DIRECTION) &&
           VerifyOffset(verifier, VT_DELTA) &&
           verifier.VerifyVector(delta()) &&
           verifier.EndTable();
  }
};

struct MosaicSupplyChangeTransactionBufferBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_size(uint32_t size) {
    fbb_.AddElement<uint32_t>(MosaicSupplyChangeTransactionBuffer::VT_SIZE, size, 0);
  }
  void add_signature(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signature) {
    fbb_.AddOffset(MosaicSupplyChangeTransactionBuffer::VT_SIGNATURE, signature);
  }
  void add_signer(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signer) {
    fbb_.AddOffset(MosaicSupplyChangeTransactionBuffer::VT_SIGNER, signer);
  }
  void add_version(uint16_t version) {
    fbb_.AddElement<uint16_t>(MosaicSupplyChangeTransactionBuffer::VT_VERSION, version, 0);
  }
  void add_type(uint16_t type) {
    fbb_.AddElement<uint16_t>(MosaicSupplyChangeTransactionBuffer::VT_TYPE, type, 0);
  }
  void add_fee(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> fee) {
    fbb_.AddOffset(MosaicSupplyChangeTransactionBuffer::VT_FEE, fee);
  }
  void add_deadline(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> deadline) {
    fbb_.AddOffset(MosaicSupplyChangeTransactionBuffer::VT_DEADLINE, deadline);
  }
  void add_mosaicId(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> mosaicId) {
    fbb_.AddOffset(MosaicSupplyChangeTransactionBuffer::VT_MOSAICID, mosaicId);
  }
  void add_direction(uint8_t direction) {
    fbb_.AddElement<uint8_t>(MosaicSupplyChangeTransactionBuffer::VT_DIRECTION, direction, 0);
  }
  void add_delta(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> delta) {
    fbb_.AddOffset(MosaicSupplyChangeTransactionBuffer::VT_DELTA, delta);
  }
  explicit MosaicSupplyChangeTransactionBufferBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MosaicSupplyChangeTransactionBufferBuilder &operator=(const MosaicSupplyChangeTransactionBufferBuilder &);
  flatbuffers::Offset<MosaicSupplyChangeTransactionBuffer> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<MosaicSupplyChangeTransactionBuffer>(end);
    return o;
  }
};

inline flatbuffers::Offset<MosaicSupplyChangeTransactionBuffer> CreateMosaicSupplyChangeTransactionBuffer(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t size = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signature = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signer = 0,
    uint16_t version = 0,
    uint16_t type = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> fee = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> deadline = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> mosaicId = 0,
    uint8_t direction = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> delta = 0) {
  MosaicSupplyChangeTransactionBufferBuilder builder_(_fbb);
  builder_.add_delta(delta);
  builder_.add_mosaicId(mosaicId);
  builder_.add_deadline(deadline);
  builder_.add_fee(fee);
  builder_.add_signer(signer);
  builder_.add_signature(signature);
  builder_.add_size(size);
  builder_.add_type(type);
  builder_.add_version(version);
  builder_.add_direction(direction);
  return builder_.Finish();
}

inline flatbuffers::Offset<MosaicSupplyChangeTransactionBuffer> CreateMosaicSupplyChangeTransactionBufferDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t size = 0,
    const std::vector<uint8_t> *signature = nullptr,
    const std::vector<uint8_t> *signer = nullptr,
    uint16_t version = 0,
    uint16_t type = 0,
    const std::vector<uint32_t> *fee = nullptr,
    const std::vector<uint32_t> *deadline = nullptr,
    const std::vector<uint32_t> *mosaicId = nullptr,
    uint8_t direction = 0,
    const std::vector<uint32_t> *delta = nullptr) {
  auto signature__ = signature ? _fbb.CreateVector<uint8_t>(*signature) : 0;
  auto signer__ = signer ? _fbb.CreateVector<uint8_t>(*signer) : 0;
  auto fee__ = fee ? _fbb.CreateVector<uint32_t>(*fee) : 0;
  auto deadline__ = deadline ? _fbb.CreateVector<uint32_t>(*deadline) : 0;
  auto mosaicId__ = mosaicId ? _fbb.CreateVector<uint32_t>(*mosaicId) : 0;
  auto delta__ = delta ? _fbb.CreateVector<uint32_t>(*delta) : 0;
  return Catapult::Buffers::CreateMosaicSupplyChangeTransactionBuffer(
      _fbb,
      size,
      signature__,
      signer__,
      version,
      type,
      fee__,
      deadline__,
      mosaicId__,
      direction,
      delta__);
}

inline const Catapult::Buffers::MosaicSupplyChangeTransactionBuffer *GetMosaicSupplyChangeTransactionBuffer(const void *buf) {
  return flatbuffers::GetRoot<Catapult::Buffers::MosaicSupplyChangeTransactionBuffer>(buf);
}

inline const Catapult::Buffers::MosaicSupplyChangeTransactionBuffer *GetSizePrefixedMosaicSupplyChangeTransactionBuffer(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Catapult::Buffers::MosaicSupplyChangeTransactionBuffer>(buf);
}

inline bool VerifyMosaicSupplyChangeTransactionBufferBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Catapult::Buffers::MosaicSupplyChangeTransactionBuffer>(nullptr);
}

inline bool VerifySizePrefixedMosaicSupplyChangeTransactionBufferBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Catapult::Buffers::MosaicSupplyChangeTransactionBuffer>(nullptr);
}

inline void FinishMosaicSupplyChangeTransactionBufferBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Catapult::Buffers::MosaicSupplyChangeTransactionBuffer> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedMosaicSupplyChangeTransactionBufferBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Catapult::Buffers::MosaicSupplyChangeTransactionBuffer> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Buffers
}  // namespace Catapult

#endif  // FLATBUFFERS_GENERATED_SCHEMAMOSAICSUPPLYCHANGETRANSACTION_CATAPULT_BUFFERS_H_
