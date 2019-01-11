#include "AccountHttp.h"

using namespace io::swagger::client::api;
AccountHttp::AccountHttp(std::string url):Http(url)
{
    
}
void AccountHttp::getAccountInfo(std::string accountId)
 {
     std::cout<<"in account http"<<std::endl;
    //  std::cout<<this->apiclient;
     std::shared_ptr<AccountRoutesApi> accountRouteApi = std::make_shared<AccountRoutesApi>(this->apiclient);
     accountRouteApi->getAccountInfo(accountId);                
 }