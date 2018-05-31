cmake_minimum_required (VERSION 2.6)
project (thread_local_test)

set (thread_local_test_VERSION_MAJOR 1)
set (thread_local_test_VERSION_MINOR 0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-pthread -g")

add_subdirectory(static_test_lib)
add_subdirectory(shared_test_lib)

add_executable(thread_local_test main.cpp)

include_directories(shared_test_lib static_test_lib)

# target_link_libraries (thread_local_test static_test_lib dl)
target_link_libraries (thread_local_test static_test_lib shared_test_lib dl)

