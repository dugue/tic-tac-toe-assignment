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
	void repaint();

	int constexpr getSize();

private:
	vector<Piece> piecesVector;
	const int size;
	int returnPiece(int x, int y);
};

#endif





















