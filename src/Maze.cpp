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

void Maze::nextMove(int temp, int *row, int *column) {

    try {

        switch (temp) {
            case 0:
                if (_matrix[*row - 1][*column] == ' ') {
                    *row = *row - 1;
                    _matrix[*row][*column] = '|';
                }

                break;
                /** else if (_matrix[*row - 1][*column] == 'E')
                    std::cout << "hai vinto"; **/

            case 1:
                if (_matrix[*row + 1][*column] == ' ') {
                    *row = *row + 1;
                    _matrix[*row][*column] = '|';
                }
                break;
                /** else if (_matrix[*row + 1][*column] == 'E')
                std::cout << "hai vinto"; **/

            case 2:
                if (_matrix[*row][*column - 1] == ' ') {
                    *column = *column - 1;
                    _matrix[*row][*column] = '<';
                }
                break;
                /** else if (_matrix[*row][*column - 1] == 'E')
                    std::cout << "hai vinto"; **/
            case 3:
                if (_matrix[*row][*column + 1] == ' ') {
                    *column = *column + 1;
                    _matrix[*row][*column] = '>';
                }
                break;
                /**else if (_matrix[*row][*column + 1] == 'E')
                    std::cout << "hai vinto";**/

        }

    } catch (std::out_of_range& e) {}

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

