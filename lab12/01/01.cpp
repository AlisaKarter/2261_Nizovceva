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
};

int main(){
    box a(10, 6, 3);
    std::cout << sizeof(a) << std::endl;
}
