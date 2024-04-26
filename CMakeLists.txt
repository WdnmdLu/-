cmake_minimum_required(VERSION 3.0)
project(Project)

# 添加头文件目录
include_directories(include)

# 添加源文件目录
file(GLOB_RECURSE SRC_FILES src/*.cpp)

# 生成可执行文件
add_executable(Project ${SRC_FILES})

# 指定可执行文件输出目录
set_target_properties(Project PROPERTIES RUNTIME_OUTPUT_DIRECTORY ../bin)
