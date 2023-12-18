//
// Created by Kevin Shefkiu on 13/12/23.
//

#include "../include/RightHandRuleRobot.h"

RightHandRuleRobot::RightHandRuleRobot() {
    _row = -1;
    _column = -1;
}

bool RightHandRuleRobot::move(Maze &maze) {

    std::vector<std::vector<char>> matrix = maze.getMaze();


    if(_row == -1 && _column == -1) {

        orientation currentOrientation;
        _row = maze.getStartingRow();
        _column = maze.getStartingColumn();

        if(matrix[_row - 1][_column] == ' ' && matrix[_row][_column - 1] == ' '
            && matrix[_row + 1][_column] == ' ' && matrix[_row][_column + 1] == ' '){

             currentOrientation = orientation::up;
        } else {

        }
    }



    switch (currentOrientation) {
        case orientation::up :
                if(matrix[_row - 1][_column] == '*')
                    currentOrientation = orientation::left;
                else {
                    _row = _row - 1;
                    matrix[_row - 1][_column] = '|';
                }

            break;
        case orientation::down:
            if(matrix[_row - 1][_column] == '*')
                currentOrientation = orientation::left;
            else {
                _row = _row - 1;
                matrix[_row - 1][_column] = '|';
            }
            break;
        case orientation::left :

            break;
        case orientation::right :

            break;
    }

    return false;
}