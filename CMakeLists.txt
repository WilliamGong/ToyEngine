cmake_minimum_required(VERSION 3.1)

#project name
project(ToyEngine)

#include path
include_directories(include/Framework/Interface)
include_directories(include/Framework/Common)

#C & C++ feature
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)

#sub dirctory
add_subdirectory(src/Framework)
add_subdirectory(src/Empty)