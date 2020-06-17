#include <iostream>
#include "copy_constructor.h"

void foo(Cube cube) {
    /* Nothing */
}


int main(int argc, char const *argv[]) {
    /* code */
    Cube c; //default constructor
    foo(c); //copy constructor

    return 0;
}
