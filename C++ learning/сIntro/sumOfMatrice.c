//* 1f is used to print the only one value after the . from float data
/*

if float f=1.234

then “%.1f” print only 1.2 at the place of 1.234

 */



#include <stdio.h>

int main() {

    float a[4][4], b[4][4], res[4][4];

    // 
    printf("Enter elems of first matrix\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("Enter A-maticu%d%d: ", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }

    printf("Enter elems of second matrix\n");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("Enter B-maticu%d%d: ", i+1, j+1);
            scanf("%f", &b[i][j]);
        }
    }

    // Adding correspondin' elems of 2 arrs
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            res[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nThe sum of matrix will be");
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%.1f\t", res[i][j]);

            if (j == 1) printf("\n");
        }
    }

    return 0;

}