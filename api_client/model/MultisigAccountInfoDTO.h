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
 * MultisigAccountInfoDTO.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_MultisigAccountInfoDTO_H_
#define IO_SWAGGER_CLIENT_MODEL_MultisigAccountInfoDTO_H_


#include "../ModelBase.h"

#include "Multisig.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MultisigAccountInfoDTO
    : public ModelBase
{
public:
    MultisigAccountInfoDTO();
    virtual ~MultisigAccountInfoDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MultisigAccountInfoDTO members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Multisig> getMultisig() const;
        void setMultisig(std::shared_ptr<Multisig> value);

protected:
    std::shared_ptr<Multisig> m_Multisig;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_MultisigAccountInfoDTO_H_ */