cmake_minimum_required(VERSION 3.20)

project(CV2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(OpenCV REQUIRED)

# Pridáme include priečinky
include_directories(
        ${OpenCV_INCLUDE_DIRS}
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(CV2 src/main.cpp src/canvas.cpp src/shape.cpp)

#target_include_directories(CV2 PRIVATE
 #       ${CMAKE_CURRENT_SOURCE_DIR}/include
#)
# Linkovanie OpenCV
target_link_libraries(CV2 PRIVATE ${OpenCV_LIBS})
