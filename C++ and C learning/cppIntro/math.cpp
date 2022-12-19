#include <iostream>
#include <accctrl.h>
#include "EndBrace.h"

#define INTEGER int /* typed first text will be replacing the type */

/* allows us to include or exclude based on given condition */
/* 1 - means everything is alright and without an error, 0 means otherwise*/
#if 1

void Log(const char* message);

/* static means that this function only declared for translation */
static int Multiply(int a, int b) {
    // Log("Multiply");
    return a * b;
}

int main() {
    std::cout << "Multiply \n" << Multiply(2, 10);
    std::cin.get();
}
#endif

