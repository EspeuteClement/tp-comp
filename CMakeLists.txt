cmake_minimum_required(VERSION 3.5)
project(tp_comp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp LexicalAnalyser.cpp LexicalAnalyser.h SyntaxAnalyser.cpp SyntaxAnalyser.h State.cpp State.h)
add_executable(tp_comp ${SOURCE_FILES})
