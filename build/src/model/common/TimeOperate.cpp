#include "TimeOperate.h"
void TimeOperate::AddHours(tm *time,int hours)
{
    if(time == NULL)
    {
        throw("operate time can't be null");
    }
    else
    {
        (*time).tm_sec+=secondInOneHour*hours;
        mktime(time);
    }
}