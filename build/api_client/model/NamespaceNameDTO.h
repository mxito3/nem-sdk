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
 * NamespaceNameDTO.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_NamespaceNameDTO_H_
#define IO_SWAGGER_CLIENT_MODEL_NamespaceNameDTO_H_


#include "../ModelBase.h"

#include "UInt64DTO.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  NamespaceNameDTO
    : public ModelBase
{
public:
    NamespaceNameDTO();
    virtual ~NamespaceNameDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NamespaceNameDTO members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UInt64DTO> getParentId() const;
    bool parentIdIsSet() const;
    void unsetParentId();
    void setParentId(std::shared_ptr<UInt64DTO> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UInt64DTO> getNamespaceId() const;
        void setNamespaceId(std::shared_ptr<UInt64DTO> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);

protected:
    std::shared_ptr<UInt64DTO> m_ParentId;
    bool m_ParentIdIsSet;
    std::shared_ptr<UInt64DTO> m_NamespaceId;
        utility::string_t m_Name;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_NamespaceNameDTO_H_ */