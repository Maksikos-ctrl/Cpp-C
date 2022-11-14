#include <stdio.h>


// Recursion - when function invokes itself, best example fibb, factorial and sum of all natural nums


int sum(int n);

int main() {    
    int num, res;

    printf("Enter num: ");
    scanf("%d", &num);

    res = sum(num);
    printf("sum = %d\n", res);

    return 0;
}

int sum(int n) {
    (n != 0) ? n + sum(n-1) : n;
}