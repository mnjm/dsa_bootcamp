#ifndef MAZE_HPP
#define MAZE_HPP

#include <array>
#include <string>
#include <vector>

class CharMatrix {
    unsigned int nrows;
    unsigned int ncols;
    char* buffer;
public:
    CharMatrix(unsigned int _nrows, unsigned int _ncols);
    bool check_out_of_bounds(unsigned int i, unsigned int j);
    char get(unsigned int i, unsigned int j);
    bool put(unsigned int i, unsigned int j, char ch);
    ~CharMatrix();
};

typedef std::vector<std::array<int,2>> Path;

class Maze {
public:
    unsigned int nrows;
    unsigned int ncols;
    CharMatrix* grid;
    Maze(unsigned int _nrows, unsigned int _ncols, std::string filepath);
    ~Maze();
    void printMaze();
};

void print_maze_with_path(Maze& maze, Path& path);

#endif
