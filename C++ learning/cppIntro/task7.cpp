#include <iostream>
#include <math.h>
// second task

/* 
Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters. Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x// Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0// Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0 seconds. The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2
*/




double getHeightOfTower() {
    std::cout << "Enter the height of the tower in metres: ";
    double th{};
    std::cin >> th;

    return th;
}


double getGravity(double th, int secs) {

    constexpr double grav {9.8};

    const double fall = (grav * pow(secs, 2)) / 2.0,
        heightNow = th - fall;


   return heightNow;     

}


void displayHeight(double h, int secs) {
    (h > 0.0) ? (std::cout << "At " << secs << " seconds, the ball is at height: " << h << "\n") : (std::cout << "At " << secs << "seconds, the ball is on the ground." << std::endl);
}


void calcAndDisplayHeight(double th, int secs) {
    const double h = getGravity(th, secs);
    displayHeight(h, secs);
}


int main() {

    const double th = getHeightOfTower();

    for (int h = 0; h <= 5; h++) {
        calcAndDisplayHeight(th, h);
    }

    // int h {0};

    // while(h <= 5) {
    //     calcAndDispayHeight(th, h);
    //     h++;
    // }

    // int h {0};
    // do{
        
    //     calcAndDispayHeight(th, h);
    //     h++;
    // }while(i <= 5);

    
    std::cin.get();
}