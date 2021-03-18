//
// Created by coope on 3/16/2021.
//

#ifndef CHECKERS_PIECE_H
#define CHECKERS_PIECE_H
#include <cstdio>

class Piece {
public:
    Piece();
    explicit Piece(int player);
    int player = NULL;
    char name = NULL;
};


#endif //CHECKERS_PIECE_H
