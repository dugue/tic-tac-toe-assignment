#pragma once
#include "Player.h"
class HumanPlayer :
	public Player
{
public:
	HumanPlayer(std::string name);
	~HumanPlayer();
	virtual void takesTurn() override;
};





























