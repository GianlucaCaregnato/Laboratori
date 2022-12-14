#ifndef Robot_h
#define Robot_h
#include "Maze.h"

class Robot {

protected:

	virtual bool move(Maze&) = 0;

	int random_int();

	bool random_move(Maze&);
};

#endif