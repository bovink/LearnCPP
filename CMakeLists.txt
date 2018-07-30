cmake_minimum_required(VERSION 3.10)
project(LearnCPP)

set(CMAKE_CXX_STANDARD 11)

add_executable(LearnCPP main.cpp statement/test.cpp statement/ClickEvent.cpp statement/ClickEvent.h statement/OnTouchEventListener.cpp statement/OnTouchEventListener.h statement/Activity.cpp statement/Activity.h json/main.cpp)