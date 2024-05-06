#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Variablen
    enum {MAXW=10000};
    int zahlen[MAXW] = {0};
    enum {ZAEHLER=25};
    int zaehler[ZAEHLER]={0};
    int zahl;
    int i, j=0;
    int gr = 40;
    int anz = 0;
    int a=0;
    FILE *fp;
	
    // Öffnen und Lesen der Dateien
    if((fp=fopen("...", "r"))==NULL) {
        fprintf(stderr, "Datei konnte nicht gefunden und geöffnet werden!\n");
        return 1;
    }
	
    // while-Schleife: Lesen der Werte aus den Dateien
    while (fscanf(fp, "%d", &zahl)==1) {
        if (anz>=MAXW)
            break;
        zahlen[anz] = zahl;
        anz++;
    }
    fclose(fp);
	
    // Berechnung
    for(i=0;i<anz;i++) {
        j = (zahlen[i]-1)/gr;
        zaehler[j]++;
    }
	
    // Ausgabe
    printf("\nEs wurden %d Zahlen eingelesen.\n", anz);
    printf("Histogramm - Anzahl Werte je Intervall\n");
    printf("======================================\n");
    printf("Intervallgroesse = %d\n", gr);
    printf(" Nr. (von - bis):  Anzahl\n");
    printf("-------------------------\n");
    for(i=0;i<ZAEHLER;i++) {
        a = zaehler[i]/(0.5*gr);
        printf("%3d.(%4d-%4d):%5d - ", i, i*gr+1, (i+1)*gr, zaehler[i]);
        for(j=0;j<=a;j++)
            printf("*");
        printf("\n");
    }
    printf("Kontrollsumme:  %d\n\n\n", anz);
	
    return 0;
}
