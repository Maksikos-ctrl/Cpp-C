#include <iostream>

using namespace std;



int multiplying() {

    float x{},
        y{};

    cin >> x >> y;

    cout << "Enter first float num: " << x << endl;
    cout << "Enter second float num: " << y << endl;   

    float m = x * y;

    cout << "Enter second float num: " << m << endl;   
    return m;



}


int main() {


    multiplying();

    return 0;
}