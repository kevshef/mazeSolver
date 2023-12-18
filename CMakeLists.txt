cmake_minimum_required(VERSION 3.27)
project(Lab8)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab8 main.cpp
        src/Maze.cpp
        include/Maze.h
        include/Robot.h
        src/RightHandRuleRobot.cpp
        include/RightHandRuleRobot.h
        src/RandomRobot.cpp
        include/RandomRobot.h
)
