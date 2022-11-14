// 4.Напишіть трикутник Паскаля


//* for (empty = 1; empty <= rows - rows[k]; empt++) {
//            printf(" ");
//        } - Пример как сделать пропуск в пирамедке

// #include <stdio.h>


// int main() {
//     int rows, k, j, kef = 1, emptSpace;

//     // printf("Введіть число рядків: ");
//     // scanf("%d", &rows);

//     for (k = 0; k < rows; k++) {
//         for (emptSpace = 1; emptSpace <= rows - k; emptSpace++) {
//             printf("  ");
//         }

//         for(j = 0; j < k; j++) {
//             (j == 0 || k == 0) ? kef = 1 : (kef = kef * (k - j) / j);
//             printf("%4d", kef);
//         }

//         printf("\n");
//     }
   
//     return 0;
    
// }


// 1
/*
1. Знайти рівняння прямої, що проходить через дві задані користувачем точки координатної площини.

Рівняння будь-якої прямої має вигляд y = kx + b. Якщо відомі дві пари (x; y), то одержують систему рівнянь щодо коефіцієнтів k та b:
*/

// y = kx + b;
/* 

A(x1, y1), B(x2, y2);

y1 = kx1 + b;
y2 = kx2 + b;

b = y1 - kx1 <=> y2 = kx2 + y1 - kx1;
k(x2-x1) = y2 - y1;
k = (y2 - y1) / (x2-x1)
*/



#include <stdio.h>




int main() {

    float x1, x2, y1, y2, k, b;

    printf("A(x1, y1): ");
    scanf("%f%f", &x1, &y1);
    printf("B(x2, y2): ");
    scanf("%f%f", &x2, &y2);

    k = (y2 - y1) / (x2-x1);
    b = (y1 - k * x1);

    printf("y = %.2fx + %.2f\n", k, b);
     

    return 0;

}




