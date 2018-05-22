#pragma once
#include "Board.h"
#include "Rules.h"
#include <vector>

class BoardGame
{
public:
	BoardGame(int boardSize);
	~BoardGame();

	void beginGame();

protected:
	void createRules(std::unique_ptr<Rules> rules);

private:
	Board board;
	std::unique_ptr<Rules> rules;
};

 
















