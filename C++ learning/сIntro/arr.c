#include <stdio.h> // it roks like iostream in cpp

int main() {
    
  int average,
    grades[] = {};

  grades[0] = 80;
  
  grades[1] = 90;

  average = (grades[0] + grades[1]) / 2;
  printf("The average of the 3 grades is: %d", average);

  return 0;
}


