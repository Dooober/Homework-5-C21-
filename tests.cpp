//
// Created by coope on 3/16/2021.
//

#include "tests.h"

bool tests () {
    bool test1 = testCreateBoard();
    bool test2 = testMove();

    bool ok = test1 && test2;

    if(ok) {
        printf("All tests passed!\n");
    }
    else {
        printf("One or more tests have failed.\n");
    }
    return ok;
}

bool testCreateBoard() {
    puts("Starting testCreateBoard...\n");
    Board board;

    board.printBoard();

    puts("Does this look like a checker board? (y/n)");
    char ok = getchar();

    if(ok == 'y') {
        puts("testCreateBoard passed!\n");
        return true;
    }
    else {
        puts("testCreateBoard failed.\n");
        return false;
    }
}

bool testMove() {
    puts("Starting testMove...\n");
    Board board;
    //Standard movement
    bool ok = board.move("50 41", 1);
    //trying to move a piece that is not there
    bool ok1 = !board.move("50 41", 1);
    //trying to move a piece off of the diagonal
    bool ok2 = !board.move("41 31", 1);
    //trying to move another player's piece
    bool ok3 = !board.move("41 30", 2);

    if(ok && ok1 && ok2 && ok3) {
        puts("testCreateBoard passed!\n");
        return true;
    }
    else {
        puts("testCreateBoard failed.\n");
        return false;
    }
}