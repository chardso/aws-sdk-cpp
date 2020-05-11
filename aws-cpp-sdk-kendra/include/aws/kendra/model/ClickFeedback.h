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

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{

  /**
   * <p>Gathers information about when a particular result was clicked by a user.
   * Your application uses the <a>SubmitFeedback</a> operation to provide click
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ClickFeedback">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API ClickFeedback
  {
  public:
    ClickFeedback();
    ClickFeedback(Aws::Utils::Json::JsonView jsonValue);
    ClickFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the search result that was clicked.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }

    /**
     * <p>The unique identifier of the search result that was clicked.</p>
     */
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }

    /**
     * <p>The unique identifier of the search result that was clicked.</p>
     */
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }

    /**
     * <p>The unique identifier of the search result that was clicked.</p>
     */
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }

    /**
     * <p>The unique identifier of the search result that was clicked.</p>
     */
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }

    /**
     * <p>The unique identifier of the search result that was clicked.</p>
     */
    inline ClickFeedback& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}

    /**
     * <p>The unique identifier of the search result that was clicked.</p>
     */
    inline ClickFeedback& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the search result that was clicked.</p>
     */
    inline ClickFeedback& WithResultId(const char* value) { SetResultId(value); return *this;}


    /**
     * <p>The Unix timestamp of the date and time that the result was clicked.</p>
     */
    inline const Aws::Utils::DateTime& GetClickTime() const{ return m_clickTime; }

    /**
     * <p>The Unix timestamp of the date and time that the result was clicked.</p>
     */
    inline bool ClickTimeHasBeenSet() const { return m_clickTimeHasBeenSet; }

    /**
     * <p>The Unix timestamp of the date and time that the result was clicked.</p>
     */
    inline void SetClickTime(const Aws::Utils::DateTime& value) { m_clickTimeHasBeenSet = true; m_clickTime = value; }

    /**
     * <p>The Unix timestamp of the date and time that the result was clicked.</p>
     */
    inline void SetClickTime(Aws::Utils::DateTime&& value) { m_clickTimeHasBeenSet = true; m_clickTime = std::move(value); }

    /**
     * <p>The Unix timestamp of the date and time that the result was clicked.</p>
     */
    inline ClickFeedback& WithClickTime(const Aws::Utils::DateTime& value) { SetClickTime(value); return *this;}

    /**
     * <p>The Unix timestamp of the date and time that the result was clicked.</p>
     */
    inline ClickFeedback& WithClickTime(Aws::Utils::DateTime&& value) { SetClickTime(std::move(value)); return *this;}

  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet;

    Aws::Utils::DateTime m_clickTime;
    bool m_clickTimeHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
