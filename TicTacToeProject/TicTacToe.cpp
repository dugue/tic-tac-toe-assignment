#include "TicTacToe.h"
#include <iostream>

using namespace std;

TicTacToe::TicTacToe(int boardSize) : BoardGame(boardSize)
{
	createRules(unique_ptr<Rules>(new TicTacToeRules));
}

TicTacToe::~TicTacToe( void )
{
}
