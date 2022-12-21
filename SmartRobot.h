#ifndef SmartRobot_h
#define SmartRobot_h
#include "Robot.h"


class SmartRobot : public Robot {

public:

	SmartRobot(Maze&);

private:

	int pass[9][9];


};

#endif