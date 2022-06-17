#include <iostream>

using namespace std;

int main() {
    int n;
    std::cin >> n;

    // assuming integers are 32-bit
    // works for both positive and negative numbers
    for (int i = 31; i >= 0; --i) {
        if (n & (1 << i))
            std::cout << 1;
        else
            std::cout << 0;
    }

    return 0;
}