﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BackupGateway
{
namespace Model
{
  class StartVirtualMachinesMetadataSyncResult
  {
  public:
    AWS_BACKUPGATEWAY_API StartVirtualMachinesMetadataSyncResult();
    AWS_BACKUPGATEWAY_API StartVirtualMachinesMetadataSyncResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API StartVirtualMachinesMetadataSyncResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline const Aws::String& GetHypervisorArn() const{ return m_hypervisorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(const Aws::String& value) { m_hypervisorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(Aws::String&& value) { m_hypervisorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline void SetHypervisorArn(const char* value) { m_hypervisorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline StartVirtualMachinesMetadataSyncResult& WithHypervisorArn(const Aws::String& value) { SetHypervisorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline StartVirtualMachinesMetadataSyncResult& WithHypervisorArn(Aws::String&& value) { SetHypervisorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor.</p>
     */
    inline StartVirtualMachinesMetadataSyncResult& WithHypervisorArn(const char* value) { SetHypervisorArn(value); return *this;}

  private:

    Aws::String m_hypervisorArn;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
