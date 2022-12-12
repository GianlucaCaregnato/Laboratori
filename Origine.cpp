#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include "Maze.h"
#include "Robot.h"
#include "RandomRobot.h"

int main() {

	Maze test = Maze();

	/*test.down();
	Sleep(500);

	test.left();
	Sleep(500);*/



	RandomRobot test1 = RandomRobot();
	while (!test.isEnd()) {

		Sleep(300);
		test1.move(test);
	}

		
}