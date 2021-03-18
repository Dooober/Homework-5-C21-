//
// Created by coope on 3/16/2021.
//

#include "Piece.h"

Piece::Piece() = default;

Piece::Piece(int player) {
    this->player = player;
    this->name = 'c';
}
