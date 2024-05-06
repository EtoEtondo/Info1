#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Deklaration der Variablen
    float radius;
    float hoehe;
    float volumen;
    double pi=acos(-1);
    
    // do-while-Schleife
    printf("\n\tVOLUMEN  EINES  KREISKEGELS\n\n");
    do {
        do {
            printf("Geben Sie den Radius (float) in m ein: ");
            scanf("%f", &radius);
            if (radius < 0) {
                printf("Geben Sie einen reelen Radius ein!\n");
            }
            printf("\n");
        } while (radius < 0);
        do {
            printf("Geben Sie die Hoehe (float) in m ein: ");
            scanf("%f", &hoehe);
            if (hoehe < 0) {
                printf("Geben Sie eine reele Hoehe ein!\n");
            }
            printf("\n");
        } while (hoehe < 0);
        if (hoehe > 1000*radius) {
            printf("Geben Sie ein Verhältnis kleiner-gleich 1000:1 bei Hoehe:Radius ein!\n\n");
        }
    } while (hoehe > 1000*radius);
    
    // Formel für Berechnung eines Kreiskegels
    volumen = (pi*(radius*radius)*hoehe)/3;
    
    // Ausgabe des Ergebnisses
    printf("\nVolumen des Kreiskegels: %.3f Kubikmeter\n\n\n", volumen);
    
    // return
    return 0;
}


