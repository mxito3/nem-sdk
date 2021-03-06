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
 * BlockchainScoreDTO.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_BlockchainScoreDTO_H_
#define IO_SWAGGER_CLIENT_MODEL_BlockchainScoreDTO_H_


#include "../ModelBase.h"

#include "UInt64DTO.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BlockchainScoreDTO
    : public ModelBase
{
public:
    BlockchainScoreDTO();
    virtual ~BlockchainScoreDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BlockchainScoreDTO members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UInt64DTO> getScoreHigh() const;
        void setScoreHigh(std::shared_ptr<UInt64DTO> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UInt64DTO> getScoreLow() const;
        void setScoreLow(std::shared_ptr<UInt64DTO> value);

protected:
    std::shared_ptr<UInt64DTO> m_ScoreHigh;
        std::shared_ptr<UInt64DTO> m_ScoreLow;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_BlockchainScoreDTO_H_ */
