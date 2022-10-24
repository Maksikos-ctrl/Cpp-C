#include <iostream>

using namespace std;



int multiplying() {

    float x{},
        y{};

    cin >> x >> y;

    cout << "Enter first float num: " << x << endl;
    cout << "Enter second float num: " << y << endl;   

    float m = x * y;
    return m;



}




void productMessage(float m) {

    float res = m - 0b10000001; 

    cout << "Result of multiplying 2 nums is: " << res << endl;

}


int main() {


    productMessage(multiplying());

    return 0;
}