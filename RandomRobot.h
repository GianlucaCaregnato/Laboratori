#ifndef RandomRobot_h
#define RandomRobot_h
#include "Robot.h"

class RandomRobot:public Robot {
public:
	virtual bool move(Maze&);

	virtual int random_int();
};

#endif