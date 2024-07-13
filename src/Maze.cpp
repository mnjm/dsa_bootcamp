#include <cassert>
#include <iostream>
#include <stdexcept>
#include <fstream>
#include "Maze.hpp"

CharMatrix::CharMatrix(unsigned int _nrows, unsigned int _ncols) {
    nrows = _nrows;
    ncols = _ncols;
    buffer = new char[nrows*ncols]();
}

bool CharMatrix::check_out_of_bounds(unsigned int i, unsigned int j) {
    return  (i >= nrows) || (j >= ncols);
}

char CharMatrix::get(unsigned int i, unsigned int j) {
    if (check_out_of_bounds(i, j)) {
        return '\0';
    }
    unsigned int idx = (i * nrows) + j;
    return buffer[idx];
}

bool CharMatrix::put(unsigned int i, unsigned int j, char ch) {
    if (check_out_of_bounds(i, j)) {
        return false;
    }
    unsigned int idx = (i * nrows) + j;
    buffer[idx] = ch;
    return true;
}

CharMatrix::~CharMatrix() {
    delete buffer;
}

Maze::Maze(unsigned int _nrows, unsigned int _ncols, std::string filepath) {
    nrows = _nrows;
    ncols = _ncols;
    grid = new CharMatrix(nrows, ncols);
    char a_char;

    // open file
    std::ifstream file(filepath);
    if (false == file.is_open()) {
        throw std::runtime_error("Failed to open file");
    }

    // read from file
    for(unsigned int i=0; i < nrows; ++i) {
        for (unsigned int j=0; j < ncols; ++j) {
            if (!(file.get(a_char))) {
                throw std::runtime_error("Error reading from file");
            }
            assert(a_char != '\n');
            assert(grid->put(i, j, a_char));
        }
        if (!(file.get(a_char))) {
            throw std::runtime_error("Error reading from file");
        }
        assert(a_char == '\n');
    }

    file.close();
}

void Maze::printMaze() {
    for(unsigned int i=0; i < nrows; ++i) {
        for (unsigned int j=0; j < ncols; ++j) {
            std::cout << grid->get(i, j);
        }
        std::cout << std::endl;
    }
}

Maze::~Maze() {
    delete grid;
}

void print_maze_with_path(Maze& maze, Path& path) {
    for (int i=0; i < path.size(); ++i) {
        std::array<int, 2> point = path.at(i);
        int y = point[0], x = point[1];
        maze.grid->put(y, x, '.');
    }
    maze.printMaze();
}
