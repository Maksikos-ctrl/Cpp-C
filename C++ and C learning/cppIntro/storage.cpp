#include <iostream>


void shitFunc(int&) {

}


int main(){

    int n;

    shitFunc(n);

    std::cout << n;

    return 0;
}