#include <iostream>
using namespace std;
int main()
{
	int y = 2, x = 1;
    int *p = &y, *q = &x;
    if (p < q){
        std::cout << "Yes";
    }
    else{
        std::cout << "No";
    }
}
