const nem2Sdk = require("nem2-sdk");
const Account = nem2Sdk.Account,
    Deadline = nem2Sdk.Deadline,
    NetworkType = nem2Sdk.NetworkType,
    TransferTransaction = nem2Sdk.TransferTransaction,
    TransactionHttp = nem2Sdk.TransactionHttp,
    PlainMessage = nem2Sdk.PlainMessage,
    XEM = nem2Sdk.XEM,
    Address = nem2Sdk. Address;

// 01 - Create Transfer Transaction
const recipientAddress = Address.createFromRawAddress('SBCTJB-2WPHG5-UJCYFC-C4BGUV-ETJVPW-I34HAI-NVDP');

const transferTransaction = TransferTransaction.create(
    Deadline.create(),
    recipientAddress,
    [XEM.createRelative(10)],
    PlainMessage.create('Welcome To NEM'),
    NetworkType.MIJIN_TEST);

// console.log(transferTransaction);
// // 02 - Signing the transaction
const privateKey = '59D9C119FE1EBF3FA672ECC191C670D54C18A521F04D85FB5F9827424F1C4081';

const account = Account.createFromPrivateKey(privateKey,NetworkType.MIJIN_TEST);

const signedTransaction = account.sign(transferTransaction);

console.log(signedTransaction);
// // 03 - Announcing the transaction
const transactionHttp = new TransactionHttp('http://120.79.181.170:3000');
// console.log("here");
// console.log(TransactionHttp);
transactionHttp
    .announce(signedTransaction)
    .subscribe(x => console.log(x), err => console.error(err));