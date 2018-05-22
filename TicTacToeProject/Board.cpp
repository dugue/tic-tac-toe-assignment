#include "Board.h"
#include "Piece.h"
#include <iostream>

Board::Board(int size) : size(size), piecesVector(size*size) {}

Board::~Board(){}

void Board::repaintConsole() {
	for (int i = 0; i < size; i++) {
		cout << "|";
		for (int j = 0; j < size; j++) {
			auto symbol = piecesVector.at(i*size + j).symbol;
			if (symbol == ' ') {
				cout << (i * size + j);
			}
			else {
				cout << symbol;
			}
			cout << "|";
		}
		cout << endl;
	}
}

void Board::reset() {piecesVector = std::vector<Piece>(size*size);}

void Board::setPiece(int i, Piece p) {
	piecesVector.at(i) = p;
}