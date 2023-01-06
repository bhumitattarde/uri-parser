cmake_minimum_required(VERSION 3.10)
project("uri-parser")

# set variables
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# build examples
if(BUILD_EXAMPLE)
    set(EXAMPLE_NAME example)
    add_executable(${EXAMPLE_NAME} "${CMAKE_SOURCE_DIR}/example.cpp")
    target_include_directories(${EXAMPLE_NAME} PUBLIC "${CMAKE_SOURCE_DIR}")
endif()

# build tests
if(BUILD_TESTS)
    find_package(GTest REQUIRED)

    include(CTest)
    option(CMAKE_USE_WIN32_THREADS_INIT
        "using WIN32 threads" ON)
    option(gtest_disable_pthreads
        "disabling pthreads in gtest" ON)

    set(TEST_NAME parserTest)
    file(
        GLOB test_files "${CMAKE_SOURCE_DIR}/test/unit/*.cpp")
    add_executable(${TEST_NAME} ${test_files})
    target_include_directories(${TEST_NAME} PUBLIC ${GTEST_INCLUDE_DIRS})
    target_link_libraries(${TEST_NAME} PUBLIC ${GTEST_LIBRARIES} Threads::Threads)
    add_test(NAME parserTest COMMAND ${TEST_NAME})
endif()
