cmake_minimum_required(VERSION 3.10)
project(LearnCPP)

set(CMAKE_CXX_STANDARD 11)

add_executable(LearnCPP main.cpp chapter/10/chapter10_5.cpp chapter/10/chapter10_4.cpp chapter/10/chapter10_6.cpp std_lib_facilities.h chapter/10/chapter10_7.cpp chapter/10/chapter10_8.cpp chapter/10/chapter10_9.cpp chapter/10/chapter10_10.cpp chapter/10/chapter10_11.cpp chapter/11/chapter11_1.cpp chapter/11/chapter11_2.cpp chapter/11/chapter11_3.cpp chapter/11/chapter11_4.cpp chapter/11/chapter11_5.cpp chapter/11/chapter11_6.cpp chapter/11/chapter11_7.cpp chapter/11/chapter11_8.cpp)

INCLUDE_DIRECTORIES(/ chapter/../)
