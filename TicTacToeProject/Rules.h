#pragma once
#include <vector>
#include "Player.h"
#include "HumanPlayer.h"
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
	virtual void playerPlays()					= 0;
	virtual bool isVictory(const Board &board)	= 0;
	virtual bool isDraw(const Board &board)		= 0;
	virtual bool whoWins(const Board &board)	= 0;
	void reset();
	virtual void nextPlayer();
protected:
	virtual void setupPieceFactory()	= 0;
	virtual bool placePiece()			= 0;
	virtual bool isMoveCorrect()		= 0;
	inline auto getPlayerList() { return playerList; }

private:
	vector<unique_ptr<Player>> playerList;
	std::vector<unique_ptr<Player>>::const_iterator playerIterator;
	const int NumberOfPlayers;
	PieceFactory pieceFactory;
};






















