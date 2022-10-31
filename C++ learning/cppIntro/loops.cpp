#include <iostream>

using namespace std;

int main() {
    
    // A for loop is used where you know at compile time how many times this loop will execute.
    for (int i = 0; i < 5; i++) {
        cout << "hello world\n";
    }

    // A while loop is normally used in a scenario where you don't know how many times a loop will actually execute at runtime.

    int l = 0;
    while (l < 5) {
        cout << "hello world\n";
        l++;
    }


    // A do-while loop is used where your loop should execute at least one time.

    do {
        int l = 0;
        cout << "hello world once\n";
        l++;

    } while (l < 5);

    return 0;

}