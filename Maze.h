#ifndef Maze_h
#define Maze_h

#include <fstream>
#include <string>
#include <iostream>
#include <process.h>

class Maze {

private:

	char maz[9][9]; //contiene al suo interno il labirinto
	int pos[2]; // contiene le cordinate attuali del robot
	bool win;

	void print(); //funzione che stampa lo spostamento del robot
	bool end();

public:

	/*	Legge da file il labirinto e lo salva in maz	*/
	Maze(); 

	/*	Funzioni di spostamento del robottino	*/
	bool up();
	bool down();
	bool left();
	bool right();

	bool toup();
	bool todown();
	bool toleft();
	bool toright();

	bool isEnd() { return win; };

	char direction_p() { return maz[pos[0]][pos[1]]; };

	char maze(int i, int j) { return maz[i][j]; };
};


#endif 


