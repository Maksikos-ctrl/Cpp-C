#include <iostream>

using namespace std;


// My Solve

void askingMessage() {

    cout << "Enter the number from 0 to 9: ";


    int x {};
     
    cin >> x;

   

    // if (x == 2 || x == 3 || x == 5 || x == 7) {
    //     cout << "The digit is prime";
    // }
    // else {
    //     "The digit is not prime";
    // }


    (x == 2 || x == 3 || x == 5 || x == 7) ? cout << "The digit is prime" << "\2" : cout << "The digit is not prime";



   
    
}



int main() {


    askingMessage();


    return 0;
}


// Learn Cpp.com's solve


// bool solve() {
//     return (x == 2 || x == 3 || x == 5 || x == 7);
// }

// int main() {

//     std::cout << "Enter a number 0 through 9: ";
//     int x {};
//     std::cin >> x;

//     if (sole(x) )
//         std::cout << "The digit is prime\n";
//     else
//         std::cout << "The digit is not prime\n";

//     return 0;

//     return 0;
// }