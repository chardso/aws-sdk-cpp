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

#include <aws/kendra/model/SalesforceChatterFeedIncludeFilterType.h>
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
      namespace SalesforceChatterFeedIncludeFilterTypeMapper
      {

        static const int ACTIVE_USER_HASH = HashingUtils::HashString("ACTIVE_USER");
        static const int STANDARD_USER_HASH = HashingUtils::HashString("STANDARD_USER");


        SalesforceChatterFeedIncludeFilterType GetSalesforceChatterFeedIncludeFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_USER_HASH)
          {
            return SalesforceChatterFeedIncludeFilterType::ACTIVE_USER;
          }
          else if (hashCode == STANDARD_USER_HASH)
          {
            return SalesforceChatterFeedIncludeFilterType::STANDARD_USER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SalesforceChatterFeedIncludeFilterType>(hashCode);
          }

          return SalesforceChatterFeedIncludeFilterType::NOT_SET;
        }

        Aws::String GetNameForSalesforceChatterFeedIncludeFilterType(SalesforceChatterFeedIncludeFilterType enumValue)
        {
          switch(enumValue)
          {
          case SalesforceChatterFeedIncludeFilterType::ACTIVE_USER:
            return "ACTIVE_USER";
          case SalesforceChatterFeedIncludeFilterType::STANDARD_USER:
            return "STANDARD_USER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SalesforceChatterFeedIncludeFilterTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
