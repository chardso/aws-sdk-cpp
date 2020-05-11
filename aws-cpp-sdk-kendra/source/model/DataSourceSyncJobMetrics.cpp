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

#include <aws/kendra/model/DataSourceSyncJobMetrics.h>
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

DataSourceSyncJobMetrics::DataSourceSyncJobMetrics() : 
    m_documentsAddedHasBeenSet(false),
    m_documentsModifiedHasBeenSet(false),
    m_documentsDeletedHasBeenSet(false),
    m_documentsFailedHasBeenSet(false),
    m_documentsScannedHasBeenSet(false)
{
}

DataSourceSyncJobMetrics::DataSourceSyncJobMetrics(JsonView jsonValue) : 
    m_documentsAddedHasBeenSet(false),
    m_documentsModifiedHasBeenSet(false),
    m_documentsDeletedHasBeenSet(false),
    m_documentsFailedHasBeenSet(false),
    m_documentsScannedHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceSyncJobMetrics& DataSourceSyncJobMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentsAdded"))
  {
    m_documentsAdded = jsonValue.GetString("DocumentsAdded");

    m_documentsAddedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentsModified"))
  {
    m_documentsModified = jsonValue.GetString("DocumentsModified");

    m_documentsModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentsDeleted"))
  {
    m_documentsDeleted = jsonValue.GetString("DocumentsDeleted");

    m_documentsDeletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentsFailed"))
  {
    m_documentsFailed = jsonValue.GetString("DocumentsFailed");

    m_documentsFailedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentsScanned"))
  {
    m_documentsScanned = jsonValue.GetString("DocumentsScanned");

    m_documentsScannedHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceSyncJobMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_documentsAddedHasBeenSet)
  {
   payload.WithString("DocumentsAdded", m_documentsAdded);

  }

  if(m_documentsModifiedHasBeenSet)
  {
   payload.WithString("DocumentsModified", m_documentsModified);

  }

  if(m_documentsDeletedHasBeenSet)
  {
   payload.WithString("DocumentsDeleted", m_documentsDeleted);

  }

  if(m_documentsFailedHasBeenSet)
  {
   payload.WithString("DocumentsFailed", m_documentsFailed);

  }

  if(m_documentsScannedHasBeenSet)
  {
   payload.WithString("DocumentsScanned", m_documentsScanned);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
