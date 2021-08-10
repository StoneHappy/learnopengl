#pragma once
#ifdef __APPLE__
#define __CLEAR_TERMINAL system("clear")
#else
#define __CLEAR_TERMINAL system("cls")
#endif

#include<imgui.h>
#include<backends/imgui_impl_glfw.h>
#include<backends/imgui_impl_opengl3.h>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

#include "shader.hpp"

#include <math.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"


#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
