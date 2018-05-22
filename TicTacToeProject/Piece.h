#pragma once
class Piece
{
public:
	Piece();
	Piece(char symbol);
	Piece& operator=(const Piece& b) { symbol = b.symbol ;  return *this; }
	~Piece();
	char symbol;
};

