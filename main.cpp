#include "Address.h"
#include "iostream"
#include "AccountRoutesApi.h"
#include "AccountHttp.h"
#include "AccountInfoDTO.h"
#include "string"
using namespace std;
int main(int argc, char const *argv[])
{
    string rawAddress="SCEA3-XY24J-VOEZF-QS4UX-SKCVZ-CYJYU-6C5JW-4SQV7";
    string url="http://120.79.181.170:3000/";
    Address *test = Address::createFromRawAddress(rawAddress);
    std::shared_ptr<AccountHttp> test1=std::make_shared<AccountHttp>(url);
    test1->getAccountInfo(test->getAddress());
    int c = getchar();
    return 0;
}

// pplx::task<std::shared_ptr<MultisigAccountInfoDTO>> getAccountMultisig(
//         utility::string_t accountId
//     );
//     /// <summary>
//     /// Get multisig account graph information
//     /// </summary>
//     /// <remarks>
//     /// Returns [multisig account](https://nemtech.github.io/concepts/multisig-account.html) graph.
//     /// </remarks>
//     /// <param name="accountId">The public key or address of the account.</param>
//     pplx::task<std::vector<std::shared_ptr<MultisigAccountGraphInfoDTO>>> getAccountMultisigGraph(
//         utility::string_t accountId
//     );
//     /// <summary>
//     /// Get accounts information
//     /// </summary>
//     /// <remarks>
//     /// Returns the account information for an array of accounts.
//     /// </remarks>
//     /// <param name="addresses">An array of addresses.</param>
//     pplx::task<std::vector<std::shared_ptr<AccountInfoDTO>>> getAccountsInfo(
//         std::shared_ptr<Addresses> addresses
//     );
//     /// <summary>
//     /// Get incoming transactions
//     /// </summary>
//     /// <remarks>
//     /// Gets an array of incoming transactions. A transaction is said to be incoming with respect to an account if the account is the recipient of the transaction.
//     /// </remarks>
//     /// <param name="publicKey">The public key of the account.</param>
//     /// <param name="pageSize">The number of transactions to return for each request. The default value is 10, the minimum is 10 and the maximum is 100. (optional)</param>
//     /// <param name="id">The identifier of the transaction after which we want the transactions to be returned. If not supplied the most recent transactions are returned. (optional)</param>
//     pplx::task<std::vector<std::shared_ptr<Object>>> incomingTransactions(
//         utility::string_t publicKey,
//         boost::optional<int32_t> pageSize,
//         boost::optional<utility::string_t> id
//     );
//     /// <summary>
//     /// Get outgoing transactions
//     /// </summary>
//     /// <remarks>
//     /// Gets an array of outgoing transactions. A transaction is said to be outgoing with respect to an account if the account is the sender of the transaction.
//     /// </remarks>
//     /// <param name="publicKey">The public key of the account.</param>
//     /// <param name="pageSize">The number of transactions to return for each request. The default value is 10, the minimum is 10 and the maximum is 100. (optional)</param>
//     /// <param name="id">The identifier of the transaction after which we want the transactions to be returned. If not supplied the most recent transactions are returned. (optional)</param>
//     pplx::task<std::vector<std::shared_ptr<Object>>> outgoingTransactions(
//         utility::string_t publicKey,
//         boost::optional<int32_t> pageSize,
//         boost::optional<utility::string_t> id
//     );
//     /// <summary>
//     /// Get aggregate bonded transactions information
//     /// </summary>
//     /// <remarks>
//     /// Gets an array of [aggregate bonded transactions](https://nemtech.github.io/concepts/aggregate-transaction.html#aggregate-bonded) where the account is the sender or requires to cosign the transaction.
//     /// </remarks>
//     /// <param name="publicKey">The public key of the account.</param>
//     /// <param name="pageSize">The number of transactions to return for each request. The default value is 10, the minimum is 10 and the maximum is 100. (optional)</param>
//     /// <param name="id">The identifier of the transaction after which we want the transactions to be returned. If not supplied the most recent transactions are returned. (optional)</param>
//     pplx::task<std::vector<std::shared_ptr<Object>>> partialTransactions(
//         utility::string_t publicKey,
//         boost::optional<int32_t> pageSize,
//         boost::optional<utility::string_t> id
//     );
//     /// <summary>
//     /// Get confirmed transactions
//     /// </summary>
//     /// <remarks>
//     /// Gets an array of transactions for which an account is the sender or receiver.
//     /// </remarks>
//     /// <param name="publicKey">The public key of the account.</param>
//     /// <param name="pageSize">The number of transactions to return for each request. The default value is 10, the minimum is 10 and the maximum is 100. (optional)</param>
//     /// <param name="id">The identifier of the transaction after which we want the transactions to be returned. If not supplied the most recent transactions are returned. (optional)</param>
//     pplx::task<std::vector<std::shared_ptr<Object>>> transactions(
//         utility::string_t publicKey,
//         boost::optional<int32_t> pageSize,
//         boost::optional<utility::string_t> id
//     );
//     /// <summary>
//     /// Get unconfirmed transactions
//     /// </summary>
//     /// <remarks>
//     /// Gets the array of transactions for which an account is the sender or receiver and which have not yet been included in a block.
//     /// </remarks>
//     /// <param name="publicKey">The public key of the account.</param>
//     /// <param name="pageSize">The number of transactions to return for each request. The default value is 10, the minimum is 10 and the maximum is 100. (optional)</param>
//     /// <param name="id">The identifier of the transaction after which we want the transactions to be returned. If not supplied the most recent transactions are returned. (optional)</param>
//     pplx::task<std::vector<std::shared_ptr<Object>>> unconfirmedTransactions(
//         utility::string_t publicKey,
//         boost::optional<int32_t> pageSize,
//         boost::optional<utility::string_t> id
//     );