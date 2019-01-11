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



#include "MosaicDefinitionDTO.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

MosaicDefinitionDTO::MosaicDefinitionDTO()
{
    m_Owner = utility::conversions::to_string_t("");
}

MosaicDefinitionDTO::~MosaicDefinitionDTO()
{
}

void MosaicDefinitionDTO::validate()
{
    // TODO: implement validation
}

web::json::value MosaicDefinitionDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("namespaceId")] = ModelBase::toJson(m_NamespaceId);
    val[utility::conversions::to_string_t("mosaicId")] = ModelBase::toJson(m_MosaicId);
    val[utility::conversions::to_string_t("supply")] = ModelBase::toJson(m_Supply);
    val[utility::conversions::to_string_t("height")] = ModelBase::toJson(m_Height);
    val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(m_Owner);
    val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(m_Properties);
    val[utility::conversions::to_string_t("levy")] = ModelBase::toJson(m_Levy);

    return val;
}

void MosaicDefinitionDTO::fromJson(web::json::value& val)
{
    std::shared_ptr<UInt64DTO> newNamespaceId(new UInt64DTO());
    newNamespaceId->fromJson(val[utility::conversions::to_string_t("namespaceId")]);
    setNamespaceId( newNamespaceId );
    std::shared_ptr<UInt64DTO> newMosaicId(new UInt64DTO());
    newMosaicId->fromJson(val[utility::conversions::to_string_t("mosaicId")]);
    setMosaicId( newMosaicId );
    std::shared_ptr<UInt64DTO> newSupply(new UInt64DTO());
    newSupply->fromJson(val[utility::conversions::to_string_t("supply")]);
    setSupply( newSupply );
    std::shared_ptr<UInt64DTO> newHeight(new UInt64DTO());
    newHeight->fromJson(val[utility::conversions::to_string_t("height")]);
    setHeight( newHeight );
    setOwner(ModelBase::stringFromJson(val[utility::conversions::to_string_t("owner")]));
    std::shared_ptr<MosaicPropertiesDTO> newProperties(new MosaicPropertiesDTO());
    newProperties->fromJson(val[utility::conversions::to_string_t("properties")]);
    setProperties( newProperties );
    std::shared_ptr<Object> newLevy(nullptr);
    newLevy->fromJson(val[utility::conversions::to_string_t("levy")]);
    setLevy( newLevy );
}

void MosaicDefinitionDTO::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    m_NamespaceId->toMultipart(multipart, utility::conversions::to_string_t("namespaceId."));
    m_MosaicId->toMultipart(multipart, utility::conversions::to_string_t("mosaicId."));
    m_Supply->toMultipart(multipart, utility::conversions::to_string_t("supply."));
    m_Height->toMultipart(multipart, utility::conversions::to_string_t("height."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("owner"), m_Owner));
    m_Properties->toMultipart(multipart, utility::conversions::to_string_t("properties."));
    m_Levy->toMultipart(multipart, utility::conversions::to_string_t("levy."));
}

void MosaicDefinitionDTO::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    std::shared_ptr<UInt64DTO> newNamespaceId(new UInt64DTO());
    newNamespaceId->fromMultiPart(multipart, utility::conversions::to_string_t("namespaceId."));
    setNamespaceId( newNamespaceId );
    std::shared_ptr<UInt64DTO> newMosaicId(new UInt64DTO());
    newMosaicId->fromMultiPart(multipart, utility::conversions::to_string_t("mosaicId."));
    setMosaicId( newMosaicId );
    std::shared_ptr<UInt64DTO> newSupply(new UInt64DTO());
    newSupply->fromMultiPart(multipart, utility::conversions::to_string_t("supply."));
    setSupply( newSupply );
    std::shared_ptr<UInt64DTO> newHeight(new UInt64DTO());
    newHeight->fromMultiPart(multipart, utility::conversions::to_string_t("height."));
    setHeight( newHeight );
    setOwner(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("owner"))));
    std::shared_ptr<MosaicPropertiesDTO> newProperties(new MosaicPropertiesDTO());
    newProperties->fromMultiPart(multipart, utility::conversions::to_string_t("properties."));
    setProperties( newProperties );
    std::shared_ptr<Object> newLevy(nullptr);
    newLevy->fromMultiPart(multipart, utility::conversions::to_string_t("levy."));
    setLevy( newLevy );
}

std::shared_ptr<UInt64DTO> MosaicDefinitionDTO::getNamespaceId() const
{
    return m_NamespaceId;
}


void MosaicDefinitionDTO::setNamespaceId(std::shared_ptr<UInt64DTO> value)
{
    m_NamespaceId = value;
    
}
std::shared_ptr<UInt64DTO> MosaicDefinitionDTO::getMosaicId() const
{
    return m_MosaicId;
}


void MosaicDefinitionDTO::setMosaicId(std::shared_ptr<UInt64DTO> value)
{
    m_MosaicId = value;
    
}
std::shared_ptr<UInt64DTO> MosaicDefinitionDTO::getSupply() const
{
    return m_Supply;
}


void MosaicDefinitionDTO::setSupply(std::shared_ptr<UInt64DTO> value)
{
    m_Supply = value;
    
}
std::shared_ptr<UInt64DTO> MosaicDefinitionDTO::getHeight() const
{
    return m_Height;
}


void MosaicDefinitionDTO::setHeight(std::shared_ptr<UInt64DTO> value)
{
    m_Height = value;
    
}
utility::string_t MosaicDefinitionDTO::getOwner() const
{
    return m_Owner;
}


void MosaicDefinitionDTO::setOwner(utility::string_t value)
{
    m_Owner = value;
    
}
std::shared_ptr<MosaicPropertiesDTO> MosaicDefinitionDTO::getProperties() const
{
    return m_Properties;
}


void MosaicDefinitionDTO::setProperties(std::shared_ptr<MosaicPropertiesDTO> value)
{
    m_Properties = value;
    
}
std::shared_ptr<Object> MosaicDefinitionDTO::getLevy() const
{
    return m_Levy;
}


void MosaicDefinitionDTO::setLevy(std::shared_ptr<Object> value)
{
    m_Levy = value;
    
}
}
}
}
}

