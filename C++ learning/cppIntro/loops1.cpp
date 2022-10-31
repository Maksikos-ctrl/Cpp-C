#include <iostream>

int main() {


    for (int p = 0; p < 10; p++) {
        // if ((p + 1) % 2 == 0) continue;
        // if ((p + 1) % 2 == 0) break;
        if ((p + 1) % 2 == 0) return 0;
        std::cout << "Running p will be equiled to: " << p << "\n";
        
    }



    // double p = 0;
    // while (p < 10) {
    //     std::cout << "Running p will be equiled to: " << p << "\n";
    //     p++;
    // }

    // do{
    //     int p = 0;
    //     std::cout << "Running P will be equiled to: " << p << "\n";
    //     p++; 
    // } while(p < 5);

    std::cin.get(); // this statement which keeps our window open

}