#include <iostream>

// int main() {
//     int h {};

//     std::cout << h;
//     std::cin >> h;
// }

int main() {

    // char - is simple byte of data
    
    char n = 10;


    // short - is 2 bytes of data

   short a = 18.3;

    // int - is 4 bytes of data
    // long - is 4 bytes of data(But depending on the compiler which u have)
    // long long - is 8 bytes of data
 
    // float - a decimal value which we can store, which occupies 4 bytes of data

    float l = 5.5f;


    // double - is 8 bytes, works like float but bigger in two times

    double e = 14.5;


    // bool - boolean
    // true - 1; false = 0
    bool var1 = true;


    // pointers can be declared by *

    // bool* var2 = false;


    // references can be declared by &

    // bool& var3 = false;



    // unsigned int type means is used to store 32-bit integers
    unsigned int var = 3; // -2b -> 2b
 

    // std::cout << var;
    std::cout << "Size of boolean variable: " << sizeof(bool) << std::endl;
    std::cout << "Size of int variable: " << sizeof(int) << std::endl;
    std::cout << "Size of short variable: " << sizeof(short) << std::endl;
    std::cout << "Size of long variable: " << sizeof(long) << std::endl;
    std::cout << "Size of double variable: " << sizeof(double) << std::endl;
    std::cout << "Size of float variable: " << sizeof(float) << std::endl;
    std::cout << "Size of char variable: " << sizeof(char) << std::endl;
    std::cout << "Number in ASCII: " << int(l) << std::endl;
    std::cin.get();

    return 0;
}