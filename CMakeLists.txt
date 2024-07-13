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
    test/LLQueueMain.cpp
)
add_executable(LLQueue ${LLQUEUE_SRCS})
target_include_directories(LLQueue PRIVATE ${INCS})

# LLStack
set(LLSTACK_SRCS
    test/LLStackMain.cpp
)
add_executable(LLStack ${LLSTACK_SRCS})
target_include_directories(LLStack PRIVATE ${INCS})

# MazeSolver
set(MAZESOLVER_SRCS
    src/Maze.cpp
    src/MazeSolver.cpp
    test/MazeSolverMain.cpp
)
add_executable(MazeSolver ${MAZESOLVER_SRCS})
target_include_directories(MazeSolver PRIVATE ${INCS})

# QuickSort
set(QUICKSORT_SRCS
    src/QuickSort.cpp
    test/QuickSortMain.cpp
)
add_executable(QuickSort ${QUICKSORT_SRCS})
target_include_directories(QuickSort PRIVATE ${INCS})
