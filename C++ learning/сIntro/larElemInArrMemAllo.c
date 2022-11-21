#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    double *pole;
    printf("Enter the total nums of arr: ");
    scanf("%d", &pole);

    pole = (double*)calloc(i, sizeof(double));

    if (pole == NULL) {
        printf("Error: Out of memory");
        exit(0);
    }

    for (int k = 0; k < i; ++k) printf("Enter the number of arr\n%d: ", k+1);
    

    for (int k = 1; k < i; ++k) {
        if (*pole < *(pole + i)) *pole = *(pole + i);
    }

    printf("The largest num is = %2.lf", *pole);

    //! DO NOT FORGET TO CLEAR ALL DATA AFTER EXECUTION
    free(pole);


    return 0;
}