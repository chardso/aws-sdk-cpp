﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{
  class UpdateConnectivityInfoResult
  {
  public:
    AWS_GREENGRASS_API UpdateConnectivityInfoResult();
    AWS_GREENGRASS_API UpdateConnectivityInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API UpdateConnectivityInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A message about the connectivity info update request.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * A message about the connectivity info update request.
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * A message about the connectivity info update request.
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * A message about the connectivity info update request.
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * A message about the connectivity info update request.
     */
    inline UpdateConnectivityInfoResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * A message about the connectivity info update request.
     */
    inline UpdateConnectivityInfoResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * A message about the connectivity info update request.
     */
    inline UpdateConnectivityInfoResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * The new version of the connectivity info.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * The new version of the connectivity info.
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * The new version of the connectivity info.
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * The new version of the connectivity info.
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * The new version of the connectivity info.
     */
    inline UpdateConnectivityInfoResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * The new version of the connectivity info.
     */
    inline UpdateConnectivityInfoResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * The new version of the connectivity info.
     */
    inline UpdateConnectivityInfoResult& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_message;

    Aws::String m_version;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
