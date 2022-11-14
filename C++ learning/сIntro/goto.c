#include <stdio.h>
#define maxQuantOfNums 100

// goto statement allows us to transfer control of the app to the specified label

// printf() == cout
// scanf() == cin
// & - gets the address of var and its value

// task1(summ up all positive nums in arr, and find average of pos num)

//* The use of goto statement may lead to code that is buggy and hard to follow. 
//* goto statement allows you to do bad stuff such as jump out of the scope.
//* goto can be useful sometimes. For example: to break from nested loops.

int main() {

    

    int j = 0;

    double aver, number, sum = 0.0;

    for (int j = 1; j < maxQuantOfNums; ++j) {
        printf("%d Enter please positive nums: ", j);
        scanf("%d", &number);

        if (sum < 0.0) {
            goto task;
        }

        sum += number;
    }

    task: {
        aver = sum / (j - 1);
        printf("Sum = %.2f\n", sum);
        printf("Average = %.2f\n", aver);
        return 0;
    }

 
}