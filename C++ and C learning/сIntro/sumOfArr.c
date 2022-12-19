#include <stdio.h>


int main() {

    int arr[8] = {0, 1, 2, 3, 4, 5, 64, 7};

    int sum, k;

    sum = 0;

    for (k = 7; k >= 0; k--) {
        sum += arr[k];
    }

    
    
    return 0;
}