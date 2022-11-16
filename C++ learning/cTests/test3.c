//* + 3.Знайдіть мінімальне значення елемента в невідсортованому масиві


#include <stdio.h>


int calculations(int* arr, int n);

int main() {
   
    int arr[] = {20, -15, -40, 50, 60, 21, 23}, n = sizeof(arr) / sizeof(arr[0]), imin = calculations(arr, n);
    
    printf("Найменше значення в массиві буде: %d", imin);
    return 0;
}



int calculations(int *arr, int n) {
    int i, imin, min;
    min = arr[0];
    

    for (i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
            
        }
        
    }

    return min;
  
}


