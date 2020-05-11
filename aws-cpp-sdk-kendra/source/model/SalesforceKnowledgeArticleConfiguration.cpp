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

#include <aws/kendra/model/SalesforceKnowledgeArticleConfiguration.h>
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

SalesforceKnowledgeArticleConfiguration::SalesforceKnowledgeArticleConfiguration() : 
    m_includedStatesHasBeenSet(false),
    m_standardKnowledgeArticleTypeConfigurationHasBeenSet(false),
    m_customKnowledgeArticleTypeConfigurationsHasBeenSet(false)
{
}

SalesforceKnowledgeArticleConfiguration::SalesforceKnowledgeArticleConfiguration(JsonView jsonValue) : 
    m_includedStatesHasBeenSet(false),
    m_standardKnowledgeArticleTypeConfigurationHasBeenSet(false),
    m_customKnowledgeArticleTypeConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

SalesforceKnowledgeArticleConfiguration& SalesforceKnowledgeArticleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IncludedStates"))
  {
    Array<JsonView> includedStatesJsonList = jsonValue.GetArray("IncludedStates");
    for(unsigned includedStatesIndex = 0; includedStatesIndex < includedStatesJsonList.GetLength(); ++includedStatesIndex)
    {
      m_includedStates.push_back(SalesforceKnowledgeArticleStateMapper::GetSalesforceKnowledgeArticleStateForName(includedStatesJsonList[includedStatesIndex].AsString()));
    }
    m_includedStatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardKnowledgeArticleTypeConfiguration"))
  {
    m_standardKnowledgeArticleTypeConfiguration = jsonValue.GetObject("StandardKnowledgeArticleTypeConfiguration");

    m_standardKnowledgeArticleTypeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomKnowledgeArticleTypeConfigurations"))
  {
    Array<JsonView> customKnowledgeArticleTypeConfigurationsJsonList = jsonValue.GetArray("CustomKnowledgeArticleTypeConfigurations");
    for(unsigned customKnowledgeArticleTypeConfigurationsIndex = 0; customKnowledgeArticleTypeConfigurationsIndex < customKnowledgeArticleTypeConfigurationsJsonList.GetLength(); ++customKnowledgeArticleTypeConfigurationsIndex)
    {
      m_customKnowledgeArticleTypeConfigurations.push_back(customKnowledgeArticleTypeConfigurationsJsonList[customKnowledgeArticleTypeConfigurationsIndex].AsObject());
    }
    m_customKnowledgeArticleTypeConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue SalesforceKnowledgeArticleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_includedStatesHasBeenSet)
  {
   Array<JsonValue> includedStatesJsonList(m_includedStates.size());
   for(unsigned includedStatesIndex = 0; includedStatesIndex < includedStatesJsonList.GetLength(); ++includedStatesIndex)
   {
     includedStatesJsonList[includedStatesIndex].AsString(SalesforceKnowledgeArticleStateMapper::GetNameForSalesforceKnowledgeArticleState(m_includedStates[includedStatesIndex]));
   }
   payload.WithArray("IncludedStates", std::move(includedStatesJsonList));

  }

  if(m_standardKnowledgeArticleTypeConfigurationHasBeenSet)
  {
   payload.WithObject("StandardKnowledgeArticleTypeConfiguration", m_standardKnowledgeArticleTypeConfiguration.Jsonize());

  }

  if(m_customKnowledgeArticleTypeConfigurationsHasBeenSet)
  {
   Array<JsonValue> customKnowledgeArticleTypeConfigurationsJsonList(m_customKnowledgeArticleTypeConfigurations.size());
   for(unsigned customKnowledgeArticleTypeConfigurationsIndex = 0; customKnowledgeArticleTypeConfigurationsIndex < customKnowledgeArticleTypeConfigurationsJsonList.GetLength(); ++customKnowledgeArticleTypeConfigurationsIndex)
   {
     customKnowledgeArticleTypeConfigurationsJsonList[customKnowledgeArticleTypeConfigurationsIndex].AsObject(m_customKnowledgeArticleTypeConfigurations[customKnowledgeArticleTypeConfigurationsIndex].Jsonize());
   }
   payload.WithArray("CustomKnowledgeArticleTypeConfigurations", std::move(customKnowledgeArticleTypeConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
