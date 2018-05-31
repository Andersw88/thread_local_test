cmake_minimum_required (VERSION 2.6)
project (static_test_lib CXX)
# The version number.


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-pthread -g" )

add_library(static_test_lib STATIC test.h test.cpp)

target_include_directories(static_test_lib PUBLIC ".")
