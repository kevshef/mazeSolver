//
// Created by Kevin Shefkiu on 11/12/23.
//

#include "../include/Maze.h"

Maze::Maze(std::string fileLocation) {
    std::ifstream ifs;

    ifs.open(fileLocation);

    if(!ifs) {
        std::cerr << "File couldn't be open \n";
        exit(1);
    }

    std::string tempLine;


    for(int i = 0; i < 9; i++) {

        getline(ifs, tempLine);

        std::vector<char> tempVector;

        for(int j = 0; j < 9; j++) {

            tempVector.push_back(tempLine[j]);

            if(tempLine[j] == 'S') {
                _startingRow = i;
                _startingColumn = j;
            }

        }

        _matrix.push_back(tempVector);

    }

    ifs.close();

}

std::vector<std::vector<char>> Maze::getMaze(){
    return _matrix;
}


int Maze::getStartingRow() {
    return _startingRow;
}

int Maze::getStartingColumn() {
    return _startingColumn;
}

void Maze::setMaze(int row, int column, char character) {
    _matrix[row][column] = character;
}

std::ostream &operator<<(std::ostream& os, Maze& maze) {

    std::vector<std::vector<char>> tempVector = maze.getMaze();

    for(int i = 0; i < 9; i++) {

        for(int j = 0; j < 9; j++)
            os << tempVector[i][j];

        os << "\n";
    }

    return os;
}

