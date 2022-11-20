//* e address of &x[0] and x is the same. It's because the variable name x points to the first element of the array.
//TODO &x[0] is equivalent to x. And, x[0] is equivalent to *x.
//TODO &x[1] is equivalent to x+1 and x[1] is equivalent to *(x+1).
//? &x[2] is equivalent to x+2 and x[2] is equivalent to *(x+2).
// ...
//? Basically, &x[i] is equivalent to x+i and x[i] is equivalent to *(x+i).


#include <stdio.h>


// Program which prints addresses pf 5 nums in arr
// int main() {
//     int y[5], i;

//     for (i = 0; i < 5; i++) {
//         printf("&x[%d] = %p\n", i, y[i]);
//     }

//     printf("Address of x is: %p", y);

//     return 0;
// }


int main() {
    int i, pole[5], sum = 0;

    printf("Enter 5 nums: ");

    for (int j = 0; j < 5; ++j) {
        // Equivalent to scanf("%d", &pole[j])
        scanf("%d", pole+j);

        // Equivalent to sum += x[j]
        sum += *(pole + j);
    }

    printf("Sum = %d", sum);

    return 0;
}