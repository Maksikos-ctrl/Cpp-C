//* If the size of an array is n, to access the last element, the n-1 index is used.
//* %.2lf is used of long double it is a format specifier used in C language. .2 is used for controlling the width of the decimal places.
//* Hence, you should never access elements of an array outside of its bound.

/*

 int arr[5] = {1, 2, 3, 4, 5};

 or

 int arr[] = {1, 2, 3, 4, 5};


  scanf("%d", &arr[2])

  scanf("%d", &arr[n-1])

 */



#include <stdio.h>

int main() {
    int arr[6], i, n, sum = 0;

    double aver;


    printf("Enter number of elems: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter the num%d: ", i+1);
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    aver = (double) sum / n;

    printf("Average num is: %.2lf", aver);

    return 0;
}