#include <iostream>


int main() {
    


    double n(0x80),
        m{0b0011},
        l{};
    // std::cout - allows us to send data to the console to be printed as text. cout stands for “character output”.
    // std::cout << n << std::endl; // // std::endl will cause the cursor to move to the next line of the console

    // Prefer ‘\n’ over std::endl when outputting text to the console.
    // std::cout << m << '\n'; // Comparing with std::endl, better to use \n cuz it's more readable and efficient

    std::cout << "Enter smth in var l ";
    std::cin >> l; // get number from keyboard and store it in variable n
    std::cout << "U have entered " << l << '\n';
    return 0;
}