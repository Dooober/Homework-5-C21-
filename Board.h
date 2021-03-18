//
// Created by coope on 3/16/2021.
//

#ifndef CHECKERS_BOARD_H
#define CHECKERS_BOARD_H

#include <cstdio>
#include "Piece.h"
#define SIZE 8
#include <string>


class Board {
public:
    Board();
    Piece gameBoard[SIZE][SIZE];
    void printBoard();
    bool move(std::string yourMove, int player);
};


#endif //CHECKERS_BOARD_H
