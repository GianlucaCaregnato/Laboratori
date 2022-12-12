#ifndef RandomRobot_h
#define RandomRobot_h
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "Robot.h"

class RandomRobot:public Robot {
public:
	virtual bool move(Maze&);

	virtual int random_int();
};

#endif