//
// Created by coope on 3/16/2021.
//

#include "tests.h"

bool tests () {
    bool test1 = testCreateBoard();

    bool ok = test1;

    if(ok) {
        printf("All tests passed!");
    }
    else {
        printf("One or more tests have failed.");
    }
    return ok;
}

bool testCreateBoard() {
    puts("Starting testCreateBoard...");
    Board board;

    board.printBoard();

    puts("Does this look like a checker board? (y/n)");
    char ok = getchar();

    if(ok == 'y') {
        puts("testCreateBoard passed!");
        return true;
    }
    else {
        puts("testCreateBoard failed.");
        return false;
    }
}