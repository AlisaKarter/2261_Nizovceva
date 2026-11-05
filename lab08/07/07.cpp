#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> x(n);
    for (int& v : x){
            std::cin >> v;
    }

    bool neg = true;
    for (int num : x) {
        if (num < 0) {
            std::cout << "Найдено отрицательное число: " << num << std::endl;
            neg = false;
            break;
        }
    }
    if (neg) {
        std::cout << "Все числа неотрицательные" << std::endl;
    }
    return 0;
}
