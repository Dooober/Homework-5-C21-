#include <iostream>
#include "tests.h"

int main() {
    std::cout << "Hello World!" << std::endl;

    if(tests()) {
        printf("Testing complete! Starting production");
    }
    return 0;
}
