#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;

layout (std140) uniform CameraMatrices
{
    mat4 projection;
    mat4 view;
};

out VS_OUT {
    vec3 color;
} vs_out;


uniform mat4 model;


void main()
{
    gl_Position = projection * view * model * vec4(aPos, 1.0);    
    vs_out.color = aColor;
}