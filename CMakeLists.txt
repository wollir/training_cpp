﻿# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("training_cpp")
set(CMAKE_CXX_STANDARD 11)

# 包含子项目。
add_subdirectory ("tree")
add_subdirectory ("list")
add_subdirectory ("array")
add_subdirectory ("new_feature")



