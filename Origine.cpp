#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "Maze.h"
#include "Robot.h"
#include "RandomRobot.h"
#include "RightHandRuleRobot.h"

int main() {

	Maze test = Maze();

	RandomRobot test1 = RandomRobot();
	
	//test1.move(test);

	RightHandRuleRobot test2 = RightHandRuleRobot();

	test2.move(test);
		
}