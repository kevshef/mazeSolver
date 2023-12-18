//
// Created by Kevin Shefkiu on 13/12/23.
//

#ifndef LAB8_RANDOMROBOT_H
#define LAB8_RANDOMROBOT_H


#include "Robot.h"

class RandomRobot : public Robot {

public:
     RandomRobot();
     bool move(Maze& maze) override;

};


#endif //LAB8_RANDOMROBOT_H
