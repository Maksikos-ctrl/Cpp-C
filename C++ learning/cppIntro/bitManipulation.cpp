#include <iostream>
#include <cstdint>


/* write The following program which asks the user to enter a 32-bit hexadecimal value, and then extracts the 8-bit color values for R, G, B, and A.*/


int main() {
    constexpr std::uint32_t redBits{0xFF000000},
        greenBits{0x00FF000000},
        blueBits{0x00000FF00},
        alphaBits{0x0000000FF};


    std::cout << "Enter a 32-bit RGBA color value in hexadecimal (e.g. FF7F3300): ";
    std::uint32_t pixel {};
    std::cin >> std::hex >> pixel;


    std::uint8_t red{static_cast<std::uint8_t>((pixel & redBits) >> 24)};    
    std::uint8_t green{static_cast<std::uint8_t>((pixel & greenBits) >> 16)};   
    std::uint8_t blue{static_cast<std::uint8_t>((pixel & blueBits) >> 8)}; 
    std::uint8_t alpha{static_cast<std::uint8_t>((pixel & alphaBits))};   


    std::cout << "Ur color contains\n";
    std::cout << std::hex;
    std::cout << static_cast<int>(red) << " red\n";  
    std::cout << static_cast<int>(green) << " green\n";  
    std::cout << static_cast<int>(blue) << " blue\n";  
    std::cout << static_cast<int>(alpha) << " alpha\n";

    return 0; 
}