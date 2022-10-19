﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/SourceConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Destination.h>
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
namespace CloudTrail
{
namespace Model
{
  class AWS_CLOUDTRAIL_API GetChannelResult
  {
  public:
    GetChannelResult();
    GetChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of an channel returned by a <code>GetChannel</code> request.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of an channel returned by a <code>GetChannel</code> request.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The ARN of an channel returned by a <code>GetChannel</code> request.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The ARN of an channel returned by a <code>GetChannel</code> request.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The ARN of an channel returned by a <code>GetChannel</code> request.</p>
     */
    inline GetChannelResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of an channel returned by a <code>GetChannel</code> request.</p>
     */
    inline GetChannelResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an channel returned by a <code>GetChannel</code> request.</p>
     */
    inline GetChannelResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the value
     * is <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * generated by the Amazon Web Services service. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the value
     * is <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * generated by the Amazon Web Services service. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the value
     * is <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * generated by the Amazon Web Services service. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the value
     * is <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * generated by the Amazon Web Services service. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the value
     * is <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * generated by the Amazon Web Services service. </p>
     */
    inline GetChannelResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the value
     * is <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * generated by the Amazon Web Services service. </p>
     */
    inline GetChannelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the CloudTrail channel. For service-linked channels, the value
     * is <code>aws-service-channel/service-name/custom-suffix</code> where
     * <code>service-name</code> represents the name of the Amazon Web Services service
     * that created the channel and <code>custom-suffix</code> represents the suffix
     * generated by the Amazon Web Services service. </p>
     */
    inline GetChannelResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The event source for the CloudTrail channel.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The event source for the CloudTrail channel.</p>
     */
    inline void SetSource(const Aws::String& value) { m_source = value; }

    /**
     * <p>The event source for the CloudTrail channel.</p>
     */
    inline void SetSource(Aws::String&& value) { m_source = std::move(value); }

    /**
     * <p>The event source for the CloudTrail channel.</p>
     */
    inline void SetSource(const char* value) { m_source.assign(value); }

    /**
     * <p>The event source for the CloudTrail channel.</p>
     */
    inline GetChannelResult& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The event source for the CloudTrail channel.</p>
     */
    inline GetChannelResult& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The event source for the CloudTrail channel.</p>
     */
    inline GetChannelResult& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p> Provides information about the advanced event selectors configured for the
     * channel, and whether the channel applies to all regions or a single region. </p>
     */
    inline const SourceConfig& GetSourceConfig() const{ return m_sourceConfig; }

    /**
     * <p> Provides information about the advanced event selectors configured for the
     * channel, and whether the channel applies to all regions or a single region. </p>
     */
    inline void SetSourceConfig(const SourceConfig& value) { m_sourceConfig = value; }

    /**
     * <p> Provides information about the advanced event selectors configured for the
     * channel, and whether the channel applies to all regions or a single region. </p>
     */
    inline void SetSourceConfig(SourceConfig&& value) { m_sourceConfig = std::move(value); }

    /**
     * <p> Provides information about the advanced event selectors configured for the
     * channel, and whether the channel applies to all regions or a single region. </p>
     */
    inline GetChannelResult& WithSourceConfig(const SourceConfig& value) { SetSourceConfig(value); return *this;}

    /**
     * <p> Provides information about the advanced event selectors configured for the
     * channel, and whether the channel applies to all regions or a single region. </p>
     */
    inline GetChannelResult& WithSourceConfig(SourceConfig&& value) { SetSourceConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services service that created the service-linked channel.</p>
     */
    inline const Aws::Vector<Destination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>The Amazon Web Services service that created the service-linked channel.</p>
     */
    inline void SetDestinations(const Aws::Vector<Destination>& value) { m_destinations = value; }

    /**
     * <p>The Amazon Web Services service that created the service-linked channel.</p>
     */
    inline void SetDestinations(Aws::Vector<Destination>&& value) { m_destinations = std::move(value); }

    /**
     * <p>The Amazon Web Services service that created the service-linked channel.</p>
     */
    inline GetChannelResult& WithDestinations(const Aws::Vector<Destination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>The Amazon Web Services service that created the service-linked channel.</p>
     */
    inline GetChannelResult& WithDestinations(Aws::Vector<Destination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services service that created the service-linked channel.</p>
     */
    inline GetChannelResult& AddDestinations(const Destination& value) { m_destinations.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services service that created the service-linked channel.</p>
     */
    inline GetChannelResult& AddDestinations(Destination&& value) { m_destinations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_channelArn;

    Aws::String m_name;

    Aws::String m_source;

    SourceConfig m_sourceConfig;

    Aws::Vector<Destination> m_destinations;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
