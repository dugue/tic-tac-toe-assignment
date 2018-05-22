/*! \class TicTacToe
    \brief TicTacToeGame
    \author R�mi Dugu�
*/
#ifndef __TICTACTOE_H__
#define __TICTACTOE_H__

#include "BoardGame.h"
#include "Board.h"
#include "TicTacToeRules.h"

class TicTacToe : public BoardGame
{
  public :
    TicTacToe(int boardSize);
    virtual ~TicTacToe( void );

};

#endif 
















