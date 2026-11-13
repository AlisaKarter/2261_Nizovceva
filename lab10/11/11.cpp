#include <iostream>
using namespace std;
int main()
{
    int x [10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 0;
    for (int *p = x; p < x+10 ; p++){
        s += *p;
    }
    std::cout << s;
}
