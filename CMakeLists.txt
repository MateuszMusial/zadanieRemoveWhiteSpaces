cmake_minimum_required(VERSION 3.24)
project(zadanieStaz3)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        zadanieStaz3
        main.cpp
        functions.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(
        zadanieStaz3-ut
        tests.cpp
        functions.cpp)

enable_testing()

target_link_libraries(
        zadanieStaz3-ut
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(zadanieStaz3-ut)