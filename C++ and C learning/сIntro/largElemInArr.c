#include <stdio.h>

int main() {
    int k;
    double pole[50];

    printf("Enter number from 1 to 50: ");
    scanf("%d", &k);

    // we've created it for constant asking to enter num and i+1 means following number, e.g num1: 2, num2, etc.
    for (int i = 0; i < k; ++i) {
        printf("Enter the number\n%d: ", i + 1);
    }

    // storing the largest num in arr

    /**
     //TODO METHOD HOW TO FIND THE LARGEST ELEM IN ARR
       for (int i = 1; i < k; ++i) {
        if (*pole < *(pole + i)) *pole = *(pole + i);
    
    */

    for (int i = 1; i < k; ++i) {
        if (*pole < *(pole + i)) *pole = *(pole + i);
    }

    printf("The largest num is = %2.lf", *pole);

    return 0;
}