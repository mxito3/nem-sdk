#include "Transaction.h"
Transaction::Transaction(TransactionType type, NetworkType networkType, int version, Deadline  deadline, int fee)
{
    this->type = type;
    deadline = deadline;
    this->fee = fee;
    this->networkType = networkType;
    this->version = version;
}

TransactionType Transaction::getType()
{
    return this->type;
}

NetworkType Transaction::getNetworkType()
{
    return this->networkType;
}

int Transaction::getVersion()
{
    return this->version;
}

Deadline Transaction::getDeadline()
{
    return this->deadline;
}

int Transaction::getFee()
{
    return this->fee;
}