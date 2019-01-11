#pragma once
#include "ApiClient.h"
#include "string"
#include "ApiConfiguration.h"
#include "memory"
class Http
{
    protected:
        std::shared_ptr<io::swagger::client::api::ApiClient> apiclient;
    public:
        Http(std::string url);

};