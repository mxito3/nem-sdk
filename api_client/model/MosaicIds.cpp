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



#include "MosaicIds.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

MosaicIds::MosaicIds()
{
    m_MosaicIdsIsSet = false;
}

MosaicIds::~MosaicIds()
{
}

void MosaicIds::validate()
{
    // TODO: implement validation
}

web::json::value MosaicIds::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_MosaicIds )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("mosaicIds")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void MosaicIds::fromJson(web::json::value& val)
{
    {
        m_MosaicIds.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("mosaicIds")))
        {
        for( auto& item : val[utility::conversions::to_string_t("mosaicIds")].as_array() )
        {
            m_MosaicIds.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void MosaicIds::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_MosaicIds )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mosaicIds"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void MosaicIds::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_MosaicIds.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("mosaicIds")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("mosaicIds"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_MosaicIds.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

std::vector<utility::string_t>& MosaicIds::getMosaicIds()
{
    return m_MosaicIds;
}

void MosaicIds::setMosaicIds(std::vector<utility::string_t> value)
{
    m_MosaicIds = value;
    m_MosaicIdsIsSet = true;
}
bool MosaicIds::mosaicIdsIsSet() const
{
    return m_MosaicIdsIsSet;
}

void MosaicIds::unsetMosaicIds()
{
    m_MosaicIdsIsSet = false;
}

}
}
}
}

