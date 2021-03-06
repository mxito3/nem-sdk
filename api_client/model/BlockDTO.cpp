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



#include "BlockDTO.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

BlockDTO::BlockDTO()
{
    m_Signature = utility::conversions::to_string_t("");
    m_Signer = utility::conversions::to_string_t("");
    m_Version = 0.0;
    m_Type = 0.0;
    m_PreviousBlockHash = utility::conversions::to_string_t("");
    m_BlockTransactionsHash = utility::conversions::to_string_t("");
}

BlockDTO::~BlockDTO()
{
}

void BlockDTO::validate()
{
    // TODO: implement validation
}

web::json::value BlockDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(m_Signature);
    val[utility::conversions::to_string_t("signer")] = ModelBase::toJson(m_Signer);
    val[utility::conversions::to_string_t("version")] = ModelBase::toJson(m_Version);
    val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    val[utility::conversions::to_string_t("height")] = ModelBase::toJson(m_Height);
    val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    val[utility::conversions::to_string_t("difficulty")] = ModelBase::toJson(m_Difficulty);
    val[utility::conversions::to_string_t("previousBlockHash")] = ModelBase::toJson(m_PreviousBlockHash);
    val[utility::conversions::to_string_t("blockTransactionsHash")] = ModelBase::toJson(m_BlockTransactionsHash);

    return val;
}

void BlockDTO::fromJson(web::json::value& val)
{
    setSignature(ModelBase::stringFromJson(val[utility::conversions::to_string_t("signature")]));
    setSigner(ModelBase::stringFromJson(val[utility::conversions::to_string_t("signer")]));
    setVersion(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("version")]));
    setType(ModelBase::doubleFromJson(val[utility::conversions::to_string_t("type")]));
    std::shared_ptr<UInt64DTO> newHeight(new UInt64DTO());
    newHeight->fromJson(val[utility::conversions::to_string_t("height")]);
    setHeight( newHeight );
    std::shared_ptr<UInt64DTO> newTimestamp(new UInt64DTO());
    newTimestamp->fromJson(val[utility::conversions::to_string_t("timestamp")]);
    setTimestamp( newTimestamp );
    std::shared_ptr<UInt64DTO> newDifficulty(new UInt64DTO());
    newDifficulty->fromJson(val[utility::conversions::to_string_t("difficulty")]);
    setDifficulty( newDifficulty );
    setPreviousBlockHash(ModelBase::stringFromJson(val[utility::conversions::to_string_t("previousBlockHash")]));
    setBlockTransactionsHash(ModelBase::stringFromJson(val[utility::conversions::to_string_t("blockTransactionsHash")]));
}

void BlockDTO::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("signature"), m_Signature));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("signer"), m_Signer));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("version"), m_Version));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    m_Height->toMultipart(multipart, utility::conversions::to_string_t("height."));
    m_Timestamp->toMultipart(multipart, utility::conversions::to_string_t("timestamp."));
    m_Difficulty->toMultipart(multipart, utility::conversions::to_string_t("difficulty."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("previousBlockHash"), m_PreviousBlockHash));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("blockTransactionsHash"), m_BlockTransactionsHash));
}

void BlockDTO::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setSignature(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("signature"))));
    setSigner(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("signer"))));
    setVersion(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("version"))));
    setType(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    std::shared_ptr<UInt64DTO> newHeight(new UInt64DTO());
    newHeight->fromMultiPart(multipart, utility::conversions::to_string_t("height."));
    setHeight( newHeight );
    std::shared_ptr<UInt64DTO> newTimestamp(new UInt64DTO());
    newTimestamp->fromMultiPart(multipart, utility::conversions::to_string_t("timestamp."));
    setTimestamp( newTimestamp );
    std::shared_ptr<UInt64DTO> newDifficulty(new UInt64DTO());
    newDifficulty->fromMultiPart(multipart, utility::conversions::to_string_t("difficulty."));
    setDifficulty( newDifficulty );
    setPreviousBlockHash(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("previousBlockHash"))));
    setBlockTransactionsHash(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("blockTransactionsHash"))));
}

utility::string_t BlockDTO::getSignature() const
{
    return m_Signature;
}


void BlockDTO::setSignature(utility::string_t value)
{
    m_Signature = value;
    
}
utility::string_t BlockDTO::getSigner() const
{
    return m_Signer;
}


void BlockDTO::setSigner(utility::string_t value)
{
    m_Signer = value;
    
}
double BlockDTO::getVersion() const
{
    return m_Version;
}


void BlockDTO::setVersion(double value)
{
    m_Version = value;
    
}
double BlockDTO::getType() const
{
    return m_Type;
}


void BlockDTO::setType(double value)
{
    m_Type = value;
    
}
std::shared_ptr<UInt64DTO> BlockDTO::getHeight() const
{
    return m_Height;
}


void BlockDTO::setHeight(std::shared_ptr<UInt64DTO> value)
{
    m_Height = value;
    
}
std::shared_ptr<UInt64DTO> BlockDTO::getTimestamp() const
{
    return m_Timestamp;
}


void BlockDTO::setTimestamp(std::shared_ptr<UInt64DTO> value)
{
    m_Timestamp = value;
    
}
std::shared_ptr<UInt64DTO> BlockDTO::getDifficulty() const
{
    return m_Difficulty;
}


void BlockDTO::setDifficulty(std::shared_ptr<UInt64DTO> value)
{
    m_Difficulty = value;
    
}
utility::string_t BlockDTO::getPreviousBlockHash() const
{
    return m_PreviousBlockHash;
}


void BlockDTO::setPreviousBlockHash(utility::string_t value)
{
    m_PreviousBlockHash = value;
    
}
utility::string_t BlockDTO::getBlockTransactionsHash() const
{
    return m_BlockTransactionsHash;
}


void BlockDTO::setBlockTransactionsHash(utility::string_t value)
{
    m_BlockTransactionsHash = value;
    
}
}
}
}
}

