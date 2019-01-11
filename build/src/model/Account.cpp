#include "Account.h"
#include <assert.h>
Account::Account(std::string address,std::vector<std::string> keyPair)
{
    assert(keyPair.size()==2);
    this->keyPair = std::vector<std::string>(2);//分配空间
    this->keyPair=keyPair;
    this->address=address;
}