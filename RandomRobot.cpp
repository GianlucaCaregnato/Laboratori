#include "RandomRobot.h"


bool RandomRobot::move(Maze& obj) {

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

			return true;


		case 5: 
			//in alto a sinistra
			obj.up();
			obj.left();

			return true;
		
		case 6:
			//in basso a destra
			obj.down();
			obj.right();

			return true;

		case 7:
			//in basso a sinistra
			obj.down();
			obj.left();

			return true;

		default: {
			std::cout << "qualcosa è andato storto";
			break;
		}

	}
}

int RandomRobot::random_int() {

	srand(time(NULL));
	return rand() % 8;
}