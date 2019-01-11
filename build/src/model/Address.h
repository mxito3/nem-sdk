#pragma once
#include "string"
#include "NetworkType.h"
class Address
{
  private:
    std::string address;
    NetworkType networkType;

  public:
    Address(){};
    Address(std::string address, NetworkType networkType);
    std::string getAddress();
    NetworkType getNetworkType();
    static Address * createFromRawAddress(std::string  rawAddress)
    {
        // std::cout<<"in here";
        int from = 0;
        while (1)
        {
            int found = rawAddress.find('-', from);
            // std::cout<<found;
            if (found != std::string::npos)
            {
                rawAddress.erase(found, 1);
                from = found;
            }
            else
            {
                break;
            }
        }
        char addressNetwork = rawAddress[0];
        if (addressNetwork == 'N') {
            return new Address(rawAddress, MAIN_NET);
        } else if (addressNetwork == 'T') {
            return new Address(rawAddress, TEST_NET);
        } else if (addressNetwork == 'M') {
            return new Address(rawAddress, MIJIN);
        } else if (addressNetwork == 'S') {
            return new Address(rawAddress, MIJIN_TEST);
        } 
        throw("invalid address");
    }
    // void test();
};