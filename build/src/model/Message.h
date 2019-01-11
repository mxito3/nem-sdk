#pragma once
#include "string"
class Message
{
  private:
    int type;
    std::string payload;

  public:
    Message(){};
    Message(int type,std::string payload);
    int getType();
    std::string getPayload();
};