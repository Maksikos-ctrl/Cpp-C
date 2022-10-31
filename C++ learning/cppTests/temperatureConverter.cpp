#include <iostream>

using namespace std;


int messageToConvert() {
    double celsius{};

    cin >> celsius;

    cout << "Enter ur temperature: " << celsius << endl;

    return celsius;
}



void converted_message(double celsius) {
    
    double fahrenheit = (celsius  * 1.8) + 32,
        kelvin = celsius + 273.15;

    cout << "Ur result in Fahrenheits: " << fahrenheit << "\n";
    cout << "Ur result in kelvins: " << kelvin << "\n";

}

int main() {

    converted_message(messageToConvert());

    std::cin.get();
}