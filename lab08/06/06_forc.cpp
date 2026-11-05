#include <iostream>

#define forc(i, from, to) \
   int __i = from, __n = to; \
   for (const int &i = __i; i < __n; __i++)

int main() {
    forc(i, 0, 10) {
        std::cout << i << " ";
        if (i == 3) {
            i = 7;
        }
    }
}
