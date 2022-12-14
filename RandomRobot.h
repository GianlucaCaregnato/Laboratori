#ifndef RandomRobot_h
#define RandomRobot_h
#include "Robot.h"
#include <ctime>
#include <cstdlib>
#include <windows.h>

class RandomRobot:public Robot {

public:
	virtual bool move(Maze&);

};

#endif