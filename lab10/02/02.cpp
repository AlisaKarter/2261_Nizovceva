#include <iostream>
using namespace std;
int main()
{
	double x[10];
    for (int i = 0; i < 10; i++){
        std::cout << reinterpret_cast<size_t>(&x[i]) << std::endl;
    }
}
