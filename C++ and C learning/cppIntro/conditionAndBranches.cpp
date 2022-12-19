#include <iostream>
#include <string>



int main() {

    char i{};

    double bods{};

    // first method on checking on equality on exact num
    // bool resultOfComparison = x == 5; // if this statement is true, it will return num, unless not we'll get false


    // second method
    // if (x == 5) {
    //     std::cout << "Hi c++!\n";

    // }

    //third method

    // int res = x == 5 ? 5 : false;

    // std::cout << res << std::endl;

    // fourth method

    int y{};



    y = std::nullptr_t;
    i = std::nullptr_t;


    // Use a null pointer value to indicate that an object handle, interior pointer, or native pointer type does not point to an object. Use nullptr with either managed or native code
    // const char* ptr = nullptr;

    // if (1) {
    //     std::cout << "Hi c++!\n";
    // }
    


    
    // std::cin.get();



    std::cin >> bods;

    std::cout << "Enter ur bods: " << bods << std::endl;


   std::string const finalResultForYear = bods >= 61 && bods < 100 ? "passed this exam" : bods >= 100 ? "U have A and nice student grant" : "Failed this exam(Fx)";


    std::cout << "You have " << finalResultForYear << std::endl;



}