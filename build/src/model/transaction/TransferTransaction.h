#pragma once
#include "string"
#include "Transaction.h"
#include "../Mosaic.h"
#include "../Address.h"
#include "../Message.h"
#include <vector>
class Mosaic;
// #include
class TransferTransaction:public Transaction
{
    private:
        std::vector<Mosaic> mosaics;
        Address  recipient;
        Message  message;
    public:
        TransferTransaction(NetworkType networkType, int version, Deadline  deadline,long fee, Address  recipient, std::vector<Mosaic> mosaics, Message  message);
        uint8_t * generateByte(); 
        Mosaic getMosaic(int i);
        
};