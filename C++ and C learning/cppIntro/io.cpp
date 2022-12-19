#include <iostream>


void writeAnswer(int x) {
    std::cout << "Enter second integer: ";

    int y{};

    std::cin >> y;

    
    std::cout << "Sum of 2 integers will be: " << y + x << "\n";
     
}
