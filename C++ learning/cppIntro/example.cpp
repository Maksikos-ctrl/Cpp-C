#include <iostream>


namespace constants {
    constexpr double gravity{9.8};
}

double findForce(int m, double g) {
    double res = m * g;

    return res;
}

int main() {

    
    
    std::cout << findForce(10, constants::gravity);;

    return 0;
}