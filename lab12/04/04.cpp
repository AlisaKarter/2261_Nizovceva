#include <iostream>
#include "box.cpp"
using namespace std;

box c(12, 10, 1);

int main(){

    box a(10, 8, 3);
    box *b = new box(8, 8, 8);

    a.addr();
    b->addr();
    c.addr();

    return 0;
}
