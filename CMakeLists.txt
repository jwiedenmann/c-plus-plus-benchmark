cmake_minimum_required(VERSION 3.15)
project(example
    LANGUAGES CXX
    VERSION 1.0
)

set(BUILD_SHARED_LIBS OFF)

include_directories(include)

add_subdirectory(dependencies)
add_subdirectory(src)