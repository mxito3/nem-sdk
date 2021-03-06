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



#include "NamespaceIds.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

NamespaceIds::NamespaceIds()
{
    m_NamespaceIdsIsSet = false;
}

NamespaceIds::~NamespaceIds()
{
}

void NamespaceIds::validate()
{
    // TODO: implement validation
}

web::json::value NamespaceIds::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_NamespaceIds )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("namespaceIds")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void NamespaceIds::fromJson(web::json::value& val)
{
    {
        m_NamespaceIds.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("namespaceIds")))
        {
        for( auto& item : val[utility::conversions::to_string_t("namespaceIds")].as_array() )
        {
            m_NamespaceIds.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void NamespaceIds::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_NamespaceIds )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("namespaceIds"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void NamespaceIds::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_NamespaceIds.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("namespaceIds")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("namespaceIds"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_NamespaceIds.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

std::vector<utility::string_t>& NamespaceIds::getNamespaceIds()
{
    return m_NamespaceIds;
}

void NamespaceIds::setNamespaceIds(std::vector<utility::string_t> value)
{
    m_NamespaceIds = value;
    m_NamespaceIdsIsSet = true;
}
bool NamespaceIds::namespaceIdsIsSet() const
{
    return m_NamespaceIdsIsSet;
}

void NamespaceIds::unsetNamespaceIds()
{
    m_NamespaceIdsIsSet = false;
}

}
}
}
}

