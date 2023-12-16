#include <iostream>

#include "include/Maze.h"
#include "include/Robot.h"



int main() {

    Maze test("/Users/kevinshefkiu/Desktop/Università/Lab Di Programmazione/Lab8/tester.txt");
    Robot robot;


    robot.move(test, userMove::left);
    robot.move(test, userMove::up);
    robot.move(test, userMove::up);
    robot.move(test, userMove::left);
    robot.move(test, userMove::left);
    robot.move(test, userMove::up);
    robot.move(test, userMove::up);

    std::cout << test;
    return 0;
}
