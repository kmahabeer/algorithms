cmake_minimum_required(VERSION 3.0.0)
project(valid-parentheses-cpp VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(valid-parentheses-cpp main.cpp)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(valid-parentheses-cpp PRIVATE -Wall -Wextra -Wpedantic)
elseif (MSVC)
    target_compile_options(valid-parentheses-cpp PRIVATE /W4 /WX)
endif()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
