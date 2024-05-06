#include <stdio.h>

int main() {
    // Variablen und Arrays
    enum {MAXW=1000};
    int ergebnisse[MAXW];
    int i;
    int basis;
    int zahl, zahl_ausg;
    int anz = -1;
    int erg;
	
    // überprüfende Eingabe von ZAHL und BASIS
    printf("<< DEZIMALZAHLEN-UMRECHNER: BASIS 2 - 10 & BASIS 16 >>\n\n");
    do {
        printf("Bitte geben Sie eine natürliche Zahl ein: ");
        scanf("%d", &zahl);
        if (zahl <= 0)
            printf("Falsche Eingabe! Bitte die oben genannten Bedingungen einhalten!\n\n");
    } while (zahl <= 0);
    printf("\n");
    do {
        printf("Bitte geben Sie die Basis 2 - 10 oder 16 ein: ");
        scanf("%d", &basis);
        if (basis < 2 || (basis > 10 && basis != 16))
            printf("Falsche Eingabe! Bitte die oben genannten Bedingungen einhalten!\n\n");
    } while (basis < 2 || (basis > 10 && basis != 16));
    printf("\n\n");
    zahl_ausg = zahl;
	
    // Berechnung der Zahl
    for (i=0;i<MAXW;i++) {
        ergebnisse[i] = zahl % basis;
        zahl /= basis;
        anz++;
        if (zahl==0)
            break;
    }
	
    // Ausgabe des Ergbenisses
    printf("%d (BASIS10) = ", zahl_ausg);
    if (basis==16) {
        for (i=anz;i>=0;i--) {
            erg = ergebnisse[i];
            printf("%X", erg);
        }
    }
    else {
        for (i=anz;i>=0;i--) {
            erg = ergebnisse[i];
            printf("%d", erg);
        }
    }
    printf(" (BASIS%d)\n\n\n-------------------------------\n", basis);
	
    return 0;
}
