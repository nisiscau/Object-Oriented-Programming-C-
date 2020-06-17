#include <iostream>

void foo(){
    int x = 42;
    std::cout<<"x in foo(): "<<x<<std::endl;
    std::cout<<"&x in foo(): "<<&x<<std::endl;
}

int main(){
    int num = 7; //first element in stack memory --> the highest address
    std::cout<<"num in main(): "<<num<<std::endl;
    std::cout<<"&num in main(): "<<&num<<std::endl;

    foo(); //second element in stack memory --> lower address

    return 0;
}
