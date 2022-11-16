#include <stdio.h>
#include <math.h>

long long convert(int);

int main() {

    int d, b;

    printf("Enter the number in decimal: ");
    scanf("%d", &d);
    b = convert(d);
    printf("%d in decimal = %lld in binary", d, b);


    return 0;
}

long long convert(int b) {
    long long bin = 0;
    int rem, i = 1;

    while(b!=0) {
        rem = b % 2;
        b /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}