#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Variablen
    int eing = 1;
    int betrag = 0;
    int anz = 0;
    double am;
	
    // while-Schleife
    while (eing != 0) {
        scanf("%d", &eing);
        betrag = betrag + eing;
        anz ++;
    }
	
    // Berechnung und Ausgabe des Arithmetischen Mittels
    anz --;
    am = (double) betrag / anz;
    printf("\n%.2lf\n\n", am);
	
    // return
    return 0;
}
