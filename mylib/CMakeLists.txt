cmake_minimum_required(VERSION 3.6)

project(mylib)

set(MYLIB_SOURCES
    include/myclass.h
    src/myclass.cpp
	)

add_library(mylib SHARED ${MYLIB_SOURCES})

target_include_directories(mylib
PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        )

enable_testing()
add_subdirectory(test)