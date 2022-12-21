#include "SmartRobot.h"

SmartRobot::SmartRobot(Maze& obj) {

	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 9; j++) {
			if (obj.maze(i, j) == ' ') 
				pass[i][j] = 1;
			if (obj.maze(i, j) == 'E') 
				pass[i][j] = 0;
			if (obj.maze(i, j) == '*')
				pass[i][j] = 1000000;
		}
	}
}

