#include "RightHandRuleRobot.h"

bool RightHandRuleRobot::move(Maze& obj) {

	find_right(obj);

	while (!obj.isEnd()) {

		Sleep(600);

		switch (obj.direction_p())
		{
		case('<'):

			if (!obj.up())
				if (!obj.left())
					if (!obj.down())
						obj.right();
			break;

		case('>'):

			if (!obj.down())
				if (!obj.right())
					if (!obj.up())
						obj.left();
			break;

		case('\30'): //sta andando sopra

			if (!obj.right())
				if (!obj.up())
					if (!obj.left())
						obj.down();
			break;

		case('\31'): //sta andando giù

			if (!obj.left())
				if (!obj.down())
					if (!obj.right())
						obj.up();
			break;

		default:

			random_move(obj);
			break;
		}
	}
	return true;
}

bool RightHandRuleRobot::find_right(Maze& obj)
{
	bool find = false;
	while (!find) {

		Sleep(600);

		switch (obj.direction_p())
		{
		case('<'):

			if (obj.toup())
				random_move(obj);
			else
				find = true;

			break;

		case('>'):

			if (obj.todown())
				random_move(obj);
			else
				find = true;

			break;
		case('\30'): //sta andando sopra

			if (obj.toright())
				random_move(obj);
			else
				find = true;

			break;

		case('\31'): //sta andando giù

			if (obj.toleft())
				random_move(obj);
			else
				find = true;

			break;

		default:

			random_move(obj);
			break;
		}
	}
	return true;
}
