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
 * MosaicInfoDTO.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_MosaicInfoDTO_H_
#define IO_SWAGGER_CLIENT_MODEL_MosaicInfoDTO_H_


#include "../ModelBase.h"

#include "MosaicDefinitionDTO.h"
#include "NamespaceMosaicMetaDTO.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MosaicInfoDTO
    : public ModelBase
{
public:
    MosaicInfoDTO();
    virtual ~MosaicInfoDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MosaicInfoDTO members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<NamespaceMosaicMetaDTO> getMeta() const;
        void setMeta(std::shared_ptr<NamespaceMosaicMetaDTO> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<MosaicDefinitionDTO> getMosaic() const;
        void setMosaic(std::shared_ptr<MosaicDefinitionDTO> value);

protected:
    std::shared_ptr<NamespaceMosaicMetaDTO> m_Meta;
        std::shared_ptr<MosaicDefinitionDTO> m_Mosaic;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_MosaicInfoDTO_H_ */
