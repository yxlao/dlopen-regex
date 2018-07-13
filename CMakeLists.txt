cmake_minimum_required (VERSION 2.8.11)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project (dlopen-regex)

# [main] -- links --> [middle] -- dl_open --> [final]
add_library(final SHARED final.cpp)

add_library(middle SHARED middle.cpp)
add_dependencies(middle final)

add_executable(main main.cpp)
target_link_libraries(main middle dl)
