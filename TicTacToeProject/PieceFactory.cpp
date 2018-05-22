#include "PieceFactory.h"

using namespace std;

PieceFactory::PieceFactory(map<string,Piece>){}

PieceFactory::~PieceFactory(){}

Piece PieceFactory::createPiece(std::string playerName) {
	return playerToPieceMapping.find(playerName)->second;
};
