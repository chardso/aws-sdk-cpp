﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kendra/model/DataSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

DataSourceConfiguration::DataSourceConfiguration() : 
    m_s3ConfigurationHasBeenSet(false),
    m_sharePointConfigurationHasBeenSet(false),
    m_databaseConfigurationHasBeenSet(false),
    m_salesforceConfigurationHasBeenSet(false),
    m_oneDriveConfigurationHasBeenSet(false),
    m_serviceNowConfigurationHasBeenSet(false)
{
}

DataSourceConfiguration::DataSourceConfiguration(JsonView jsonValue) : 
    m_s3ConfigurationHasBeenSet(false),
    m_sharePointConfigurationHasBeenSet(false),
    m_databaseConfigurationHasBeenSet(false),
    m_salesforceConfigurationHasBeenSet(false),
    m_oneDriveConfigurationHasBeenSet(false),
    m_serviceNowConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceConfiguration& DataSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("S3Configuration");

    m_s3ConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharePointConfiguration"))
  {
    m_sharePointConfiguration = jsonValue.GetObject("SharePointConfiguration");

    m_sharePointConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseConfiguration"))
  {
    m_databaseConfiguration = jsonValue.GetObject("DatabaseConfiguration");

    m_databaseConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SalesforceConfiguration"))
  {
    m_salesforceConfiguration = jsonValue.GetObject("SalesforceConfiguration");

    m_salesforceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OneDriveConfiguration"))
  {
    m_oneDriveConfiguration = jsonValue.GetObject("OneDriveConfiguration");

    m_oneDriveConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceNowConfiguration"))
  {
    m_serviceNowConfiguration = jsonValue.GetObject("ServiceNowConfiguration");

    m_serviceNowConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("S3Configuration", m_s3Configuration.Jsonize());

  }

  if(m_sharePointConfigurationHasBeenSet)
  {
   payload.WithObject("SharePointConfiguration", m_sharePointConfiguration.Jsonize());

  }

  if(m_databaseConfigurationHasBeenSet)
  {
   payload.WithObject("DatabaseConfiguration", m_databaseConfiguration.Jsonize());

  }

  if(m_salesforceConfigurationHasBeenSet)
  {
   payload.WithObject("SalesforceConfiguration", m_salesforceConfiguration.Jsonize());

  }

  if(m_oneDriveConfigurationHasBeenSet)
  {
   payload.WithObject("OneDriveConfiguration", m_oneDriveConfiguration.Jsonize());

  }

  if(m_serviceNowConfigurationHasBeenSet)
  {
   payload.WithObject("ServiceNowConfiguration", m_serviceNowConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
