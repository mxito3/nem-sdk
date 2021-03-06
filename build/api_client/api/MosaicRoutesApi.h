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
 * MosaicRoutesApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_MosaicRoutesApi_H_
#define IO_SWAGGER_CLIENT_API_MosaicRoutesApi_H_


#include "../ApiClient.h"

#include "MosaicIds.h"
#include "MosaicInfoDTO.h"
#include "MosaicNameDTO.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  MosaicRoutesApi
{
public:
    MosaicRoutesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~MosaicRoutesApi();
    /// <summary>
    /// Get mosaic information
    /// </summary>
    /// <remarks>
    /// Gets the mosaic definition for a given mosaicId.
    /// </remarks>
    /// <param name="mosaicId">The mosaic identifier.</param>
    pplx::task<std::shared_ptr<MosaicInfoDTO>> getMosaic(
        utility::string_t mosaicId
    );
    /// <summary>
    /// Get mosaics information for an array of mosaics
    /// </summary>
    /// <remarks>
    /// Gets an array of mosaic definition.
    /// </remarks>
    /// <param name="mosaicIds">An array of mosaicIds.</param>
    pplx::task<std::vector<std::shared_ptr<MosaicInfoDTO>>> getMosaics(
        std::shared_ptr<MosaicIds> mosaicIds
    );
    /// <summary>
    /// Get mosaics information for a given namespace.
    /// </summary>
    /// <remarks>
    /// Gets an array of mosaic definition from mosaics created under the provided namespace.
    /// </remarks>
    /// <param name="namespaceId">The namespace identifier.</param>
    /// <param name="pageSize">The number of mosaics to return. (optional)</param>
    /// <param name="id">The mosaic id up to which mosaic definitions are returned. (optional)</param>
    pplx::task<std::vector<std::shared_ptr<MosaicInfoDTO>>> getMosaicsFromNamespace(
        utility::string_t namespaceId,
        boost::optional<int32_t> pageSize,
        boost::optional<utility::string_t> id
    );
    /// <summary>
    /// Get readable names for a set of mosaics
    /// </summary>
    /// <remarks>
    /// Returns friendly names for mosaics.
    /// </remarks>
    /// <param name="mosaicIds">An array of mosaicIds.</param>
    pplx::task<std::vector<std::shared_ptr<MosaicNameDTO>>> getMosaicsName(
        std::shared_ptr<MosaicIds> mosaicIds
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_MosaicRoutesApi_H_ */

