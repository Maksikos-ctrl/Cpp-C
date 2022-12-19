#include <iostream>
#include <cmath>

// first task
// int multiply(int x, int y) {
//     return x * y;
// }


// int main() {
//     std::cout << multiply(3, 4) << '\n';
//     return 0;
// }



// second task


// int doubleNumber() {
//     std::cout << "Enter number: " << "\n";

//     int n {};

//     std::cin >> n;


//     return n;
// }


// void gettingValue(int n) {
//     std::cout << n << " double is: " << n * 2 << '\n';
// }



// int main() {
//     gettingValue(doubleNumber()); 
   
//     return 0;
// }


// third task

int userEnter() {
    std::cout << "Enter integer: " << "\n";

    int x {};

    std::cin >> x;

    return x;
}

void doubleNumber(int val) {
    std::cout << val << " double is: " << val * 2 << '\n';
}

void raiseNumberToThePower(int val) {
    std::cout << val << " double is: " << pow(val, 2) << '\n';
}



int main() {

    doubleNumber(userEnter());
    raiseNumberToThePower(userEnter());

    return 0;
}