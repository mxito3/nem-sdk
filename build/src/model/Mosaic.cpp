#include "Mosaic.h"
Mosaic::Mosaic(MosaicId  id, long long amount)
{
    id = id;
    this->amount = amount;
}
long long Mosaic::getAmount()
{
    return this->amount;
}
MosaicId  Mosaic::getId()
{
    return id;
}