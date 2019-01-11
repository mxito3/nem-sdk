#pragma once
#include <time.h>
#include <memory>
#define secondInOneHour 3600
class TimeOperate
{
    public:
        void AddHours(tm *time,int hours);
};
