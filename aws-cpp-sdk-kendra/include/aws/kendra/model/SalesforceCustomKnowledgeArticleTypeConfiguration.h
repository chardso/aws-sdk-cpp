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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DataSourceToIndexFieldMapping.h>
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
   * <p>Provides configuration information for indexing Salesforce custom
   * articles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SalesforceCustomKnowledgeArticleTypeConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API SalesforceCustomKnowledgeArticleTypeConfiguration
  {
  public:
    SalesforceCustomKnowledgeArticleTypeConfiguration();
    SalesforceCustomKnowledgeArticleTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SalesforceCustomKnowledgeArticleTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configuration.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configuration.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document data to index.</p>
     */
    inline const Aws::String& GetDocumentDataFieldName() const{ return m_documentDataFieldName; }

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document data to index.</p>
     */
    inline bool DocumentDataFieldNameHasBeenSet() const { return m_documentDataFieldNameHasBeenSet; }

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document data to index.</p>
     */
    inline void SetDocumentDataFieldName(const Aws::String& value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName = value; }

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document data to index.</p>
     */
    inline void SetDocumentDataFieldName(Aws::String&& value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName = std::move(value); }

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document data to index.</p>
     */
    inline void SetDocumentDataFieldName(const char* value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName.assign(value); }

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document data to index.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& WithDocumentDataFieldName(const Aws::String& value) { SetDocumentDataFieldName(value); return *this;}

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document data to index.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& WithDocumentDataFieldName(Aws::String&& value) { SetDocumentDataFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document data to index.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& WithDocumentDataFieldName(const char* value) { SetDocumentDataFieldName(value); return *this;}


    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document title.</p>
     */
    inline const Aws::String& GetDocumentTitleFieldName() const{ return m_documentTitleFieldName; }

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document title.</p>
     */
    inline bool DocumentTitleFieldNameHasBeenSet() const { return m_documentTitleFieldNameHasBeenSet; }

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document title.</p>
     */
    inline void SetDocumentTitleFieldName(const Aws::String& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = value; }

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document title.</p>
     */
    inline void SetDocumentTitleFieldName(Aws::String&& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = std::move(value); }

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document title.</p>
     */
    inline void SetDocumentTitleFieldName(const char* value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName.assign(value); }

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document title.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& WithDocumentTitleFieldName(const Aws::String& value) { SetDocumentTitleFieldName(value); return *this;}

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document title.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& WithDocumentTitleFieldName(Aws::String&& value) { SetDocumentTitleFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the field in the custom knowledge article that contains the
     * document title.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& WithDocumentTitleFieldName(const char* value) { SetDocumentTitleFieldName(value); return *this;}


    /**
     * <p>One or more objects that map fields in the custom knowledge article to fields
     * in the Amazon Kendra index.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }

    /**
     * <p>One or more objects that map fields in the custom knowledge article to fields
     * in the Amazon Kendra index.</p>
     */
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }

    /**
     * <p>One or more objects that map fields in the custom knowledge article to fields
     * in the Amazon Kendra index.</p>
     */
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }

    /**
     * <p>One or more objects that map fields in the custom knowledge article to fields
     * in the Amazon Kendra index.</p>
     */
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }

    /**
     * <p>One or more objects that map fields in the custom knowledge article to fields
     * in the Amazon Kendra index.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}

    /**
     * <p>One or more objects that map fields in the custom knowledge article to fields
     * in the Amazon Kendra index.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}

    /**
     * <p>One or more objects that map fields in the custom knowledge article to fields
     * in the Amazon Kendra index.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }

    /**
     * <p>One or more objects that map fields in the custom knowledge article to fields
     * in the Amazon Kendra index.</p>
     */
    inline SalesforceCustomKnowledgeArticleTypeConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_documentDataFieldName;
    bool m_documentDataFieldNameHasBeenSet;

    Aws::String m_documentTitleFieldName;
    bool m_documentTitleFieldNameHasBeenSet;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
