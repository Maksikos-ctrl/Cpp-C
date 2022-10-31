#include <iostream>

using namespace std;
// // first task 



double enterNums() {
    cout << "Enter a double value: ";
    double x{};
    cin > x;
    

    return x;

}


char enterOperation(){
    cout << "Enter one of the following: +, -, *, or /: ";
    char z{};
    cin >> z;
   
    return z;
}


void enterRes(double x, char z, double y) {
    z == '+' ? cout << x << " + " << y << " is " << x + y << "\n" : z == '-' ? cout << x << " - " << y << " is " << x - y << "\n" : z == '*' ? cout << x << " * " << y << " is " << x * y << "\n" : z == '/' ? cout << x << " / " << y << " is " << x / y << "\n" : cout << "U entered wrong operation or didn't enter at all";

}


int main() {

    double x{enterNums()},
        y{enterNums()};

    char z{enterOperation()};


    enterRes(x, z, y);

    return 0; 
}


// cpp.com's solving

// double getDouble()
// {
//     std::cout << "Enter a double value: ";
//     double x{};
//     std::cin >> x;
//     return x;
// }

// char getOperator()
// {
//     std::cout << "Enter one of the following: +, -, *, or / ";
//     char z{};
//     std::cin >> z;
//     return z;
// }

// void printResult(double x, char z, double y)
// {
//      z == '+' ? cout << x << " + " << y << " is " << x + y << "\n" : z == '-' ? cout << x << " - " << y << " is " << x - y << "\n" : z == '*' ? cout << x << " * " << y << " is " << x * y << "\n" : z == '/' ? cout << x << " / " << y << " is " << x / y << "\n" : cout << "U entered wrong operation or didn't enter at all";
// }

// int main()
// {
//     double x { getDouble() };
//     double y { getDouble() };

//     char z { getOperator() };

//     printResult(x, z, y);

//     return 0;
// }