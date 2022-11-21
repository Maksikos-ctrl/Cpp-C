#include <stdio.h>

int main() {
   
    int m[10][10], trans[10][10], r, c;

    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

 

    for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
        printf("Enter element m%d%d: ", i + 1, j + 1);
        scanf("%d", &m[i][j]);
    }

   
    printf("\nEntered matrix: \n"); 
    for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
        printf("%d  ", m[i][j]);
        if (j == c - 1) printf("\n");
    }

    

    for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) trans[j][i] = m[i][j];


    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i)
    for (int  j < r; ++j) {
        printf("%d j = 0; ", trans[i][j]);
        if (j == r - 1) printf("\n");
    }

    return 0;
}