#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Variablen
    int a = 1;
    int b = 0;
    int c;
    int z = 0;
	
    // Ausgabe der Fibonacci-Folge bis 100.000 mit Hilfe von do-Schleife
    do {
        c = a + b;
        b = a;
        a = c;
        z ++;
        printf("%5d   ", a);
        if ((z % 8) == 0) {
            printf("\n");
        }
    } while (z < 24);
    printf("\n");
	
    // return
    return 0;
}
