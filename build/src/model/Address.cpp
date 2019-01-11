#include "Address.h"
#include "iostream"
Address::Address(std::string address, NetworkType networkType)
{
    this->address=address;
    this->networkType=networkType;
}

std::string Address::getAddress()
{
    return this->address;
}
NetworkType Address::getNetworkType()
{
    return this->networkType;
}
