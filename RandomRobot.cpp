#include "RandomRobot.h"


bool RandomRobot::move(Maze& obj) {

	while (!obj.isEnd()) {
		Sleep(300);
		random_move(obj);
	}

	return true;
}


