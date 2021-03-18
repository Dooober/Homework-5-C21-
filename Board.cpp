//
// Created by coope on 3/16/2021.
//

#include "Board.h"

Board::Board() {

    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            if(i<3 && (i+j)%2==1) {
                gameBoard[i][j].content = Piece(2);
                gameBoard[i][j].position = {i, j};
            }
            else if (i>4 && (i+j)%2==1) {
                gameBoard[i][j].content = Piece(1);
                gameBoard[i][j].position = {i, j};
            }
            else {
                gameBoard[i][j].content = Piece();
                gameBoard[i][j].position = {i, j};
            }

        }
    }
}

void Board::printBoard() {
    for(auto & i : gameBoard) {
        printf("|");
        for(auto & j : i) {
            if(j.content.name == NULL) {
                printf("00");
            }
            else {
                printf("%d%c", j.content.player, j.content.name);
            }
            printf("|");
        }
        printf("\n");
    }
}
