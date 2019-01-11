/**
 * Catapult REST API Reference
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 0.7.8
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.1-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * TransactionRoutesApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_TransactionRoutesApi_H_
#define IO_SWAGGER_CLIENT_API_TransactionRoutesApi_H_


#include "../ApiClient.h"

#include "Object.h"
#include "TransactionHashes.h"
#include "TransactionIds.h"
#include "TransactionPayload.h"
#include "TransactionStatusDTO.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  TransactionRoutesApi
{
public:
    TransactionRoutesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~TransactionRoutesApi();
    /// <summary>
    /// Announce a cosignature transaction
    /// </summary>
    /// <remarks>
    /// Announces a [cosignature transaction](https://nemtech.github.io/concepts/aggregate-transaction.html#cosignature-transaction) to the network.
    /// </remarks>
    /// <param name="payload">The transaction [payload](https://nemtech.github.io/api/serialization.html).</param>
    pplx::task<std::shared_ptr<Object>> announceCosignatureTransaction(
        std::shared_ptr<TransactionPayload> payload
    );
    /// <summary>
    /// Announce an aggregate bonded transaction
    /// </summary>
    /// <remarks>
    /// Announces an [aggregate bonded transaction](https://nemtech.github.io/concepts/aggregate-transaction.html#aggregate-bonded) to the network.
    /// </remarks>
    /// <param name="payload">The transaction [payload](https://nemtech.github.io/api/serialization.html).</param>
    pplx::task<std::shared_ptr<Object>> announcePartialTransaction(
        std::shared_ptr<TransactionPayload> payload
    );
    /// <summary>
    /// Announce a new transaction
    /// </summary>
    /// <remarks>
    /// Announces a [transaction](https://nemtech.github.io/concepts/transaction.html) to the network. It is recommended to use the NEM2-SDK to announce transactions as they should be [serialized](https://nemtech.github.io/api/serialization.html).
    /// </remarks>
    /// <param name="payload">The transaction [payload](https://nemtech.github.io/api/serialization.html).</param>
    pplx::task<std::shared_ptr<Object>> announceTransaction(
        std::shared_ptr<TransactionPayload> payload
    );
    /// <summary>
    /// Get transaction information
    /// </summary>
    /// <remarks>
    /// Returns transaction information given a transactionId or hash.
    /// </remarks>
    /// <param name="transactionId">The transaction id or hash.</param>
    pplx::task<std::shared_ptr<Object>> getTransaction(
        utility::string_t transactionId
    );
    /// <summary>
    /// Get transaction status
    /// </summary>
    /// <remarks>
    /// Returns the transaction status for a given hash.
    /// </remarks>
    /// <param name="hash">The transaction hash.</param>
    pplx::task<std::shared_ptr<TransactionStatusDTO>> getTransactionStatus(
        utility::string_t hash
    );
    /// <summary>
    /// Get transactions information
    /// </summary>
    /// <remarks>
    /// Returns transactions information for a given array of transactionIds.
    /// </remarks>
    /// <param name="transactionIds">An array of transaction ids or hashes.</param>
    pplx::task<std::vector<std::shared_ptr<Object>>> getTransactions(
        std::shared_ptr<TransactionIds> transactionIds
    );
    /// <summary>
    /// Get transactions status.
    /// </summary>
    /// <remarks>
    /// Returns an array of transaction statuses for a given array of transaction hashes.
    /// </remarks>
    /// <param name="transactionHashes">An array of transaction hashes.</param>
    pplx::task<std::vector<std::shared_ptr<TransactionStatusDTO>>> getTransactionsStatuses(
        std::shared_ptr<TransactionHashes> transactionHashes
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_TransactionRoutesApi_H_ */

