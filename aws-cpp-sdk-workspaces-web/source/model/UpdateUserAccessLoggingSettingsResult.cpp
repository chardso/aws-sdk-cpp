﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/UpdateUserAccessLoggingSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateUserAccessLoggingSettingsResult::UpdateUserAccessLoggingSettingsResult()
{
}

UpdateUserAccessLoggingSettingsResult::UpdateUserAccessLoggingSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateUserAccessLoggingSettingsResult& UpdateUserAccessLoggingSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("userAccessLoggingSettings"))
  {
    m_userAccessLoggingSettings = jsonValue.GetObject("userAccessLoggingSettings");

  }



  return *this;
}
