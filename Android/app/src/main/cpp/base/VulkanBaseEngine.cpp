//
// Created by wjl on 21-2-23.
//

#include "VulkanBaseEngine.h"

#include "VulkanDescriptorSet.h"

BEGIN_NAMESPACE(VulkanEngine)
VulkanBaseEngine::VulkanBaseEngine() {}

VulkanBaseEngine::~VulkanBaseEngine() {}

void VulkanBaseEngine::prepare() {
    prepareBase();

}

void VulkanBaseEngine::render() {}

void VulkanBaseEngine::processPrepareCallback() {}


END_NAMESPACE(VulkanEngine)