#include "TicTacToeRules.h"
#include "Board.h"
#include <string>
#include <iostream>

using namespace std;

TicTacToeRules::TicTacToeRules() : Rules(2){}

TicTacToeRules::~TicTacToeRules(){}

bool TicTacToeRules::isVictory(const Board &board) {
	for (int i = 0; i < board.getSize(); i++) {

	}	
}
bool TicTacToeRules::isDraw(const Board &board) { return false; }
bool TicTacToeRules::whoWins(const Board &board) { return true; }
void TicTacToeRules::playerPlays() {}
void TicTacToeRules::nextPlayer() {}
void TicTacToeRules::playerChoosesColor(){
	string chosenSymbol;
	auto playerList = getPlayerList();
	while (chosenSymbol != "X" || chosenSymbol != "O") {
		cout << playerList.at(0)->getName() << ", chose symbol X or O: " << endl;
	}
	map<string, Piece> playerToPieceMapping;
	if (chosenSymbol == "X") {
		playerToPieceMapping.emplace(pair<string, Piece>(playerList.at(0)->getName(), XPiece()));
		playerToPieceMapping.emplace(pair<string, Piece>(playerList.at(1)->getName(), OPiece()));
	}
	else {
		playerToPieceMapping.emplace(pair<string, Piece>(playerList.at(0)->getName(), OPiece()));
		playerToPieceMapping.emplace(pair<string, Piece>(playerList.at(1)->getName(), XPiece()));
	}
}

