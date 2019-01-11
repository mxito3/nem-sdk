#include "PlainMessage.h"
PlainMessage::PlainMessage(std::string payload):Message(0,payload)
{

}

std::string PlainMessage::getPlainMessage()
{
    return this->plainMessage;
}