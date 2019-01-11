#include "Message.h"
Message::Message(int type, std::string payload)
{
    this->payload = payload;
    this->type = type;
}
int Message::getType()
{
    return this->type;
}
std::string Message::getPayload()
{
    return this->payload;
}