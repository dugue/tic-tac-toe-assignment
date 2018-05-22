
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "TicTacToe.h"

int main( int argc, char* argv[] )
{
	cout << "Enter board size:";
	int size;
	cin >> size;
	TicTacToe myGame(size);
	myGame.newGame();
	return EXIT_SUCCESS;
}














