#ifndef Robot_h
#define Robot_h
#include "Maze.h"

class Robot {

	virtual bool move(Maze&) = 0;

	//virtual int random_int();
};

#endif