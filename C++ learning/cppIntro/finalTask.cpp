#include <iostream>

int main() {

    int x{},
        y{};

    std::cin >> x >> y;

    std::cout << "Enter an integer " << x << '\n';    
    std::cout << "Enter another integer " << y << '\n';    


    std::cout << x << "+" << y << " is " << x + y << '\n';
    std::cout << x << "-" << y << " is " << x - y << '\n';
}