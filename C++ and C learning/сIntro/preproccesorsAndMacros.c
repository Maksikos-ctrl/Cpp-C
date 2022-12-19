/*

TODO The C preprocessor is a macro preprocessor (allows you to define macros) that transforms your program before it is compiled. These transformations can be the inclusion of header files, macro expansions, etc.


*/


#include <stdio.h>

#define PI 3.14
#define exp 2.7
// create macros function
#define PI_2(x) ((x)*(x))


// using conditionals
/* 

Uses of Conditional

    use different code depending on the machine, operating system
    compile the same source file in two different programs
    to exclude certain code from the program but to keep it as a reference for future purposes







*/

//! Difference between conditionals and statements

/* 

The if statement is tested during the execution time to check whether a block of code should be executed or not whereas, the conditionals are used to include (or skip) a block of code in your program before execution.

*/

/* 

Predefined Macros

Here are some predefined macros in C programming.
Macro
				Value
		
__DATE__
				A string containing the current date.
		
__FILE__
				A string containing the file name.
		
__LINE__
				An integer representing the current line number.
		
__STDC__
				If follows ANSI standard C, then the value is a nonzero integer.
		
__TIME__
				A string containing the current time.
		



*/

/* 


Conditional compilation is a feature in C that allows you to include or exclude certain blocks of code from the final compiled program based on specified conditions. This is useful when you want to include different code depending on the platform or build configuration of the program.

To use conditional compilation in C, you can use the #if, #elif, #else, and #endif preprocessor directives. These directives allow you to specify a condition that will be evaluated by the preprocessor before the program is compiled. If the condition is true, the code between the directive and the corresponding #endif directive will be included in the final compiled program. If the condition is false, the code will be excluded.

Here is an example of how you could use conditional compilation to include different code depending on the value of a macro:


*/

// #ifdef MACRO
//    // code here

// #endif

// #if express

// #endif


int main() {

    printf("Current date and time is -- %s %s",__DATE__,  __TIME__);


    return 0;
}
