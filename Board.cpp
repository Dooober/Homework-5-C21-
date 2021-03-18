//
// Created by coope on 3/16/2021.
//

#include "Board.h"

Board::Board() {

    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) {
            if(i<3 && (i+j)%2==1) {
                gameBoard[i][j] = Piece(2);
            }
            else if (i>4 && (i+j)%2==1) {
                gameBoard[i][j] = Piece(1);
            }
            else {
                gameBoard[i][j] = Piece();
            }

        }
    }
}

void Board::printBoard() {
    for(auto & i : gameBoard) {
        printf("|");
        for(auto & j : i) {
            printf("%d%c|", j.player, j.name);
        }
        printf("\n");
    }
}

bool Board::move(std::string yourMove, int player) {
    int i = (int) yourMove[0] - '0';
    int j = (int) yourMove[1] - '0';
    int x = (int) yourMove[3] - '0';
    int y = (int) yourMove[4] - '0';
    if(gameBoard[x][y].name != '0' || gameBoard[i][j].name == '0') {
        puts("invalid move\n");
        return false;
    }
    if((x+y)%2==0) {
        puts("invalid move\n");
        return false;
    }
    if (gameBoard[i][j].player == player) {
        Piece piece = gameBoard[i][j];
        gameBoard[x][y] = piece;
        gameBoard[i][j] = Piece();
        puts("Moving...\n");
        printBoard();
        return true;
    }
    else {
        puts("This is not your piece!\n");
        return false;
    }
}

