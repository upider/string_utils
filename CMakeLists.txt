cmake_minimum_required(VERSION 3.10)
project(string_utils)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++11 -Wall -O2")

include_directories(string_utils)
aux_source_directory(src SRC_LST)

add_executable(test01 demo/test01.cpp ${SRC_LST})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
