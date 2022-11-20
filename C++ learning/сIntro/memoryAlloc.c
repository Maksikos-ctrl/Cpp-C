//* Sometimes the size of the array you declared may be insufficient. To solve this issue, you can allocate memory manually during run-time. This is known as dynamic memory allocation in C programming.

//* They are important in C, because they give you the ability to manipulate the data in the computer's memory - this can reduce the code and improve the performance. However, pointers must be handled with care, since it is possible to damage data stored in other memory addresses.

/*================================================================

//TODO malloc() - memory allocation, function which reserves block of memory of the specified number of bytes and returns a pointer of void which can be casted into pointers of any form

ptr = (castType*) malloc(size)

//? e.g => ptr = (float*) malloc(100 * sizeof(float)) - it allocates 400 bytes of memory, cuz the size of float is 4 bytes

//! The expression results in a NULL pointer if the memory cannot be allocated.



//TODO calloc() - contiguous(близкий) allocation


//? The malloc() function allocates memory and leaves the memory uninitialized,
//! whereas the calloc() function allocates memory and initializes all bits to zero.


//* e.g => ptr = (float*) calloc(25, sizeof(float)) - The above statement allocates contiguous space in memory for 25 elements of type float.



//TODO free() - Dynamically allocated memory created with either calloc() or malloc() doesn't get freed on their own. You must explicitly use free() to release the space.


//* e.g => free(ptr)


//TODO realloc() - If the dynamically allocated memory is insufficient or more than required, you can change the size of previously allocated memory using the realloc() function.

//* e.g => ptr = realloc(ptr, x);

*/


//* Program to calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    // if memory cannot be allocated
    if (ptr == NULL)
        printf("Error!Memory can't be allocated");
        exit(0);

    printf("Enter elems: ");

    for (i = 0; i < n; ++i) {
        // scanf("%d", ptr+i);
        scanf("%d", &ptr[i]);
        // sum = += ptr[i];
        sum += *(ptr + i);
    }    

    printf("Sum = %d\n", sum);

    //deallocating(освобождение) the memory
    free(ptr);

    return 0;
}