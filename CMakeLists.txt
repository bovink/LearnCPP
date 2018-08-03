cmake_minimum_required(VERSION 3.10)
project(LearnCPP)

set(CMAKE_CXX_STANDARD 11)

add_executable(LearnCPP main.cpp statement/test.cpp statement/ClickEvent.cpp statement/ClickEvent.h statement/OnTouchEventListener.cpp statement/OnTouchEventListener.h statement/Activity.cpp statement/Activity.h json/main.cpp json/Person.cpp json/Person.h json/Date.cpp json/Date.h json/Model.cpp json/Model.h static/main.cpp static/Person.cpp static/Person.h)