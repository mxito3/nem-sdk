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



#include "HeightDTO.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

HeightDTO::HeightDTO()
{
}

HeightDTO::~HeightDTO()
{
}

void HeightDTO::validate()
{
    // TODO: implement validation
}

web::json::value HeightDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("height")] = ModelBase::toJson(m_Height);

    return val;
}

void HeightDTO::fromJson(web::json::value& val)
{
    std::shared_ptr<UInt64DTO> newHeight(new UInt64DTO());
    newHeight->fromJson(val[utility::conversions::to_string_t("height")]);
    setHeight( newHeight );
}

void HeightDTO::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    m_Height->toMultipart(multipart, utility::conversions::to_string_t("height."));
}

void HeightDTO::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    std::shared_ptr<UInt64DTO> newHeight(new UInt64DTO());
    newHeight->fromMultiPart(multipart, utility::conversions::to_string_t("height."));
    setHeight( newHeight );
}

std::shared_ptr<UInt64DTO> HeightDTO::getHeight() const
{
    return m_Height;
}


void HeightDTO::setHeight(std::shared_ptr<UInt64DTO> value)
{
    m_Height = value;
    
}
}
}
}
}

