#include "Robot.h"

int Robot::random_int() {

	srand(time(NULL));
	return rand() % 8;
}

bool Robot::random_move(Maze& obj)
{
	switch (random_int()) {

	case 0:
		obj.right();
		break;

	case 1:
		obj.left();
		break;

	case 2:
		obj.up();
		break;

	case 3:
		obj.down();
		break;

	case 4:
		obj.up();
		obj.right();

		break;


	case 5:
		//in alto a sinistra
		obj.up();
		obj.left();

		break;

	case 6:
		//in basso a destra
		obj.down();
		obj.right();

		break;

	case 7:
		//in basso a sinistra
		obj.down();
		obj.left();

		break;

	default: {
		std::cout << "qualcosa è andato storto";
		return false;
	}

	}
	return true;
}
