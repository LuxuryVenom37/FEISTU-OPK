cmake_minimum_required(VERSION 3.20)
project(C__ LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C__
        src/main.cpp
        src/Greeter.cpp
)

target_include_directories(C__ PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)