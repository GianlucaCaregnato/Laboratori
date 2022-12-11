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

	system("cls");

	std::cout << "WIN" << std::endl;

	return true;
}

Maze::Maze() 

	:maz{ }, pos{ 7 , 4 } {
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

bool Maze::up() {

	if (maz[pos[0]][pos[1] - 1] == ' ') { //se la posizione dove si vuole andare è buona:

		maz[pos[0]][pos[1] - 1] = 'R'; //Metto una R sul posto nuvo
		maz[pos[0]][pos[1]] = ' '; //Cancello la posizione del vecchio robot

		return true;
	}

	if (maz[pos[0]][pos[1] - 1] == '*')
		return false;

	if (maz[pos[0]][pos[1] - 1] == '*')
		return end();

	return false;
}

bool Maze::down() {

	return false;
}

bool Maze::left() {

	return false;
}

bool Maze::right() {

	return false;
}
