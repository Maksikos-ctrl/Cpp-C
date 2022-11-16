// 4.Напишіть трикутник Паскаля


//* for (empty = 1; empty <= rows - rows[k]; empt++) {
//            printf(" ");
//        } - Пример как сделать пропуск в пирамедке

#include <stdio.h>


int main() {
    int rows, k, j, kef = 1, emptSpace;

    // printf("Введіть число рядків: ");
    // scanf("%d", &rows);

    for (k = 0; k < rows; k++) {
        for (emptSpace = 1; emptSpace <= rows - k; emptSpace++) {
            printf("  ");
        }

        for(j = 0; j < k; j++) {
            (j == 0 || k == 0) ? kef = 1 : (kef = kef * (k - j) / j);
            printf("%4d", kef);
        }

        printf("\n");
    }
   
    return 0;
    
}





