#include <iostream>
#include <string>




// Didn't know how to solve correctly, it's cpp.com's solution

int main() {


    std::cout << "Enter please ur full name: " << "\n";
    std::cout << "Enter please ur age: ";

    std::string x{};
    std::getline(std::cin >> std::ws, x);

    int y{};

    std::cin >> y;

    
    
    int l1 {static_cast<int>(x.length())};
   

    std::cout << "Your age + length of name is: " << l1 + y << '\n';
    

    

    return 0;

}