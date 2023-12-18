//
// Created by Kevin Shefkiu on 12/12/23.
//

#ifndef LAB8_ROBOT_H
#define LAB8_ROBOT_H

#include <iostream>
#include "Maze.h"

class Robot {

protected:

    int _row;
    int _column;

public:

    virtual bool move(Maze& maze) = 0;

};




#endif //LAB8_ROBOT_H
