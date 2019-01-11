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
 * AccountDTO.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_AccountDTO_H_
#define IO_SWAGGER_CLIENT_MODEL_AccountDTO_H_


#include "../ModelBase.h"

#include "MosaicDTO.h"
#include "UInt64DTO.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  AccountDTO
    : public ModelBase
{
public:
    AccountDTO();
    virtual ~AccountDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// AccountDTO members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAddress() const;
        void setAddress(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UInt64DTO> getAddressHeight() const;
        void setAddressHeight(std::shared_ptr<UInt64DTO> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPublicKey() const;
        void setPublicKey(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UInt64DTO> getPublicKeyHeight() const;
        void setPublicKeyHeight(std::shared_ptr<UInt64DTO> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<MosaicDTO>>& getMosaics();
        void setMosaics(std::vector<std::shared_ptr<MosaicDTO>> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UInt64DTO> getImportance() const;
        void setImportance(std::shared_ptr<UInt64DTO> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UInt64DTO> getImportanceHeight() const;
        void setImportanceHeight(std::shared_ptr<UInt64DTO> value);

protected:
    utility::string_t m_Address;
        std::shared_ptr<UInt64DTO> m_AddressHeight;
        utility::string_t m_PublicKey;
        std::shared_ptr<UInt64DTO> m_PublicKeyHeight;
        std::vector<std::shared_ptr<MosaicDTO>> m_Mosaics;
        std::shared_ptr<UInt64DTO> m_Importance;
        std::shared_ptr<UInt64DTO> m_ImportanceHeight;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_AccountDTO_H_ */