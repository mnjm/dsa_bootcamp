cmake_minimum_required(VERSION 3.10)

project(DSA_BootCamp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# LLQueue
set(LLQUEUE_SRCS
    src/LLQueue.cpp
    test/LLQueueMain.cpp
)
set(LLQUEUE_INCS
    inc/
)

add_executable(LLQueue ${LLQUEUE_SRCS})
target_include_directories(LLQueue PRIVATE ${LLQUEUE_INCS})
