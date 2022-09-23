cmake_minimum_required(VERSION 3.23)
project(untitled)
set(CMAKE_CXX_STANDARD 23)


add_executable(untitled src/main.cpp src/GameObject.cpp src/GameObject.h)
find_package(OpenGL REQUIRED)



include(FetchContent)
FetchContent_Declare(glfw GIT_REPOSITORY https://github.com/glfw/glfw.git)
FetchContent_MakeAvailable(glfw)


set(GLEW_ROOT "/Users/timmn/Dev/quantFirm/untitled/externals/glew-2.1.0/")
set(GLEW_INCLUDE_DIRS "/Users/timmn/Dev/quantFirm/untitled/externals/glew-2.1.0/include")
set(GLEW_LIBRARIES "/Users/timmn/Dev/quantFirm/untitled/externals/glew-2.1.0/lib")

find_package(GLEW 2.1 REQUIRED)

include_directories(${GLEW_INCLUDE_DIRS})
LINK_DIRECTORIES(${GLEW_LIBRARIES})


target_link_libraries(untitled glfw GLEW::GLEW ${GLEW_LIBRARIES} ${OPENGL_LIBRARIES} OpenGL::GL)

