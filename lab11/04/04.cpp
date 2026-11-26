#include <iostream>
#include <vector>
using namespace std;

int G1[128], G2[128];

void foo(void){
    int L1[128], L2[128];
    static int S1[128], S2[128];
    int *H1 = new int [128];
    int *H2 = new int [128];
    std::cout << "global 1 " << &G1[0] << ' ' << &G1[127] << std::endl;
    std::cout << "global 2 " << &G2[0] << ' ' << &G2[127] << std::endl;
    std::cout << "local 1 " << &L1[0] << ' ' << &L1[127] << std::endl;
    std::cout << "local 2 " << &L2[0] << ' ' << &L2[127] << std::endl;
    std::cout << "static 1 " << &S1[0] << ' ' << &S1[127] << std::endl;
    std::cout << "static 2 " << &S2[0] << ' ' << &S2[127] << std::endl;
    std::cout << "in heap 1 " << &H1[0] << ' ' << &H1[127] << std::endl;
    std::cout << "in heap 2 " << &H2[0] << ' ' << &H2[127] << std::endl;
    delete [] H1;
    delete [] H2;
}

int main(){
    foo();
}
