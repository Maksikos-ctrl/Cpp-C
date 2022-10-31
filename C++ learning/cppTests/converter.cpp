#include <iostream>

using namespace std;



int converterToFeets() {
    double metre{};

    cin >> metre;
    
    cout << "Please enter ur height in metres: " << metre << "\n";

    return metre;
}



void convertedMessage(double metre) {

    double feet = metre * 3.28084;

    cout << "In feets it will be: "  << feet << "\n";
}

int main() {

    convertedMessage(converterToFeets());
    
    std::cin.get();
}