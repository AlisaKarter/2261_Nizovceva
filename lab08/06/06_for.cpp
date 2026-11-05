#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        if (i == 2) i = 4;
        std::cout << i << " ";
    }
}
