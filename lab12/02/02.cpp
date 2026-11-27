#include <iostream>
using namespace std;

class box{
private:
    double length;
    double widht;
    double height;
public:
    box(double _lenght, double _widht, double _height):
        length(_lenght), widht(_widht), height(_height){
        }
    double V();
    double S();
};

double box::V(){
    return length * widht * height;
}

double box::S(){
    return (2 * ((length * widht) + (widht * height) + (length * height)));
}

int main(){
    box a(10, 6, 3);
    std::cout << sizeof(a) << std::endl;
    std::cout << "volume = " << a.V() << std::endl;
    std::cout << "surface = " << a.S() << std::endl;
}
