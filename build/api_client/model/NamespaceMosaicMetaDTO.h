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
 * NamespaceMosaicMetaDTO.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_NamespaceMosaicMetaDTO_H_
#define IO_SWAGGER_CLIENT_MODEL_NamespaceMosaicMetaDTO_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  NamespaceMosaicMetaDTO
    : public ModelBase
{
public:
    NamespaceMosaicMetaDTO();
    virtual ~NamespaceMosaicMetaDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NamespaceMosaicMetaDTO members

    /// <summary>
    /// 
    /// </summary>
    bool isActive() const;
        void setActive(bool value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getIndex() const;
        void setIndex(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
        void setId(utility::string_t value);

protected:
    bool m_Active;
        int32_t m_Index;
        utility::string_t m_Id;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_NamespaceMosaicMetaDTO_H_ */
