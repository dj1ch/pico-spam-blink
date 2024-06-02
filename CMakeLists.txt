cmake_minimum_required(VERSION 3.13)

set(PICO_SDK_FETCH_FROM_GIT ON)

include(${CMAKE_CURRENT_LIST_DIR}/cmake/pico_sdk_import.cmake)

project(spam-blink C CXX ASM)

pico_sdk_init()

include_directories(include)

add_executable(spam-blink
    src/spam-blink.c
    include/spam-blink.h
)

target_link_libraries(spam-blink 
    pico_stdio
    pico_stdlib
)

pico_add_extra_outputs(spam-blink)