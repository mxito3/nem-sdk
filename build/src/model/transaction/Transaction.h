#pragma once
#include "TransactionType.h"
#include "../NetworkType.h"
#include "../Deadline.h"
class Transaction
{
  private:
    TransactionType type;
    NetworkType networkType;
    int version;
    Deadline  deadline;
    int fee; //应该是bignumber，用哪个库好些呢
  public:
    Transaction(TransactionType type, NetworkType networkType, int version, Deadline  deadline, int fee);
    /**
     * Returns the transaction type.
     *
     * @return transaction type
     */

    TransactionType getType();
    /**
     * Returns the network type.
     *
     * @return the network type
     */

    NetworkType getNetworkType();

    /**
     * Returns the transaction version.
     *
     * @return transaction version
     */

    int getVersion();

    /**
     * Returns the deadline to include the transaction.
     *
     * @return deadline to include transaction into a block.
     */

    Deadline getDeadline();

    /**
     * Returns the fee for the transaction. The higher the fee, the higher the priority of the transaction.
     * Transactions with high priority get included in a block before transactions with lower priority.
     *
     * @return fee amount
     */
    int getFee();
};