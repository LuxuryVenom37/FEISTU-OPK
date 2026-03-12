cmake_minimum_required(VERSION 3.20)
project(FifoApp VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

# --- GoogleTest ---
include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
        DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

FetchContent_MakeAvailable(googletest)

# --- Add subdirectories ---
add_subdirectory(src/fifo_lib)
add_subdirectory(tests)

# --- Main executable ---
add_executable(fifo_app
        main.cpp
)

target_link_libraries(fifo_app PRIVATE fifo_lib)

target_compile_options(fifo_app PRIVATE
        -Wall -Wextra -Werror
)

target_compile_options(fifo_app PRIVATE
        $<$<CONFIG:Debug>:-fsanitize=address,undefined>
)

target_link_options(fifo_app PRIVATE
        $<$<CONFIG:Debug>:-fsanitize=address,undefined>
)