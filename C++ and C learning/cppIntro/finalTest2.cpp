#include <iostream>
#include "io.cpp"


void writeAnswer(int x);

// my solution
int readNumbers() {

    
    std::cout << "Enter first integer: ";

    int x{};
    
    std::cin >> x;

    
  

    return x;
}


// void writeAnswer(int x) {
//     std::cout << "Enter second integer: ";

//     int y{};

//     std::cin >> y;

    
//     std::cout << "Sum of 2 integers will be: " << y + x << "\n";
     
// }


int main() {
    writeAnswer(readNumbers());
    
 
    return 0;
}


// cpplearn.com's solution

// #include <iostream>

// int readNumber()
// {
//     std::cout << "Enter a number: ";
//     int x {};
//     std::cin >> x;
//     return x;
// }

// void writeAnswer(int x)
// {
//     std::cout << "The answer is " << x << '\n';
// }

// int main()
// {
//     int x { readNumber() };
//     int y { readNumber() };
//     writeAnswer(x + y); // using operator+ to pass the sum of x and y to writeAnswer()
//     return 0;
// }


