#pragma once
#include <vector>
#include "Player.h"
#include "HumanPlayer.h"

class Rules
{
public:
	~Rules();
protected:
	Rules(int nb);

public:
	virtual bool isFinished()		= 0;
	virtual bool isDraw()			= 0;
	virtual bool whoWins()			= 0;
	virtual void playerPlays()		= 0;
	virtual void nextPlayerPlays()	= 0;

protected:
	std::vector<std::unique_ptr<Player>> playerList;
	const int NumberOfPlayers;
};






















