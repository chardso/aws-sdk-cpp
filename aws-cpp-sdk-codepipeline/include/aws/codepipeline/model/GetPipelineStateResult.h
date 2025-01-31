﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codepipeline/model/StageState.h>
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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetPipelineState</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/GetPipelineStateOutput">AWS
   * API Reference</a></p>
   */
  class GetPipelineStateResult
  {
  public:
    AWS_CODEPIPELINE_API GetPipelineStateResult();
    AWS_CODEPIPELINE_API GetPipelineStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API GetPipelineStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the pipeline for which you want to get the state.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline for which you want to get the state.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineName = value; }

    /**
     * <p>The name of the pipeline for which you want to get the state.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline for which you want to get the state.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline for which you want to get the state.</p>
     */
    inline GetPipelineStateResult& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline for which you want to get the state.</p>
     */
    inline GetPipelineStateResult& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline for which you want to get the state.</p>
     */
    inline GetPipelineStateResult& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The version number of the pipeline.</p>  <p>A newly created pipeline is
     * always assigned a version number of <code>1</code>.</p> 
     */
    inline int GetPipelineVersion() const{ return m_pipelineVersion; }

    /**
     * <p>The version number of the pipeline.</p>  <p>A newly created pipeline is
     * always assigned a version number of <code>1</code>.</p> 
     */
    inline void SetPipelineVersion(int value) { m_pipelineVersion = value; }

    /**
     * <p>The version number of the pipeline.</p>  <p>A newly created pipeline is
     * always assigned a version number of <code>1</code>.</p> 
     */
    inline GetPipelineStateResult& WithPipelineVersion(int value) { SetPipelineVersion(value); return *this;}


    /**
     * <p>A list of the pipeline stage output information, including stage name, state,
     * most recent run details, whether the stage is disabled, and other data.</p>
     */
    inline const Aws::Vector<StageState>& GetStageStates() const{ return m_stageStates; }

    /**
     * <p>A list of the pipeline stage output information, including stage name, state,
     * most recent run details, whether the stage is disabled, and other data.</p>
     */
    inline void SetStageStates(const Aws::Vector<StageState>& value) { m_stageStates = value; }

    /**
     * <p>A list of the pipeline stage output information, including stage name, state,
     * most recent run details, whether the stage is disabled, and other data.</p>
     */
    inline void SetStageStates(Aws::Vector<StageState>&& value) { m_stageStates = std::move(value); }

    /**
     * <p>A list of the pipeline stage output information, including stage name, state,
     * most recent run details, whether the stage is disabled, and other data.</p>
     */
    inline GetPipelineStateResult& WithStageStates(const Aws::Vector<StageState>& value) { SetStageStates(value); return *this;}

    /**
     * <p>A list of the pipeline stage output information, including stage name, state,
     * most recent run details, whether the stage is disabled, and other data.</p>
     */
    inline GetPipelineStateResult& WithStageStates(Aws::Vector<StageState>&& value) { SetStageStates(std::move(value)); return *this;}

    /**
     * <p>A list of the pipeline stage output information, including stage name, state,
     * most recent run details, whether the stage is disabled, and other data.</p>
     */
    inline GetPipelineStateResult& AddStageStates(const StageState& value) { m_stageStates.push_back(value); return *this; }

    /**
     * <p>A list of the pipeline stage output information, including stage name, state,
     * most recent run details, whether the stage is disabled, and other data.</p>
     */
    inline GetPipelineStateResult& AddStageStates(StageState&& value) { m_stageStates.push_back(std::move(value)); return *this; }


    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_created = value; }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_created = std::move(value); }

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline GetPipelineStateResult& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The date and time the pipeline was created, in timestamp format.</p>
     */
    inline GetPipelineStateResult& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdated() const{ return m_updated; }

    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline void SetUpdated(const Aws::Utils::DateTime& value) { m_updated = value; }

    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline void SetUpdated(Aws::Utils::DateTime&& value) { m_updated = std::move(value); }

    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline GetPipelineStateResult& WithUpdated(const Aws::Utils::DateTime& value) { SetUpdated(value); return *this;}

    /**
     * <p>The date and time the pipeline was last updated, in timestamp format.</p>
     */
    inline GetPipelineStateResult& WithUpdated(Aws::Utils::DateTime&& value) { SetUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineName;

    int m_pipelineVersion;

    Aws::Vector<StageState> m_stageStates;

    Aws::Utils::DateTime m_created;

    Aws::Utils::DateTime m_updated;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
