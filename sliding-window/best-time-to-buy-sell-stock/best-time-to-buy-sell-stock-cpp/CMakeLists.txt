cmake_minimum_required(VERSION 3.0.0)
project(best-time-to-buy-sell-stock-cpp VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(best-time-to-buy-sell-stock-cpp main.cpp)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(best-time-to-buy-sell-stock-cpp PRIVATE -Wall -Wextra -Wpedantic)
elseif (MSVC)
    target_compile_options(best-time-to-buy-sell-stock-cpp PRIVATE /W4 /WX)
endif()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
