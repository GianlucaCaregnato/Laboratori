#include "Maze.h"

void Maze::print() {

	system("cls");

	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 9; j++) {
			std::cout << maz[i][j];
		}
		std::cout << std::endl;
	}

}

bool Maze::end() {

	std::cout << "HAI VINTOOO !!!!" << std::endl;

	win = true;

	return true;
}

Maze::Maze() 

	:maz{ }, pos{ 6 , 4 }, win{ false } {
	class exception {};

	std::fstream Myfile;
	Myfile.open("Labirinto.txt", std::ios::in);
	if (!Myfile.is_open()) {
		throw exception();
	}
	std::string temp;
	int j = 0;
	while (std::getline(Myfile, temp)) {
		for (int i = 0; i < 9; i++) {
			maz[j][i] = temp[i];
		}
		j++;
	}

	Myfile.close();

	print();
}
bool Maze::toleft() {
	if (maz[pos[0]][pos[1] - 1] == ' ')
		return true;
	return false;
}
bool Maze::left() {

	if (toleft()) { //se la posizione dove si vuole andare è buona:

		maz[pos[0]][pos[1] - 1] = '<'; //Metto una R sul posto nuvo
		maz[pos[0]][pos[1]] = ' '; //Cancello la posizione del vecchio robot
		pos[1] = pos[1] - 1;

		print();
		return true;
	}

	if (maz[pos[0]][pos[1] - 1] == '*')
		return false;

	if (maz[pos[0]][pos[1] - 1] == 'E')
		return end();

	return false;
}

bool Maze::toright() {
	if (maz[pos[0]][pos[1] + 1] == ' ')
		return true;
	return false;
}

bool Maze::right() {

	if (toright()) { //se la posizione dove si vuole andare è buona:

		maz[pos[0]][pos[1] + 1] = '>'; //Metto una R sul posto nuvo
		maz[pos[0]][pos[1]] = ' '; //Cancello la posizione del vecchio robot
		pos[1] = pos[1] + 1;

		print();
		return true;
	}

	if (maz[pos[0]][pos[1] + 1] == '*')
		return false;

	if (maz[pos[0]][pos[1] + 1] == 'E')
		return end();

	return false;
}

bool Maze::toup() {
	if (maz[pos[0] - 1][pos[1]] == ' ')
		return true;
	return false;
}

bool Maze::up() {

	if (toup()) { //se la posizione dove si vuole andare è buona:

		maz[pos[0] - 1][pos[1]] = '\30'; //Metto una R sul posto nuvo
		maz[pos[0]][pos[1]] = ' '; //Cancello la posizione del vecchio robot
		pos[0] = pos[0] - 1;

		print();
		return true;
	}

	if (maz[pos[0] - 1][pos[1]] == '*')
		return false;

	if (maz[pos[0] - 1][pos[1]] == 'E')
		return end();

	return false;
}

bool Maze::todown() {
	if (maz[pos[0] + 1][pos[1]] == ' ')
		return true;
	return false;
}

bool Maze::down() {

	if (todown()) { //se la posizione dove si vuole andare è buona:

		maz[pos[0] + 1][pos[1]] = '\31'; //Metto una R sul posto nuvo
		maz[pos[0]][pos[1]] = ' '; //Cancello la posizione del vecchio robot
		pos[0] = pos[0] + 1;

		print();
		return true;
	}

	if (maz[pos[0] + 1][pos[1]] == '*')
		return false;

	if (maz[pos[0] + 1][pos[1]] == 'E')
		return end();

	return false;
}