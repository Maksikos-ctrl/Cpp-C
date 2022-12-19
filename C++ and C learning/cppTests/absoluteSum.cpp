#include <iostream>





void randomArr(arr) {
    int arr [] = {2, -1, 4, 8, 10};
    for (int i = 0; i < *arr; i++) {
        int r{};
        r += arr[i];
    }
}

int main() {
    randomArr();

    return 0;
}