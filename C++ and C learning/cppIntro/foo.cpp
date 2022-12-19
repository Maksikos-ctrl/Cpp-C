#include <iostream>

using namespace std;

// void foo(bool x) {

//     cout << x << "\n";

// }



// int main() {

//     foo(static_cast<bool>(1.9));

//     return 0;
    
// }


int main() {

    char b{0b101};

    cout << b << " has a value " << static_cast<int>(b) << "\n";

    return 0;

}