#pragma once
#include <map>
#include <string>
#include "OPiece.h"
#include "XPiece.h"
#include "Piece.h"

using namespace std;

class PieceFactory
{
public:
	PieceFactory();
	PieceFactory(map<string, Piece>);
	~PieceFactory();

	Piece createPiece(string playerName);

private:
	map<string, Piece> playerToPieceMapping;
};

