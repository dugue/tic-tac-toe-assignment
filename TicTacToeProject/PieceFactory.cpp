#include "PieceFactory.h"

using namespace std;

PieceFactory::PieceFactory() {};
PieceFactory::PieceFactory(map<string, Piece> mapping) : playerToPieceMapping(mapping) {};

PieceFactory::~PieceFactory(){}

Piece PieceFactory::createPiece(std::string playerName) {
	auto it = playerToPieceMapping.find(playerName);
	return it->second;
	
};
