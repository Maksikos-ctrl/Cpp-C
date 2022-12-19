#include <iostream>

int main() {
    int x {5};

    {
        std::cout << x << "\n";

        int x{2};

        x = 3;

        std::cout << x << "\n";
    }

    std::cout << x << "\n";
}