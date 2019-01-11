// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SCHEMAREGISTERNAMESPACETRANSACTION_CATAPULT_BUFFERS_H_
#define FLATBUFFERS_GENERATED_SCHEMAREGISTERNAMESPACETRANSACTION_CATAPULT_BUFFERS_H_

#include "flatbuffers/flatbuffers.h"

namespace Catapult {
namespace Buffers {

struct RegisterNamespaceTransactionBuffer;

struct RegisterNamespaceTransactionBuffer FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SIZE = 4,
    VT_SIGNATURE = 6,
    VT_SIGNER = 8,
    VT_VERSION = 10,
    VT_TYPE = 12,
    VT_FEE = 14,
    VT_DEADLINE = 16,
    VT_NAMESPACETYPE = 18,
    VT_DURATIONPARENTID = 20,
    VT_NAMESPACEID = 22,
    VT_NAMESPACENAMESIZE = 24,
    VT_NAMESPACENAME = 26
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
  uint8_t namespaceType() const {
    return GetField<uint8_t>(VT_NAMESPACETYPE, 0);
  }
  const flatbuffers::Vector<uint32_t> *durationParentId() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_DURATIONPARENTID);
  }
  const flatbuffers::Vector<uint32_t> *namespaceId() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_NAMESPACEID);
  }
  uint8_t namespaceNameSize() const {
    return GetField<uint8_t>(VT_NAMESPACENAMESIZE, 0);
  }
  const flatbuffers::String *namespaceName() const {
    return GetPointer<const flatbuffers::String *>(VT_NAMESPACENAME);
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
           VerifyField<uint8_t>(verifier, VT_NAMESPACETYPE) &&
           VerifyOffset(verifier, VT_DURATIONPARENTID) &&
           verifier.VerifyVector(durationParentId()) &&
           VerifyOffset(verifier, VT_NAMESPACEID) &&
           verifier.VerifyVector(namespaceId()) &&
           VerifyField<uint8_t>(verifier, VT_NAMESPACENAMESIZE) &&
           VerifyOffset(verifier, VT_NAMESPACENAME) &&
           verifier.VerifyString(namespaceName()) &&
           verifier.EndTable();
  }
};

struct RegisterNamespaceTransactionBufferBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_size(uint32_t size) {
    fbb_.AddElement<uint32_t>(RegisterNamespaceTransactionBuffer::VT_SIZE, size, 0);
  }
  void add_signature(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signature) {
    fbb_.AddOffset(RegisterNamespaceTransactionBuffer::VT_SIGNATURE, signature);
  }
  void add_signer(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signer) {
    fbb_.AddOffset(RegisterNamespaceTransactionBuffer::VT_SIGNER, signer);
  }
  void add_version(uint16_t version) {
    fbb_.AddElement<uint16_t>(RegisterNamespaceTransactionBuffer::VT_VERSION, version, 0);
  }
  void add_type(uint16_t type) {
    fbb_.AddElement<uint16_t>(RegisterNamespaceTransactionBuffer::VT_TYPE, type, 0);
  }
  void add_fee(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> fee) {
    fbb_.AddOffset(RegisterNamespaceTransactionBuffer::VT_FEE, fee);
  }
  void add_deadline(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> deadline) {
    fbb_.AddOffset(RegisterNamespaceTransactionBuffer::VT_DEADLINE, deadline);
  }
  void add_namespaceType(uint8_t namespaceType) {
    fbb_.AddElement<uint8_t>(RegisterNamespaceTransactionBuffer::VT_NAMESPACETYPE, namespaceType, 0);
  }
  void add_durationParentId(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> durationParentId) {
    fbb_.AddOffset(RegisterNamespaceTransactionBuffer::VT_DURATIONPARENTID, durationParentId);
  }
  void add_namespaceId(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> namespaceId) {
    fbb_.AddOffset(RegisterNamespaceTransactionBuffer::VT_NAMESPACEID, namespaceId);
  }
  void add_namespaceNameSize(uint8_t namespaceNameSize) {
    fbb_.AddElement<uint8_t>(RegisterNamespaceTransactionBuffer::VT_NAMESPACENAMESIZE, namespaceNameSize, 0);
  }
  void add_namespaceName(flatbuffers::Offset<flatbuffers::String> namespaceName) {
    fbb_.AddOffset(RegisterNamespaceTransactionBuffer::VT_NAMESPACENAME, namespaceName);
  }
  explicit RegisterNamespaceTransactionBufferBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  RegisterNamespaceTransactionBufferBuilder &operator=(const RegisterNamespaceTransactionBufferBuilder &);
  flatbuffers::Offset<RegisterNamespaceTransactionBuffer> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RegisterNamespaceTransactionBuffer>(end);
    return o;
  }
};

inline flatbuffers::Offset<RegisterNamespaceTransactionBuffer> CreateRegisterNamespaceTransactionBuffer(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t size = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signature = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signer = 0,
    uint16_t version = 0,
    uint16_t type = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> fee = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> deadline = 0,
    uint8_t namespaceType = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> durationParentId = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> namespaceId = 0,
    uint8_t namespaceNameSize = 0,
    flatbuffers::Offset<flatbuffers::String> namespaceName = 0) {
  RegisterNamespaceTransactionBufferBuilder builder_(_fbb);
  builder_.add_namespaceName(namespaceName);
  builder_.add_namespaceId(namespaceId);
  builder_.add_durationParentId(durationParentId);
  builder_.add_deadline(deadline);
  builder_.add_fee(fee);
  builder_.add_signer(signer);
  builder_.add_signature(signature);
  builder_.add_size(size);
  builder_.add_type(type);
  builder_.add_version(version);
  builder_.add_namespaceNameSize(namespaceNameSize);
  builder_.add_namespaceType(namespaceType);
  return builder_.Finish();
}

inline flatbuffers::Offset<RegisterNamespaceTransactionBuffer> CreateRegisterNamespaceTransactionBufferDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t size = 0,
    const std::vector<uint8_t> *signature = nullptr,
    const std::vector<uint8_t> *signer = nullptr,
    uint16_t version = 0,
    uint16_t type = 0,
    const std::vector<uint32_t> *fee = nullptr,
    const std::vector<uint32_t> *deadline = nullptr,
    uint8_t namespaceType = 0,
    const std::vector<uint32_t> *durationParentId = nullptr,
    const std::vector<uint32_t> *namespaceId = nullptr,
    uint8_t namespaceNameSize = 0,
    const char *namespaceName = nullptr) {
  auto signature__ = signature ? _fbb.CreateVector<uint8_t>(*signature) : 0;
  auto signer__ = signer ? _fbb.CreateVector<uint8_t>(*signer) : 0;
  auto fee__ = fee ? _fbb.CreateVector<uint32_t>(*fee) : 0;
  auto deadline__ = deadline ? _fbb.CreateVector<uint32_t>(*deadline) : 0;
  auto durationParentId__ = durationParentId ? _fbb.CreateVector<uint32_t>(*durationParentId) : 0;
  auto namespaceId__ = namespaceId ? _fbb.CreateVector<uint32_t>(*namespaceId) : 0;
  auto namespaceName__ = namespaceName ? _fbb.CreateString(namespaceName) : 0;
  return Catapult::Buffers::CreateRegisterNamespaceTransactionBuffer(
      _fbb,
      size,
      signature__,
      signer__,
      version,
      type,
      fee__,
      deadline__,
      namespaceType,
      durationParentId__,
      namespaceId__,
      namespaceNameSize,
      namespaceName__);
}

inline const Catapult::Buffers::RegisterNamespaceTransactionBuffer *GetRegisterNamespaceTransactionBuffer(const void *buf) {
  return flatbuffers::GetRoot<Catapult::Buffers::RegisterNamespaceTransactionBuffer>(buf);
}

inline const Catapult::Buffers::RegisterNamespaceTransactionBuffer *GetSizePrefixedRegisterNamespaceTransactionBuffer(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<Catapult::Buffers::RegisterNamespaceTransactionBuffer>(buf);
}

inline bool VerifyRegisterNamespaceTransactionBufferBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Catapult::Buffers::RegisterNamespaceTransactionBuffer>(nullptr);
}

inline bool VerifySizePrefixedRegisterNamespaceTransactionBufferBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Catapult::Buffers::RegisterNamespaceTransactionBuffer>(nullptr);
}

inline void FinishRegisterNamespaceTransactionBufferBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Catapult::Buffers::RegisterNamespaceTransactionBuffer> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedRegisterNamespaceTransactionBufferBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Catapult::Buffers::RegisterNamespaceTransactionBuffer> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Buffers
}  // namespace Catapult

#endif  // FLATBUFFERS_GENERATED_SCHEMAREGISTERNAMESPACETRANSACTION_CATAPULT_BUFFERS_H_