//* Mzdová výčetka

#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, castka, sucet = 0;
    // platidla - платежные средства
    int platidla[12] = {5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1}, pocet[12];
    
    for (i=0; i < 12; ++i) {
        pocet[i] = 0;
        
    }

    printf("Zadajte castky k vyplate(pre konec -1):\n");

    do {
        scanf("%d", &castka);
        if (castka > 0) {
            sucet += castka;
            for (i=0; i < 12; ++i) {
                while (castka >= *(platidla + i)) {
                    castka -= *(platidla + i);
                    (*(pocet + i))++;
                }
            }
        }
    }
    while(castka >= 0);
    printf("sucet bude: %d\n", sucet);
    for(i=0; i < 12; ++i) {
        printf("%d %d\n", (*(platidla + i)), (*(pocet + i)));
    }

    getch(); // Get char entry from the console 

    return 0;
        
}