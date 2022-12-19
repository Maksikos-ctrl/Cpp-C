#include <iostream>

int doMath(int first, int second, int third, int fourth);

int main() {
    std::cout << "Our result is " << doMath(2, 3, 4, 4) << "\n";
}


int doMath(int first, int second, int third, int fourth) {
  
    return  first + second * third / fourth;
}

