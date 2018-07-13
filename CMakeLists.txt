cmake_minimum_required (VERSION 2.8.11)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project (dlopen-regex)

add_executable(main main.cpp)
target_link_libraries(main dl)

add_library(foo SHARED foo.cpp)
add_dependencies(main foo)
