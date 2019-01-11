#include "Http.h"
using namespace io::swagger::client::api;
Http::Http(std::string url)
{
    std::shared_ptr<ApiConfiguration> apiconfig = std::make_shared<ApiConfiguration>();
    apiconfig->setBaseUrl(url);
    std::cout<<apiconfig->getBaseUrl()<<std::endl;
    this->apiclient = std::make_shared<ApiClient>(apiconfig);
}