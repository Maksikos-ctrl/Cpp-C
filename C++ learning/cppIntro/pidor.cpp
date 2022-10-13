#include <iostream>
#include "Log.h"
#include "Common.h"
// We've defined our function for future using


void InitLog() {
    Log("initializing");
}

void Log(const char* message) {
    std::cout << message << '\n';
}

