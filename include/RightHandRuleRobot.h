//
// Created by Kevin Shefkiu on 13/12/23.
//

#ifndef LAB8_RIGHTHANDRULEROBOT_H
#define LAB8_RIGHTHANDRULEROBOT_H

#include "Robot.h"

class RightHandRuleRobot : public Robot {
private:

    enum class orientation {
        up = 0, down, left, right
    };

public:

    RightHandRuleRobot();
    bool move(Maze& maze) override;

};


#endif //LAB8_RIGHTHANDRULEROBOT_H
