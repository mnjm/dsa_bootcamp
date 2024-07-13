#include "Maze.hpp"
#include "MazeSolver.hpp"

int dir_y[4] = { -1, 0, 1, 0 };
int dir_x[4] = { 0, 1, 0, -1 };
const char wall = '#';
const char end = 'E';

bool walk(Maze& maze, std::array<int, 2> curr, CharMatrix& seen, Path& path) {
    int x = curr[1], y = curr[0];
    char cell;
    // base
    if ( !(0 < y < maze.nrows) || !(0 < x < maze.ncols))
    {
        return false;
    }
    cell = maze.grid->get(y,x);
    if (wall == cell) {
        return false;
    }
    if (end == cell) {
        return true;
    }
    if (seen.get(y, x) == '1') {
        return false;
    }

    // recurse
    // make a seen
    seen.put(y, x, '1');
    for (int i=0; i<4; ++i) {
        int xx = x + dir_x[i], yy = y + dir_y[i];
        path.push_back({yy, xx});
        if (true == walk(maze, {yy, xx}, seen, path)) {
            return true;
        }
        path.pop_back();
    }

    return false;
}

Path solve_maze(Maze& maze, std::array<int,2> start) {
    Path path;
    CharMatrix seen(maze.nrows, maze.ncols);
    walk(maze, start, seen, path);
    return path;
}
