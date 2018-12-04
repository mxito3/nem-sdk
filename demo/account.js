const nem2Sdk = require("nem2-sdk");
const AccountHttp = nem2Sdk.AccountHttp,
      Address = nem2Sdk.Address,
      url= 'http://120.79.181.170:3000',
      account='SAH3TSBJPWTEDC4LF3YGDNFYERG55X6RXI2WAKUC'
const accountHttp = new AccountHttp(url);
const address = Address.createFromRawAddress(account);

accountHttp
    .getAccountInfo(address)
    .subscribe(accountInfo => console.log(accountInfo), err => console.error(err));


    