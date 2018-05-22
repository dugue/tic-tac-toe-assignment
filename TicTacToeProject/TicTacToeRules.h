#pragma once
#include "Rules.h"
class TicTacToeRules :
	public Rules
{
public:
	TicTacToeRules();
	~TicTacToeRules();

	virtual bool isVictory(const Board &board)					override final;
	virtual bool isDraw(const Board &board)						override final;
	virtual bool whoWins(const Board &board)					override final;
	virtual void playerPlays(Board &board)				override final;
	virtual void playerChoosesColor()							override final;
	virtual bool isMoveCorrect(string move, const Board &b)		override final;
};

