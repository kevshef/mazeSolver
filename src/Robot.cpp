//
// Created by Kevin Shefkiu on 12/12/23.
//

#include "../include/Robot.h"

Robot::Robot() {
    _column = -1;
    _row = -1;
}


void Robot::move(Maze& maze, userMove _userMove) {

    if(_row == -1 && _column == -1) {
        _row = maze.getStartingRow();
        _column = maze.getStartingColumn();
    }

    int temp = static_cast<int>(_userMove);
    //int randomMove = std::rand() % 4;

    maze.nextMove(static_cast<int>(temp), &_row,&_column);

    std::cout << "Mossa fatta: " << temp << " riga e colonna " << _row << " , " << _column << std::endl;


    //std::cout<< maze;


};