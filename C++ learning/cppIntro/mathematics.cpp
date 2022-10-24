#include "HeaderFiles/square.h"
#include <iostream>



int main() {

    std::cout << "Length of square " << getSquareSides() << "sides\n";

    std::cout << "Perimeter of our square is " << getPerimeter(5) << "\n";

    return 0;
}