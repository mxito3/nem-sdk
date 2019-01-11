#pragma once
#include <vector>
class Uint64
{
  public:
    static std::vector<uint32_t> fromBigInteger(long long source)
    {
        uint32_t intNumber1 = *(&source);
        unsigned char *address = (unsigned char *)&source + sizeof(int);
        uint32_t intNumber2 = *((unsigned int *)address);
        std::vector<uint32_t> result;
        result.push_back(intNumber2);
        result.push_back(intNumber1);
        return result;
    }
};