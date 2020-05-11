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
   * <p>Information about a document attribute</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Facet">AWS API
   * Reference</a></p>
   */
  class AWS_KENDRA_API Facet
  {
  public:
    Facet();
    Facet(Aws::Utils::Json::JsonView jsonValue);
    Facet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline const Aws::String& GetDocumentAttributeKey() const{ return m_documentAttributeKey; }

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline bool DocumentAttributeKeyHasBeenSet() const { return m_documentAttributeKeyHasBeenSet; }

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline void SetDocumentAttributeKey(const Aws::String& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = value; }

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline void SetDocumentAttributeKey(Aws::String&& value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey = std::move(value); }

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline void SetDocumentAttributeKey(const char* value) { m_documentAttributeKeyHasBeenSet = true; m_documentAttributeKey.assign(value); }

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline Facet& WithDocumentAttributeKey(const Aws::String& value) { SetDocumentAttributeKey(value); return *this;}

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline Facet& WithDocumentAttributeKey(Aws::String&& value) { SetDocumentAttributeKey(std::move(value)); return *this;}

    /**
     * <p>The unique key for the document attribute.</p>
     */
    inline Facet& WithDocumentAttributeKey(const char* value) { SetDocumentAttributeKey(value); return *this;}

  private:

    Aws::String m_documentAttributeKey;
    bool m_documentAttributeKeyHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
