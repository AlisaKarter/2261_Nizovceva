#include <iostream>
#include <vector>
using namespace std;

void dosome_1 (const std::vector<int> &V){
    int s = 0;
    for(auto x: V){
        s += x;
    }
    std::cout << s << std::endl;
}

void dosome_2 (std::vector<int> &V){
    int s = 0;
    for(auto x: V){
        s += x;
    }
    std::cout << s << std::endl;
}
void dosome_3 (const std::vector<int> V){
    int s = 0;
    for(auto x: V){
        s += x;
    }
    std::cout << s << std::endl;
}

void dosome_4 (std::vector<int> V){
    int s = 0;
    for(auto x: V){
        s += x;
    }
    std::cout << s << std::endl;
}

int main(){

    std::vector<int> V = {1, 2, 3, 4, 5};
    dosome_1(V);
    dosome_2(V);
    dosome_3(V);
    dosome_4(V);
}
