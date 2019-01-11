#pragma once
#include "Message.h"
class PlainMessage:public Message
{
    private:
        std::string plainMessage;
    public:
        PlainMessage(std::string payload);
        std::string getPlainMessage();
        static PlainMessage* create(std::string payload)
        {
            return new PlainMessage(payload);
        }
};