//
// Created by coope on 3/16/2021.
//

#include "Board.h"

Board::Board() {

    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            gameBoard[i][j].content = Piece();
            gameBoard[i][j].position = {i, j};
        }
    }
}

void Board::printBoard() {
    for(auto & i : gameBoard) {
        printf("|");
        for(auto & j : i) {
            if(j.content.name == NULL) {
                printf("0");
            }
            else {
                printf("%c", j.content.name);
            }
            printf("|");
        }
        printf("\n");
    }
}
