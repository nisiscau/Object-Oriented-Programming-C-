#include "Cube.h"
#include <iostream>

namespace uiuc {
    double Cube::getVolume(){
        return length_ * length_ * length_;
    }
    double Cube::getSurfaceArea(){
        return length_ * length_ * 6;
    }
    void Cube::setLength(double length){
         length_ = length;
    }
}

using std::cout;
using std::endl;
int main() {
    /* code */
    return 0;
}
