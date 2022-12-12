#include "RandomRobot.h"


bool RandomRobot::move(Maze& obj) {

	switch (random_int()) {

		case 0:
			obj.right();

		case 1:
			obj.left();

		case 2:
			obj.up();

		case 3:
			obj.down();

		case 4: {

			obj.up();
			obj.right();
		}
		case 5: {
			//in alto a sinistra
			obj.up();
			obj.left();
		}
		case 6: {
			//in basso a destra
			obj.down();
			obj.right();
		}
		case 7: {
			//in basso a sinistra
			obj.down();
			obj.left();
		}
		default: {
			std::cout << "qualcosa è andato storto";
			break;
		}

	}
	Sleep(1000);
	return false;
}

int RandomRobot::random_int() {

	srand(time(NULL));
	return rand() % 8;
}