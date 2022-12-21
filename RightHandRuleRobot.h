#ifndef RightHandRuleRobot_h
#define RightHandRuleRobot_h
#include "Robot.h"
#include <ctime>
#include <cstdlib>
#include <windows.h>

class RightHandRuleRobot: public Robot {

public:

	bool move(Maze&);

private:
	bool find_right(Maze&);

};

#endif