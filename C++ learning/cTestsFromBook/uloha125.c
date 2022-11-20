// Největši společny dělitel dvou čisel


// aby najst největši společny dělitel dvou čisel budeme použivat Euklidoů algoritmus, tzn. že od většiho z dvojice čisel odečitaame menši tak dlouho, dokuzd menši neni rovno nule

//


// NSD - n


#include <stdio.h>

int nsd (int a, int b);

int main() {
    nsd(42, 105);

    return 0;
}

int nsd(int a, int b) {
    if (a <= 0 || b <= 0) return 0;
    while (a > 0) {
        (a > b) ? (a -= b) : (b -= a);
        if (b == 0) return a;
    }
    
    return 0;
}