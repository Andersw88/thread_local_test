cmake_minimum_required (VERSION 2.6)
project (shared_test_lib CXX)
# The version number.


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_CXX_FLAGS "-pthread -m32 -g" )


add_library(shared_test_lib SHARED MakeWorker.h MakeWorker.cpp)

# set_target_properties(shared_test_lib PROPERTIES CXX_VISIBILITY_PRESET hidden)

target_include_directories(shared_test_lib PUBLIC ".")
target_link_libraries (shared_test_lib PUBLIC static_test_lib)

