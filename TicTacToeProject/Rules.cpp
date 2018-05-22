#include "Rules.h"
#include <iostream>

using namespace std;

Rules::Rules(int nb) : NumberOfPlayers(nb) {
	string namePlayer;
	for (int i = 0; i < nb; i++) {
		cout << "Enter Player"<<i<<"'s name:";
		cin >> namePlayer;
		playerList.push_back(std::unique_ptr<Player>(new HumanPlayer(namePlayer)));
	}
};
Rules::~Rules(){}

void Rules::reset() {
	playerIterator = playerList.begin();
}

void Rules::nextPlayer() {
	if (++playerIterator == playerList.end())
		playerIterator = playerList.begin();
}


























