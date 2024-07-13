cmake_minimum_required(VERSION 3.10)

project(DSA_BootCamp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(INCS
    inc/
)

# Queue
set(QUEUE_SRCS
    src/LinkedList.cpp
    src/Queue.cpp
    test/QueueMain.cpp
)
add_executable(Queue ${QUEUE_SRCS})
target_include_directories(Queue PRIVATE ${INCS})

# Stack
set(STACK_SRCS
    src/LinkedList.cpp
    src/Stack.cpp
    test/StackMain.cpp
)
add_executable(Stack ${STACK_SRCS})
target_include_directories(Stack PRIVATE ${INCS})

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

# DepthFirstTraversal
set(DEPTHFIRST_SRCS
    src/DepthFirstTraversal.cpp
    test/DepthFirstSearchTraversalMain.cpp
)
add_executable(Depth ${DEPTHFIRST_SRCS})
target_include_directories(Depth PRIVATE ${INCS})

set(BREADTHFRIST_SRCS
    src/BreadthFirstTraversal.cpp
    test/BreadthFirstSearchTraversalMain.cpp
)
add_executable(Breadth ${BREADTHFRIST_SRCS})
target_include_directories(Breadth PRIVATE ${INCS})
