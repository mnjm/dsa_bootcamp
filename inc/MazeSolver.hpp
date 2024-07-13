#ifndef MAZESOLVER_HPP
#define MAZESOLVER_HPP

#include "Maze.hpp"

bool walk(Maze& maze, std::array<int, 2> curr, CharMatrix& seen, Path& path);
Path solve_maze(Maze& maze, std::array<int,2> start);

#endif
