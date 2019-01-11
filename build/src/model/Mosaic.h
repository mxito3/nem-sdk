#pragma once
#include "MosaicId.h"
class Mosaic
{
    private:
        MosaicId  id;
        long long amount;
    public:
       Mosaic(MosaicId  id, long long amount);    
       long long getAmount();
       MosaicId  getId();
};
