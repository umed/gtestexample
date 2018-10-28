cmake_minimum_required(VERSION 3.6)

project(mylib_test)

set(MYLIB_TEST_SOURCES
    myclass_test.cpp)

add_executable(mylib_test ${MYLIB_TEST_SOURCES})
target_link_libraries(mylib_test PRIVATE gtest gmock mylib)


add_test(NAME MY_TEST COMMAND mylib_test)