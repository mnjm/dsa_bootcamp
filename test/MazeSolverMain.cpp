#include "Maze.hpp"
#include "MazeSolver.hpp"
#include <iostream>

int main(int argc, char** argv) {
    Path path;
    std::array<int,2> start;

    Maze m1(3, 3, "../inputs/MazeInput0.txt");
    start = {2, 1};
    std::cout << "Input maze" << std::endl;
    m1.printMaze();
    std::cout << "Path" << std::endl;
    path = solve_maze(m1, start);
    print_maze_with_path(m1, path);

    Maze m2(6, 7, "../inputs/MazeInput1.txt");
    start = {5, 5};
    std::cout << "Input maze" << std::endl;
    m2.printMaze();
    std::cout << "Path" << std::endl;
    path = solve_maze(m2, start);
    print_maze_with_path(m2, path);

    Maze m3(5, 6, "../inputs/MazeInput2.txt");
    start = {3, 3};
    std::cout << "Input maze" << std::endl;
    m3.printMaze();
    std::cout << "Path" << std::endl;
    path = solve_maze(m3, start);
    print_maze_with_path(m3, path);
}
