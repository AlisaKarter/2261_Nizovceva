#include <iostream>
#include "box.cpp"
using namespace std;

int main(){

    box *x = new box(10, 6, 3);
    box *y = new box(8, 8, 8);

    if (y->V() > x->V()){
        std::cout << "Volume y greater than volume x" << std::endl;
    }else{
        std::cout << "Volume x greater than volume y" << std::endl;
    }

    if ((y->S() + x->S()) >= 400){
        std::cout << "Surface y+x >= 400" << std::endl;
    }else{
        std::cout << "Surface y+x < 400" << std::endl;
    }

    delete x;
    delete y;
    return 0;
}
