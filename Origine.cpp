#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "Maze.h"
#include "Robot.h"
#include "RandomRobot.h"

int main() {

	Maze test = Maze();

	RandomRobot test1 = RandomRobot();
	while (true)
		test1.move(test);
}