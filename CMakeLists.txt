cmake_minimum_required(VERSION 3.9)
project(mcpp LANGUAGES CXX VERSION 0.0.1)

find_package(Catch2 REQUIRED)

#Bring the headers into the project
include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(mccpex1 STATIC ${SOURCES})

add_executable(mcpp main.cpp  )
target_link_libraries(mcpp mccpex1)


add_executable(mcpp_test testmain.cpp)

target_link_libraries(mcpp_test Catch2::Catch2 mccpex1)

set_property(TARGET mcpp PROPERTY CXX_STANDARD 17)

set_property(TARGET mcpp_test PROPERTY CXX_STANDARD 17)


include(CTest)
include(ParseAndAddCatchTests)
ParseAndAddCatchTests(mcpp_test)

install(TARGETS mcpp RUNTIME DESTINATION bin)
