#include "BoardGame.h"
#include <iostream>

using namespace std;

BoardGame::BoardGame(int boardSize) : board(boardSize) {};

BoardGame::~BoardGame(){}

void BoardGame::createRules(std::unique_ptr<Rules> r) { rules = std::move(r); }

void BoardGame::beginGame() {
	rules->playerChoosesColor();
	board.reset();
	rules->reset();
	bool endGame = false;
	bool isVictory = false;
	bool isDraw = false;
	while (!endGame) {
		board.repaintConsole();
		rules->playerPlays(board);
		rules->isVictory(board)			? isVictory = true : isVictory = false;
		if(!isVictory)
			rules->isDraw(board)		? isDraw	= true : isDraw = false;
		if (isVictory || isDraw)
			endGame = true;
		rules->nextPlayer();
	}
}
