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



#include "AccountDTO.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

AccountDTO::AccountDTO()
{
    m_Address = utility::conversions::to_string_t("");
    m_PublicKey = utility::conversions::to_string_t("");
}

AccountDTO::~AccountDTO()
{
}

void AccountDTO::validate()
{
    // TODO: implement validation
}

web::json::value AccountDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("address")] = ModelBase::toJson(m_Address);
    val[utility::conversions::to_string_t("addressHeight")] = ModelBase::toJson(m_AddressHeight);
    val[utility::conversions::to_string_t("publicKey")] = ModelBase::toJson(m_PublicKey);
    val[utility::conversions::to_string_t("publicKeyHeight")] = ModelBase::toJson(m_PublicKeyHeight);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Mosaics )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("mosaics")] = web::json::value::array(jsonArray);
    }
    val[utility::conversions::to_string_t("importance")] = ModelBase::toJson(m_Importance);
    val[utility::conversions::to_string_t("importanceHeight")] = ModelBase::toJson(m_ImportanceHeight);

    return val;
}

void AccountDTO::fromJson(web::json::value& val)
{
    setAddress(ModelBase::stringFromJson(val[utility::conversions::to_string_t("address")]));
    std::shared_ptr<UInt64DTO> newAddressHeight(new UInt64DTO());
    newAddressHeight->fromJson(val[utility::conversions::to_string_t("addressHeight")]);
    setAddressHeight( newAddressHeight );
    setPublicKey(ModelBase::stringFromJson(val[utility::conversions::to_string_t("publicKey")]));
    std::shared_ptr<UInt64DTO> newPublicKeyHeight(new UInt64DTO());
    newPublicKeyHeight->fromJson(val[utility::conversions::to_string_t("publicKeyHeight")]);
    setPublicKeyHeight( newPublicKeyHeight );
    {
        m_Mosaics.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val[utility::conversions::to_string_t("mosaics")].as_array() )
        {
            if(item.is_null())
            {
                m_Mosaics.push_back( std::shared_ptr<MosaicDTO>(nullptr) );
            }
            else
            {
                std::shared_ptr<MosaicDTO> newItem(new MosaicDTO());
                newItem->fromJson(item);
                m_Mosaics.push_back( newItem );
            }
        }
    }
    std::shared_ptr<UInt64DTO> newImportance(new UInt64DTO());
    newImportance->fromJson(val[utility::conversions::to_string_t("importance")]);
    setImportance( newImportance );
    std::shared_ptr<UInt64DTO> newImportanceHeight(new UInt64DTO());
    newImportanceHeight->fromJson(val[utility::conversions::to_string_t("importanceHeight")]);
    setImportanceHeight( newImportanceHeight );
}

void AccountDTO::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("address"), m_Address));
    m_AddressHeight->toMultipart(multipart, utility::conversions::to_string_t("addressHeight."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("publicKey"), m_PublicKey));
    m_PublicKeyHeight->toMultipart(multipart, utility::conversions::to_string_t("publicKeyHeight."));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Mosaics )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mosaics"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    m_Importance->toMultipart(multipart, utility::conversions::to_string_t("importance."));
    m_ImportanceHeight->toMultipart(multipart, utility::conversions::to_string_t("importanceHeight."));
}

void AccountDTO::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setAddress(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("address"))));
    std::shared_ptr<UInt64DTO> newAddressHeight(new UInt64DTO());
    newAddressHeight->fromMultiPart(multipart, utility::conversions::to_string_t("addressHeight."));
    setAddressHeight( newAddressHeight );
    setPublicKey(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("publicKey"))));
    std::shared_ptr<UInt64DTO> newPublicKeyHeight(new UInt64DTO());
    newPublicKeyHeight->fromMultiPart(multipart, utility::conversions::to_string_t("publicKeyHeight."));
    setPublicKeyHeight( newPublicKeyHeight );
    {
        m_Mosaics.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("mosaics"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Mosaics.push_back( std::shared_ptr<MosaicDTO>(nullptr) );
            }
            else
            {
                std::shared_ptr<MosaicDTO> newItem(new MosaicDTO());
                newItem->fromJson(item);
                m_Mosaics.push_back( newItem );
            }
        }
    }
    std::shared_ptr<UInt64DTO> newImportance(new UInt64DTO());
    newImportance->fromMultiPart(multipart, utility::conversions::to_string_t("importance."));
    setImportance( newImportance );
    std::shared_ptr<UInt64DTO> newImportanceHeight(new UInt64DTO());
    newImportanceHeight->fromMultiPart(multipart, utility::conversions::to_string_t("importanceHeight."));
    setImportanceHeight( newImportanceHeight );
}

utility::string_t AccountDTO::getAddress() const
{
    return m_Address;
}


void AccountDTO::setAddress(utility::string_t value)
{
    m_Address = value;
    
}
std::shared_ptr<UInt64DTO> AccountDTO::getAddressHeight() const
{
    return m_AddressHeight;
}


void AccountDTO::setAddressHeight(std::shared_ptr<UInt64DTO> value)
{
    m_AddressHeight = value;
    
}
utility::string_t AccountDTO::getPublicKey() const
{
    return m_PublicKey;
}


void AccountDTO::setPublicKey(utility::string_t value)
{
    m_PublicKey = value;
    
}
std::shared_ptr<UInt64DTO> AccountDTO::getPublicKeyHeight() const
{
    return m_PublicKeyHeight;
}


void AccountDTO::setPublicKeyHeight(std::shared_ptr<UInt64DTO> value)
{
    m_PublicKeyHeight = value;
    
}
std::vector<std::shared_ptr<MosaicDTO>>& AccountDTO::getMosaics()
{
    return m_Mosaics;
}

void AccountDTO::setMosaics(std::vector<std::shared_ptr<MosaicDTO>> value)
{
    m_Mosaics = value;
    
}
std::shared_ptr<UInt64DTO> AccountDTO::getImportance() const
{
    return m_Importance;
}


void AccountDTO::setImportance(std::shared_ptr<UInt64DTO> value)
{
    m_Importance = value;
    
}
std::shared_ptr<UInt64DTO> AccountDTO::getImportanceHeight() const
{
    return m_ImportanceHeight;
}


void AccountDTO::setImportanceHeight(std::shared_ptr<UInt64DTO> value)
{
    m_ImportanceHeight = value;
    
}
}
}
}
}
