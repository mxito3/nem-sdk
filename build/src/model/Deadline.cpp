#include "Deadline.h"
#include "./common/TimeOperate.h"
Deadline::Deadline(tm * value)
{
    this->value=value;
}
// static Deadline * Deadline::create(int uints)
// {
//     if(uints <= 0)
//     {
//         throw("deadline should be greater than 0");
//     }
//     else if(uints >=24)
//     {
//         throw("deadline must less than 24");
//     }
//     time_t  now= time(0);
//     tm * timeStampDateTime = localtime(&now);
//     TimeOperate timeAdder;
//     timeAdder.AddHours(timeStampDateTime,uints);
//     return new Deadline(timeStampDateTime);
// }