#include "Cube.h"
#include <iostream>



int main() {
    /* code */
    uiuc::Cube *c1 =new uiuc::Cube;
    uiuc::Cube *c2 = c1; //*c1 and *c2 point to that same new cube

    c2->setLength(10.0);

    delete c2;
    //delete c1; //error, the data is no longer there!


    return 0;
}
