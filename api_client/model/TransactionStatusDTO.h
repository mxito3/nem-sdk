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
 * TransactionStatusDTO.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_TransactionStatusDTO_H_
#define IO_SWAGGER_CLIENT_MODEL_TransactionStatusDTO_H_


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
class  TransactionStatusDTO
    : public ModelBase
{
public:
    TransactionStatusDTO();
    virtual ~TransactionStatusDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TransactionStatusDTO members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getGroup() const;
    bool groupIsSet() const;
    void unsetGroup();
    void setGroup(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
        void setStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHash() const;
    bool hashIsSet() const;
    void unsetHash();
    void setHash(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UInt64DTO> getDeadline() const;
    bool deadlineIsSet() const;
    void unsetDeadline();
    void setDeadline(std::shared_ptr<UInt64DTO> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UInt64DTO> getHeight() const;
    bool heightIsSet() const;
    void unsetHeight();
    void setHeight(std::shared_ptr<UInt64DTO> value);

protected:
    utility::string_t m_Group;
    bool m_GroupIsSet;
    utility::string_t m_Status;
        utility::string_t m_Hash;
    bool m_HashIsSet;
    std::shared_ptr<UInt64DTO> m_Deadline;
    bool m_DeadlineIsSet;
    std::shared_ptr<UInt64DTO> m_Height;
    bool m_HeightIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_TransactionStatusDTO_H_ */