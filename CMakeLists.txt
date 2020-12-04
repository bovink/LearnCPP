cmake_minimum_required(VERSION 3.10)
project(LearnCPP)

set(CMAKE_CXX_STANDARD 11)

add_executable(LearnCPP main.cpp std_lib_facilities.h iterator/iterator.cpp iterator/iterator.h)

include_directories(/ iterator)