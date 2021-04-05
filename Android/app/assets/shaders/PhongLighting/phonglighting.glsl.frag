#version 450

layout (binding = 1) uniform sampler2D samplerTextureA;

layout (binding = 2) uniform sampler2D samplerTextureB;

layout (location = 0) in vec3 inUV;
layout (location = 1) in float inLodBias;
layout (location = 2) in vec3 inNormal;
layout (location = 3) in vec3 inViewVec;
layout (location = 4) in vec3 inLightVec;

layout (location = 0) out vec4 outFragColor;

void main() 
{
    vec4 colorA = texture(samplerTextureA, inUV.xy, 1.0f);
    vec4 colorB = texture(samplerTextureB, inUV.xy, 1.0f);
    vec4 color = colorA*0.5+colorB*0.5;

    vec3 N = normalize(inNormal);
    vec3 L = normalize(inLightVec);
    vec3 V = normalize(inViewVec);
    vec3 R = reflect(-L, N);
    vec3 diffuse = max(dot(N, L), 0.0) * vec3(1.0);
    float specular = pow(max(dot(R, V), 0.0), 16.0) * color.a;

    outFragColor = vec4(diffuse * color.rgb + specular, 1.0);
}
