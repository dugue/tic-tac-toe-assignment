#pragma once
#include "Rules.h"
class TicTacToeRules :
	public Rules
{
public:
	TicTacToeRules();
	~TicTacToeRules();

	virtual bool isFinished()		override final;
	virtual bool isDraw()			override final;
	virtual bool whoWins()			override final;
	virtual void playerPlays()		override final;
	virtual void nextPlayerPlays()	override final;
};

