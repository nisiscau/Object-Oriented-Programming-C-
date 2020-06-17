#include <iostream>
#include "cube_constructor.h"

namespace uiuc {
    Cube::Cube(){
        length_ = 1; //default constructor sets the length to 1
        std::cout<<"Default Constructor invoked"<<std::endl;
    }
    //copy constructor: we take the reference of a previously defined cube objet: Const Cube &obj
    Cube::Cube(const Cube &obj){
        length_ = obj.length_;
        std::cout<<"Copy Constructor invoked"<<std::endl;

    }
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
