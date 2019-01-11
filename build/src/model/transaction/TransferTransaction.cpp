#include "TransferTransaction.h"
#include "schema_transfer_transaction_generated.h"
#include <cppcodec/base32_crockford.hpp>
#include "../common/Uint64.h"
using namespace Catapult::Buffers;
Mosaic TransferTransaction::getMosaic(int i)
{
    return mosaics[i];
}
TransferTransaction::TransferTransaction(NetworkType networkType, int version, Deadline deadline,long fee, Address  recipient, std::vector<Mosaic> mosaics, Message  message):Transaction(TRANSFER, networkType, version, deadline, fee)
{
    mosaics = mosaics;
    recipient = recipient;
    message = message;
}
uint8_t * TransferTransaction::generateByte()
{
    flatbuffers::FlatBufferBuilder builder(1024);

    int fixSize = 149; // replace by the all numbers sum or add a comment explaining this
    //signatureVector
    auto signatureVector = builder.CreateVector(new uint8_t[64],64);
    //signer
    auto signerVector = builder.CreateVector(new uint8_t[32],32);
    //fee
    
    
    auto feeVector  = builder.CreateVector(Uint64::fromBigInteger(this->getFee()));
    //version
    int version = 36867;  //暂时写成这样
    //rawAdress
    auto rawAddress = this->recipient.getAddress();
    //address 
    std::vector<uint8_t> address = cppcodec::base32_crockford::decode(rawAddress);
    auto recipientVector = builder.CreateVector(address);
    //type
    int type = this->getType();
    //deadline
    uint32_t rawDeadline []= {255362162 ,20};
    auto  deadline = builder.CreateVector(rawDeadline,2);
    //create message 
    std::vector<uint8_t> bytePayload (message.getPayload().begin(),message.getPayload().end());
    auto payload = builder.CreateVector(bytePayload);
    auto  MessageBuffer = CreateMessageBuffer(builder,message.getType(),payload);

    //creat mosaic
    std::vector<flatbuffers::Offset<MosaicBuffer>> rawMosaicBuffers;
    for(int i = 0;i<this->mosaics.size();i++)
    {
        auto id = builder.CreateVector(Uint64::fromBigInteger(mosaics[i].getId().getId()));
        auto amount = builder.CreateVector(Uint64::fromBigInteger(mosaics[i].getAmount()));
        rawMosaicBuffers[i]=CreateMosaicBuffer(builder,id,amount);
    }
    auto mosaicBuffers  = builder.CreateVector(rawMosaicBuffers);
    
    //build transferTransactionBuffer
    TransferTransactionBufferBuilder transferTransactionBuffer(builder);
    transferTransactionBuffer.add_size(fixSize + (16 * mosaics.size()) + bytePayload.size());
    transferTransactionBuffer.add_signature(signatureVector);
    transferTransactionBuffer.add_signer(signerVector);
    transferTransactionBuffer.add_version(version);
    transferTransactionBuffer.add_type(type);
    transferTransactionBuffer.add_fee(feeVector);
    transferTransactionBuffer.add_deadline(deadline);
    transferTransactionBuffer.add_recipient(recipientVector);
    transferTransactionBuffer.add_numMosaics(mosaics.size());
    transferTransactionBuffer.add_messageSize(bytePayload.size()+1);
    transferTransactionBuffer.add_message(MessageBuffer);
    transferTransactionBuffer.add_mosaics(mosaicBuffers);
    auto transferTransaction=transferTransactionBuffer.Finish();
    uint8_t * bufferPointer = builder.GetBufferPointer();
    return bufferPointer;
}
