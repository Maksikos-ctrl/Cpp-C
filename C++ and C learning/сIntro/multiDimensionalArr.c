#include <stdio.h>


//* Multi-dimensional arrs in C work like matrix [row][column], e.g int b[2][1] -> second row, first column*/


// int a[3][4] = {  
//    {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
//    {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
//    {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
// };

/*
   Diff ways to initialize two-dimensional arrs

   int arr[2][3] = {{1, 3, 0}, {-1, 5, 9}};

   int c[][3] = {{1, 3, 0}, {-1, 5, 9}};

   int c[2][3] = {1, 3, 0, -1, 5, 9};

*/

/*

   Initialization of 3-d dimensional arr

   int test[2][3][4] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};

*/




// another method 

// const int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};


// int val = a[2][3];



// int main() {


//     printf("The random num in multi-dimensional arr is %d.", val);


//     return 0;
// }