#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> V(n);
    for (int& x : V)
        std::cin >> x;

    int last = V.back();
    for (int& x : V)
        x += last;

    int pos = 0, neg = 0;
    for (int x : V) {
        if (x > 0) pos++;
        else if (x < 0) neg++;
    }

    std::cout << "Положительных: " << pos
              << ", Отрицательных: " << neg;
}
