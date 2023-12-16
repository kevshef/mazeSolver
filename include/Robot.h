//
// Created by Kevin Shefkiu on 12/12/23.
//

#ifndef LAB8_ROBOT_H
#define LAB8_ROBOT_H

#include <iostream>
#include "Maze.h"

enum class userMove{
    up = 0, down, left, right
};

class Robot {

private:

    int _row;
    int _column;

public:

    Robot();
    void move(Maze& maze, userMove _userMove);

};


#endif //LAB8_ROBOT_H
