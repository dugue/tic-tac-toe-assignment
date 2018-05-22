#include "BoardGame.h"
#include <iostream>

using namespace std;

BoardGame::BoardGame(int boardSize) : board(boardSize) {};


BoardGame::~BoardGame()
{
}

void BoardGame::createRules(std::unique_ptr<Rules> r) { rules = std::move(r); }

void BoardGame::newGame() {
	board.repaintConsole();


}
