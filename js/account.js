const nem2Sdk = require("nem2-sdk");
const AccountHttp = nem2Sdk.AccountHttp,
      Address = nem2Sdk.Address,
      url= 'http://localhost:3000',
      account="SDGMX4-R5CAE6-6J33IW-XYKK4X-FETB2S-46IQ3L-7IXS";
const accountHttp = new AccountHttp(url);
const address = Address.createFromRawAddress(account);

accountHttp
    .getAccountInfo(address)
    .subscribe(accountInfo => console.log(accountInfo), err => console.error(err));


    