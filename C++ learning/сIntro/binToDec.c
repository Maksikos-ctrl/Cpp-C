#include <stdio.h>
#include <math.h>

int convert(long long d);

int main() {
    long long b;
    int d;

    printf("Enter number in binary: ");
    scanf("%lld", &b);
    d = convert(b);
    printf("%lld in binary = %d in decimal", b, d);

    return 0;
}

int convert(long long d) {
    int dec = 0, rem, i = 0;

    while (d!=0) {
        rem = d % 10;
        d /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}