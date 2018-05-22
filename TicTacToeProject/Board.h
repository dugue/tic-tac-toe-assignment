#ifndef _BOARD_H_
#define _BOARD_H_

#include <vector>
#include "Piece.h"

using namespace std;

class Board{
public:
	Board(int size);
	Board& operator=(const Board& b){return *this;}

	~Board();
	
	void repaintConsole();
	void reset();

	int getSize() const { return size; }	
	vector<Piece> const &getBoardVector() const { return piecesVector; };

private:
	vector<Piece> piecesVector;
	const int size;
};

#endif





















