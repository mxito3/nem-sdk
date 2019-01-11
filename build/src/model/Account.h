#pragma once
#include <string>
#include <vector>
class Account
{
    private:
        std::string address;
        std::vector<std::string> keyPair; 
    public:
        Account(std::string address,std::vector<std::string> keyPair);
};