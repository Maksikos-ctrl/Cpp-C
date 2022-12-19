#include <iostream>




int entHeight() {

    

    int x{};
    std::cin >> x;

    std::cout << "Enter length of rectangle: " << x << "\n";

    

    


    
    return x;
   

    

}


int entWidth() {
    int y{};
    std::cin >> y;

    std::cout << "Enter width of rectangle: " << y << "\n";

    return y;
}

void determinePerimeter(int x) {
    entHeight();
    entWidth();
    int perimeter = 2 * (l + w);

    std::cout << "Perimeter of triangle is: " << perimeter << "\n";
}

int main() {

    determinePerimeter(entHeight());
    determinePerimeter(entWidth());

    return 0;
}