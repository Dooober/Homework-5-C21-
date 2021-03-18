//
// Created by coope on 3/16/2021.
//

#ifndef CHECKERS_BOARD_H
#define CHECKERS_BOARD_H

#include <cstdio>
#include "Piece.h"
#define SIZE 8

typedef struct position {
    int x;
    int y;
} Position;

typedef struct cell {
    Position position;
    Piece content;
} Cell;

class Board {
public:
    Board();
    Cell gameBoard[SIZE][SIZE];
    void printBoard();
};


#endif //CHECKERS_BOARD_H
