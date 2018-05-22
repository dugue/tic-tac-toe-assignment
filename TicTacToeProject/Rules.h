#pragma once
#include <vector>
#include "Player.h"
#include "HumanTicTacToePlayer.h"
#include "PieceFactory.h"
#include "Board.h"

using namespace std;

class Rules
{
public:
	~Rules();
protected:
	Rules(int nb);

public:
	virtual void playerChoosesColor()			= 0;
	virtual void playerPlays(Board &board)= 0;
	virtual bool isVictory(const Board &board)	= 0;
	virtual bool isDraw(const Board &board)		= 0;
	virtual bool whoWins(const Board &board)	= 0;
	void reset();
	virtual void nextPlayer();
protected:
	virtual bool isMoveCorrect(string, const Board &b)	= 0;
	auto const &getPlayerIterator() const	{ return playerIterator; }
	auto const &getPlayerList()		const	{ return playerList;     }
	PieceFactory pieceFactory;

private:
	vector<shared_ptr<Player>> playerList;
	std::vector<shared_ptr<Player>>::const_iterator playerIterator;
	const int NumberOfPlayers;
};






















