#include <iostream>
#include "Log.h";

using namespace std;


/* const char is just type than can hold a string of text*/
// static void Log(const char* message) {
//     cout << message << endl;
    
// }


void InitLog() {
    Log('hi there');
    cout << Log('hi there') << endl;
}


void Log(const char* message) {
    std::cout << message << std::endl;
}
