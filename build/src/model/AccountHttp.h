#include "Http.h"
#include "AccountRoutesApi.h"
#include "AccountInfoDTO.h"
#include <string>
class AccountHttp:public Http
{
    public:
        AccountHttp(std::string url);
        void  getAccountInfo(std::string accountId);
        // void  getAccountMultisig(std::string accountId);
};