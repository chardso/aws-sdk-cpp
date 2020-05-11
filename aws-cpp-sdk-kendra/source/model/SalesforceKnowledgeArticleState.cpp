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

#include <aws/kendra/model/SalesforceKnowledgeArticleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace SalesforceKnowledgeArticleStateMapper
      {

        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        SalesforceKnowledgeArticleState GetSalesforceKnowledgeArticleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAFT_HASH)
          {
            return SalesforceKnowledgeArticleState::DRAFT;
          }
          else if (hashCode == PUBLISHED_HASH)
          {
            return SalesforceKnowledgeArticleState::PUBLISHED;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return SalesforceKnowledgeArticleState::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SalesforceKnowledgeArticleState>(hashCode);
          }

          return SalesforceKnowledgeArticleState::NOT_SET;
        }

        Aws::String GetNameForSalesforceKnowledgeArticleState(SalesforceKnowledgeArticleState enumValue)
        {
          switch(enumValue)
          {
          case SalesforceKnowledgeArticleState::DRAFT:
            return "DRAFT";
          case SalesforceKnowledgeArticleState::PUBLISHED:
            return "PUBLISHED";
          case SalesforceKnowledgeArticleState::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SalesforceKnowledgeArticleStateMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
