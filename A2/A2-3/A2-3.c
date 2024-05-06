#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Variablen
    double p, q, z, x0, x1, x2, i;
	
    // Eingabe
    printf("------------------------------------------\n");
    printf("LOESUNG(EN)  ZUR  QUADRATISCHEN  GLEICHUNG\n");
    printf("------------------------------------------\n\n");
    printf("\t    ************************\n");
    printf("\t    *   x^2 + px + q = 0   *\n");
    printf("\t    ************************\n\n");
    printf("------------------------------------------\n\n");
    printf("Geben Sie einen Wert für p ein: ");
    scanf("%lf", &p);
    printf("\nGeben Sie einen Wert für q ein: ");
    scanf("%lf", &q);
    printf("\n------------------------------------------\n\n");
	
    // Berechnungen des Radikanten
    z = (p*p)/4-q;
	
    // if-Verzweigung
    if (z==0) {
        x0 = -(p/2); // pq-Formel für z=0
        printf("Es gibt nur eine Lösung für diese\nquadratische Gleichung!\n\n");
        printf("x = %.3lf", x0);
    }
    else if (z>0) {
        x1 = -(p/2)+sqrt(z); // pq-Formel (+)
        x2 = -(p/2)-sqrt(z); // pq-Formel (-)
        printf("Es gibt zwei Lösungen für diese\nquadratische Gleichung!\n\n");
        printf("x1 = %.3lf\n", x1);
        printf("x2 = %.3lf", x2);
    }
    else {
        x0 = -(p/2);
        i = sqrt(-z);
        printf("Es gibt zwei komplexe Lösungen für\ndiese quadratische Gleichung!\n\n");
        printf("x1 = %.3lf + %.3lfi\n", x0, i);
        printf("x2 = %.3lf - %.3lfi", x0, i);
    }
    printf("\n\n------------------------------------------\n");
    printf("------------------------------------------\n");
    return 0;
}
