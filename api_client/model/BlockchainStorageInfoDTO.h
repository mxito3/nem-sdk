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
 * BlockchainStorageInfoDTO.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_BlockchainStorageInfoDTO_H_
#define IO_SWAGGER_CLIENT_MODEL_BlockchainStorageInfoDTO_H_


#include "../ModelBase.h"


namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BlockchainStorageInfoDTO
    : public ModelBase
{
public:
    BlockchainStorageInfoDTO();
    virtual ~BlockchainStorageInfoDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BlockchainStorageInfoDTO members

    /// <summary>
    /// 
    /// </summary>
    int32_t getNumBlocks() const;
        void setNumBlocks(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumTransactions() const;
        void setNumTransactions(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumAccounts() const;
        void setNumAccounts(int32_t value);

protected:
    int32_t m_NumBlocks;
        int32_t m_NumTransactions;
        int32_t m_NumAccounts;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_BlockchainStorageInfoDTO_H_ */
