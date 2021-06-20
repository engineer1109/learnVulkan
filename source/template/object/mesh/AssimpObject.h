//
// Created by wjl on 2021/6/20.
//

#ifndef LEARNVULKAN_ASSIMPOBJECT_H
#define LEARNVULKAN_ASSIMPOBJECT_H

#include "MeshObject.h"

namespace vks{
class Model;
}

BEGIN_NAMESPACE(VulkanEngine)

#ifdef BUILD_ASSIMP

class AssimpObject : public MeshObject {
public:
    AssimpObject() = default;

    virtual ~AssimpObject();

    void setModelPath(const std::string &modelPath) {
        m_modelPath = modelPath;
    }

    void generateVertex() override;

    void updateVertex() override{}

    virtual void build(VkCommandBuffer &cmdBuffer, VulkanShader *vulkanShader) override;

protected:
    std::string m_modelPath;
    vks::Model *m_model = nullptr;
};

#endif

END_NAMESPACE(VulkanEngine)

#endif //LEARNVULKAN_ASSIMPOBJECT_H
