const nem2Sdk = require("nem2-sdk");
const Account = nem2Sdk.Account,
    Deadline = nem2Sdk.Deadline,
    NetworkType = nem2Sdk.NetworkType,
    TransferTransaction = nem2Sdk.TransferTransaction,
    TransactionHttp = nem2Sdk.TransactionHttp,
    PlainMessage = nem2Sdk.PlainMessage,
    XEM = nem2Sdk.XEM,
    Address = nem2Sdk.Address;

const recipientAddress = Address.createFromRawAddress('SDGMX4-R5CAE6-6J33IW-XYKK4X-FETB2S-46IQ3L-7IXS');

const transferTransaction = TransferTransaction.create(
    Deadline.create(),
    recipientAddress,
    [XEM.createRelative(809)],
    PlainMessage.create('Welcome To NEM'),
    NetworkType.MIJIN_TEST);


// console.log(transferTransaction);
// // 02 - Signing the transaction
const privateKey = '30A0B82F728DA9FE56D4846E1D50BE8432AEA7ABA5E71E13CBC55675704CBFB8';

const account = Account.createFromPrivateKey(privateKey,NetworkType.MIJIN_TEST);

// console.log(account.keyPair.publicKey);
const signedTransaction = account.sign(transferTransaction);

console.log(signedTransaction);
// 03 - Announcing the transaction
// const transactionHttp = new TransactionHttp('http://localhost:3000');
// console.log("here");
// console.log(TransactionHttp);
// transactionHttp
//     .announce(signedTransaction)
//     .subscribe(x => console.log(x), err => console.error(err));
// if(signedTransaction==)