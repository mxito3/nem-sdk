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



#include "BlockchainStorageInfoDTO.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

BlockchainStorageInfoDTO::BlockchainStorageInfoDTO()
{
    m_NumBlocks = 0;
    m_NumTransactions = 0;
    m_NumAccounts = 0;
}

BlockchainStorageInfoDTO::~BlockchainStorageInfoDTO()
{
}

void BlockchainStorageInfoDTO::validate()
{
    // TODO: implement validation
}

web::json::value BlockchainStorageInfoDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("numBlocks")] = ModelBase::toJson(m_NumBlocks);
    val[utility::conversions::to_string_t("numTransactions")] = ModelBase::toJson(m_NumTransactions);
    val[utility::conversions::to_string_t("numAccounts")] = ModelBase::toJson(m_NumAccounts);

    return val;
}

void BlockchainStorageInfoDTO::fromJson(web::json::value& val)
{
    setNumBlocks(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("numBlocks")]));
    setNumTransactions(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("numTransactions")]));
    setNumAccounts(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("numAccounts")]));
}

void BlockchainStorageInfoDTO::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("numBlocks"), m_NumBlocks));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("numTransactions"), m_NumTransactions));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("numAccounts"), m_NumAccounts));
}

void BlockchainStorageInfoDTO::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setNumBlocks(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("numBlocks"))));
    setNumTransactions(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("numTransactions"))));
    setNumAccounts(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("numAccounts"))));
}

int32_t BlockchainStorageInfoDTO::getNumBlocks() const
{
    return m_NumBlocks;
}


void BlockchainStorageInfoDTO::setNumBlocks(int32_t value)
{
    m_NumBlocks = value;
    
}
int32_t BlockchainStorageInfoDTO::getNumTransactions() const
{
    return m_NumTransactions;
}


void BlockchainStorageInfoDTO::setNumTransactions(int32_t value)
{
    m_NumTransactions = value;
    
}
int32_t BlockchainStorageInfoDTO::getNumAccounts() const
{
    return m_NumAccounts;
}


void BlockchainStorageInfoDTO::setNumAccounts(int32_t value)
{
    m_NumAccounts = value;
    
}
}
}
}
}
