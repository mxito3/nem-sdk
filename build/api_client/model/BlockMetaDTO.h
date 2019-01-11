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
 * BlockMetaDTO.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_BlockMetaDTO_H_
#define IO_SWAGGER_CLIENT_MODEL_BlockMetaDTO_H_


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
class  BlockMetaDTO
    : public ModelBase
{
public:
    BlockMetaDTO();
    virtual ~BlockMetaDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BlockMetaDTO members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHash() const;
        void setHash(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getGenerationHash() const;
        void setGenerationHash(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UInt64DTO> getTotalFee() const;
        void setTotalFee(std::shared_ptr<UInt64DTO> value);
    /// <summary>
    /// 
    /// </summary>
    double getNumTransactions() const;
        void setNumTransactions(double value);

protected:
    utility::string_t m_Hash;
        utility::string_t m_GenerationHash;
        std::shared_ptr<UInt64DTO> m_TotalFee;
        double m_NumTransactions;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_BlockMetaDTO_H_ */
