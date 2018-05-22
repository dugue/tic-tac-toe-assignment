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
	PieceFactory(map<string, Piece>);
	~PieceFactory();

	Piece createPiece(string playerName);

private:
	const map<string, Piece> playerToPieceMapping;
};

