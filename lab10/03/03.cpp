#include <iostream>

int main() {
    int a = 10, b = 3;

    int prod = a * b;
    std::cout << "a * b = " << prod << std::endl;

    int *p = &a;

    std::cout << "*p = " << *p << std::endl;

    int and_result = a & b;
    std::cout << "a & b = " << and_result << std::endl;

    int &ref = a;
    ref = 15;
    std::cout << "a ref=15: " << a << std::endl;

    std::cout << "&a = " << &a << std::endl;
}
