#pragma once
#include <string>

using namespace std;

class Player
{
public:
	Player(string name);
	~Player();
	virtual void takesTurn() = 0;

	inline string getName() {return name;}

private:
	const string name;
};

