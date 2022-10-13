#include <iostream>

int Multiply(int x, int y) {
    return x * y;
} 


int multiplyAndLog(int a, int b) {
    int result = Multiply(5, 8);
    std::cout << result << '\n';
}

int main() {
    
    int result = multiplyAndLog(1, 2);
    

    std::cout << "Multiply result " << result << std::endl;

    return 0;
}