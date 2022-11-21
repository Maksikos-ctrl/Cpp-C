#include <stdio.h>

int y, m, d;
int dayOfTheYear(int y, int m, int d);
int sumOfDays(int y1, int m1, int d1, int y2, int m2, int d2);
int weekDay(int y, int m, int d);


int main() {
    

    printf("Zadajte rok, mesac a den\n: ");
    scanf("%d%d%d", &y, &m, &d);

    switch (weekDay(y, m, d)) {
        case 0: printf("nedela\n"); break;
        case 1: printf("pondelok\n"); break;
        case 2: printf("utorok\n"); break;
        case 3: printf("streda\n"); break;
        case 4: printf("stvrtok\n"); break;
        case 5: printf("piatok\n"); break;
        case 6: printf("sobota\n");
    }

    scanf("%d", &m);

    return 0;
}


int sumOfDays(int y1, int m1, int d1, int y2, int m2, int d2) {
    long n;
    n = 365 * (y2 - y1);
    n += dayOfTheYear(y2, m2, d2) - dayOfTheYear(y1, m1, d1);
    y2--; y1--;
    n+= ((y2 / 4) - (y2 / 100) + (y2 / 400) - (y1 / 4) + (y1 / 100) - (y1 / 400));

    return n;
}


int weekDay(int y, int m, int d) {
    return sumOfDays(1599, 12, 26, y, m, d) % 7;
}

int dayOfTheYear(int y, int m, int d) {
    int n;
    n = ((m - 1) * 30.57 + 0.5) + d;

    if (m > 2) {
        n -= 2;
        if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)) n++;
    }

    return n;
}