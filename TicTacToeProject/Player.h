#pragma once
#include <string>

using namespace std;

class Player
{
public:
	Player(string name);
	~Player();
	virtual string takesTurn() = 0;

	string getName() {return name;}

private:
	const string name;
};

