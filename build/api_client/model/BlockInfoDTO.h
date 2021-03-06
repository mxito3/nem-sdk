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
 * BlockInfoDTO.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_BlockInfoDTO_H_
#define IO_SWAGGER_CLIENT_MODEL_BlockInfoDTO_H_


#include "../ModelBase.h"

#include "BlockMetaDTO.h"
#include "BlockDTO.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BlockInfoDTO
    : public ModelBase
{
public:
    BlockInfoDTO();
    virtual ~BlockInfoDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BlockInfoDTO members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BlockMetaDTO> getMeta() const;
        void setMeta(std::shared_ptr<BlockMetaDTO> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BlockDTO> getBlock() const;
        void setBlock(std::shared_ptr<BlockDTO> value);

protected:
    std::shared_ptr<BlockMetaDTO> m_Meta;
        std::shared_ptr<BlockDTO> m_Block;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_BlockInfoDTO_H_ */
