cmake_minimum_required(VERSION 3.5.0)
project(HelloWorld VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4 /WX /permissive-")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -Weffc++ -Wconversion -Wsign-conversion -pedantic-errors")
endif()
add_executable(HelloWorld main.cpp)

include(CTest)
enable_testing()

