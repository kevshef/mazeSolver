//
// Created by Kevin Shefkiu on 13/12/23.
//

#include "../include/RandomRobot.h"

RandomRobot::RandomRobot() {
    _row = -1;
    _column = -1;
}

bool RandomRobot::move(Maze& maze) {

    if(_row == -1 && _column == -1) {
        _row = maze.getStartingRow();
        _column = maze.getStartingColumn();
    }

    int temp = std::rand() % 4;
    temp = static_cast<int>(temp);
    std::vector<std::vector<char>> matrix = maze.getMaze();

    try {

        switch (temp) {
            case 0:
                if (matrix[_row - 1][_column] == ' ') {
                    _row = _row - 1;
                    maze.setMaze(_row, _column, '|');
                    return false;
                }
                else if (matrix[_row - 1][_column] == 'E')
                    return true;
                break;

            case 1:
                if (matrix[_row + 1][_column] == ' ') {
                    _row = _row + 1;
                    maze.setMaze(_row, _column, '|');
                    return false;
                }
                else if (matrix[_row + 1][_column] == 'E')
                    return true;
                break;

            case 2:
                if (matrix[_row][_column - 1] == ' ') {
                    _column = _column - 1;
                    maze.setMaze(_row, _column, '<');
                    return false;
                }
                else if (matrix[_row][_column - 1] == 'E')
                    return true;
                break;

            case 3:
                if (matrix[_row][_column + 1] == ' ') {
                    _column = _column + 1;
                    maze.setMaze(_row, _column, '>');
                    return false;
                }
                else if (matrix[_row][_column + 1] == 'E')
                    return true;
                break;

        }

    } catch (std::out_of_range& e) {}

};

