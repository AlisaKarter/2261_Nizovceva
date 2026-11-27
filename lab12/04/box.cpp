#include <iostream>
using namespace std;

class box{
private:
    double length;
    double widht;
    double height;
    static int count;
public:
    box(double _lenght, double _widht, double _height):
        length(_lenght), widht(_widht), height(_height){
            count++;
        }
    double V();
    double S();
    void addr();
};

double box::V(){
    return length * widht * height;
}

double box::S(){
    return (2 * ((length * widht) + (widht * height) + (length * height)));
}

void box::addr(){
    std::cout << &length << ' ' << &widht << ' ' << &height << ' ' << &count << std::endl;
}

int box::count = 0;
