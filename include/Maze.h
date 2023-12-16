//
// Created by Kevin Shefkiu on 11/12/23.
//

#ifndef LAB8_MAZE_H
#define LAB8_MAZE_H

#include <iostream>
#include <fstream>


class Maze {

private:

    std::string _fileLocation;

    std::vector<std::vector<char>> _matrix;

    int _startingRow, _startingColumn;

public:

    Maze(std::string fileLocation);

    std::vector<std::vector<char>> getMaze();

    int getStartingRow();

    int getStartingColumn();

    void nextMove(int temp, int *row, int *column);

    friend std::ostream &operator<<(std::ostream &os, Maze& maze);

};




#endif //LAB8_MAZE_H
