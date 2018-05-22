#include "TicTacToeRules.h"
#include <string>
#include <iostream>

using namespace std;

TicTacToeRules::TicTacToeRules() : Rules(2){}

TicTacToeRules::~TicTacToeRules(){}

bool TicTacToeRules::isFinished() { return true; }
bool TicTacToeRules::isDraw() { return false; }
bool TicTacToeRules::whoWins() { return true; }
void TicTacToeRules::playerPlays() {};
void TicTacToeRules::nextPlayerPlays() {};