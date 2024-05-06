#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Variablen
    int a;
    int b;
	
    // Titel
    printf("---\n");
    printf("GGT\n");
    printf("---\n\n");
	
    // Eingabe 1. Zahl mit do-Schleife
    do {
        printf("Geben Sie Ihre 1. natürliche Zahl ein: ");
        scanf("%d", &a);
        if (a <= 0) {
            printf("Falsche Eingabe!\n\n");
        }
        else {
            printf("\n");
        }
    } while (a <= 0);
	
    // Eingabe 2. Zahl mit do-Schleife
    do {
        printf("Geben Sie Ihre 2. natürliche Zahl ein: ");
        scanf("%d", &b);
        if (b <= 0) {
            printf("Falsche Eingabe!\n\n");
        }
        else {
            printf("\n");
        }
    } while (b <= 0);
	
    // Berechnung des GGT mit do-Schleife
    do {
        if (a > b) {
                a = a - b;
        }
        else if (b > a) {
                b = b - a;
        }
    } while (a != b);
	
    // Ausgabe
    printf("Ihr GGT ist: %d\n\n\n", a);
	
    // return
    return 0;
}
