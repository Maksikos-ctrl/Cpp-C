// Pascalův trojuhelnik na 12 řadkov

#include <stdio.h>


int main() {
    int p1[13], p2[13];

    int i, j;

    *p1 = 1;
    *(p1 + 1) = 1;

    for (i = 1; i < 12; ++i) {
        for (j=12; j >= i; --j) printf(" ");
        for (j=0; j < i; j++) printf("%3d   ", (*(p1 + j)));
        printf("\n");
        *p2 = 1;
        for (j=0; j < i; j++) p2[j + 1] = p1[j] + p1[j+1];
           
        (*(p2 + i)) = 1;
        for (j = 0; j < i + 1; j++) (*(p1 + j)) = (*(p2 + j));
        
    }

    

    return 0;
}