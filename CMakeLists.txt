cmake_minimum_required(VERSION 2.6)
project(mcpp)

add_executable(mcpp main.cpp)

install(TARGETS mcpp RUNTIME DESTINATION bin)
