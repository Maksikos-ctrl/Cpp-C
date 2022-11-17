//* Pointers (pointer vars) - are special vars that are used to store addresses rather than values
//* (*) is called the dereference operator (when working with pointers),It operates on a pointer and gives the value stored in that pointer.

/*----------------------------------------------------------------

int* p - a pointer p of int type

2) way int *p1
3) way int * p2



int *p, p1 = p is pointer and p1 is normal var


int *artemPidor, max;
max = 10;
artemPidor = &max; // HERE: we are receiving max's adress and assigning it to artemPidor


//* pointer we are using here for getting VALUE of var
printf("%d", *artemPidor): OUTPUT >> 10


*/


/*

int* pc, c;
c = 5;
pc = &c;
c = 1;
printf("%d", c);    // Output: 1
printf("%d", *pc);  // Ouptut: 1

*/

#include <stdio.h>

// int main() {
//     int* pc, c, x;
//     c = 5;
//     pc = &c;
//     c = *pc + 20; // 25
//     x = *(pc + 20);
//     printf("%d\n", c);    // 25
//     printf("%d\n", x);  // 
//     printf("%d", *pc);  // 25

//     return 0;
// }

//* Will execute well cuz int *p = &c == int *p:
// p = &c
#include <stdio.h>
int main() {
   int c = 5;
   int *p = &c;

   printf("%d", *p);  // 5
   return 0; 
}

