#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Deklaration der Variablen
    float radius;
    float hoehe;
    float volumen;
    double pi=acos(-1);
	
    // Ausgabe & Eingabe
    printf("\n\tVOLUMEN  EINES  KREISKEGELS\n\n");
    printf("%40s", "Geben Sie den Radius (float) in m ein: ");
    scanf("%f", &radius);
    printf("%40s","Geben Sie die Hoehe (float) in m ein: ");
    scanf("%f", &hoehe);
	
    // Formel für Berechnung eines Kreiskegels
    volumen = (pi*(radius*radius)*hoehe)/3;
	
    // Ausgabe des Ergebnisses
    printf("\nVolumen des Kreiskegels: %.3f Kubikmeter\n\n\n", volumen);
	
    // return
    return 0;
}
