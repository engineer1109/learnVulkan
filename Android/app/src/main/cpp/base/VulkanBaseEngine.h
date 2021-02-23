//
// Created by wjl on 21-2-23.
//

#ifndef LEARNVULKAN_VULKANBASEENGINE_H
#define LEARNVULKAN_VULKANBASEENGINE_H

#include "VulkanBase.h"

BEGIN_NAMESPACE(VulkanEngine)

class VulkanDescriptorSet;

class VulkanBaseEngine : public VulkanBase {
public:
    VulkanBaseEngine();

    ~VulkanBaseEngine();

    virtual void prepare() override;

    virtual void render() override;

    virtual void processPrepareCallback();

protected:
    VulkanDescriptorSet *m_VulkanDescriptorSet = nullptr;
};

END_NAMESPACE(VulkanEngine)

#endif //LEARNVULKAN_VULKANBASEENGINE_H
