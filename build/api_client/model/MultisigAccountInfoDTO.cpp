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



#include "MultisigAccountInfoDTO.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

MultisigAccountInfoDTO::MultisigAccountInfoDTO()
{
}

MultisigAccountInfoDTO::~MultisigAccountInfoDTO()
{
}

void MultisigAccountInfoDTO::validate()
{
    // TODO: implement validation
}

web::json::value MultisigAccountInfoDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("multisig")] = ModelBase::toJson(m_Multisig);

    return val;
}

void MultisigAccountInfoDTO::fromJson(web::json::value& val)
{
    std::shared_ptr<Multisig> newMultisig(new Multisig());
    newMultisig->fromJson(val[utility::conversions::to_string_t("multisig")]);
    setMultisig( newMultisig );
}

void MultisigAccountInfoDTO::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    m_Multisig->toMultipart(multipart, utility::conversions::to_string_t("multisig."));
}

void MultisigAccountInfoDTO::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    std::shared_ptr<Multisig> newMultisig(new Multisig());
    newMultisig->fromMultiPart(multipart, utility::conversions::to_string_t("multisig."));
    setMultisig( newMultisig );
}

std::shared_ptr<Multisig> MultisigAccountInfoDTO::getMultisig() const
{
    return m_Multisig;
}


void MultisigAccountInfoDTO::setMultisig(std::shared_ptr<Multisig> value)
{
    m_Multisig = value;
    
}
}
}
}
}
