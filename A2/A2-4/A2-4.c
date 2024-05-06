#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    // Variablen
    int betrag;  // Cent-Betrag
    int anzahl;  // Anzahl der Münzen
    int fuenfzig_anz = 0;  // Anzahl 50 Cent
    int zwanzig_anz = 0;  // Anzahl 20 Cent
    int zehn_anz = 0;  // Anzahl 10 Cent
    int fuenf_anz = 0;  // Anzahl 5 Cent
    int zwei_anz = 0;  // Anzahl 2 Cent
    int eins_anz = 0;  // Anzahl 1 Cent
	
    // Überschrift
    printf("-----------\n");
    printf("MÜNZRECHNER\n");
    printf("-----------\n\n");
	
    // Eingabe mit do-Schleife
    do {
        printf("Geben Sie einen Cent-Betrag unter 100 ein: ");
        scanf("%d", &betrag);
        if (betrag >= 100) {
            printf("Ihr Betrag ist zu hoch!");
        }
        else if (betrag <= 0) {
            printf("Ihr Betrag ist negativ bzw. existiert nicht!");
        }
        else {
            printf("Danke! Richtige Eingabe!");
        }
        printf("\n\n");
    } while (betrag >= 100 || betrag <= 0);
	
    // Berechnung
    fuenfzig_anz = betrag / 50;
    betrag = betrag % 50;
    zwanzig_anz = betrag / 20;
    betrag = betrag % 20;
    zehn_anz = betrag / 10;
    betrag = betrag % 10;
    fuenf_anz = betrag / 5;
    betrag = betrag % 5;
    zwei_anz = betrag / 2;
    betrag = betrag % 2;
    eins_anz = betrag / 1;
    betrag = betrag % 1;
    anzahl = fuenfzig_anz + zwanzig_anz + zehn_anz + fuenf_anz + zwei_anz + eins_anz;
	
    // Ausgabe
    printf(" Münzenart | Anzahl\n");
    printf("-----------|--------\n");
    printf("    1c     |%5d\n", eins_anz);
    printf("    2c     |%5d\n", zwei_anz);
    printf("    5c     |%5d\n", fuenf_anz);
    printf("   10c     |%5d\n", zehn_anz);
    printf("   20c     |%5d\n", zwanzig_anz);
    printf("   50c     |%5d\n", fuenfzig_anz);
    printf("\nDie minimale Anzahl der Münzen wäre: %d\n\n", anzahl);
    printf("---------------------------------------------\n\n");
	
    // return
    return 0;
}

