cmake_minimum_required(VERSION 3.10)

project(DSA_BootCamp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(INCS
    inc/
)

# LLQueue
set(LLQUEUE_SRCS
    src/LLQueue.cpp
    test/LLQueueMain.cpp
)
add_executable(LLQueue ${LLQUEUE_SRCS})
target_include_directories(LLQueue PRIVATE ${INCS})

# LLStack
set(LLSTACK_SRCS
    src/LLStack.cpp
    test/LLStackMain.cpp
)
add_executable(LLStack ${LLSTACK_SRCS})
target_include_directories(LLStack PRIVATE ${INCS})
