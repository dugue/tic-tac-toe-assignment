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
	return false;
}
bool TicTacToeRules::isDraw(const Board &board) { return false; }
bool TicTacToeRules::whoWins(const Board &board) { return true; }
void TicTacToeRules::playerChoosesColor(){
	string chosenSymbol;
	auto playerList = getPlayerList();
	while (chosenSymbol != "X" && chosenSymbol != "O") {
		cout << playerList.at(0)->getName() << ", chose symbol X or O: " << endl;
		cin >> chosenSymbol;
		cout << "You chose " << chosenSymbol << endl;
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
	pieceFactory = PieceFactory(playerToPieceMapping);
}
void TicTacToeRules::playerPlays(Board &board) {
	auto (player) = *(getPlayerIterator());
	string move;
	bool isCorrect = false;
	while (!isCorrect){
		move = player->takesTurn();
		isCorrect = isMoveCorrect(move, board);
	}
	board.setPiece(std::stoi(move), pieceFactory.createPiece(player->getName()));
}
bool TicTacToeRules::isMoveCorrect(string move, const Board &b) {
	int pieceIndex;
	try{pieceIndex = std::stoi(move);}
	catch (exception e) { return false; }
	auto boardVector = b.getBoardVector();
	bool isCorrect;
	if (pieceIndex < boardVector.size()) {
		boardVector.at(pieceIndex).symbol == ' ' ? isCorrect = true : isCorrect = false;
		return isCorrect;
	}
	else {
		return false;
	}
};

