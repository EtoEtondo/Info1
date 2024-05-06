#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    // Variablen
    int iz;
    int anzahl_int=0, ges_vielf=0, vielf;
    float fz;
    int anzahl_fl=0;
    char buf[20];
    
    // file-pointer
    FILE *fp_in;
    
    // Öffnen der Datei
    if((fp_in=fopen("...","r"))==NULL) {
        fprintf(stderr, "Konnte Datei nicht finden!\n\n\n");
        return 1;
    }
    
    // Abfrage des Vielfachen mit do-Schleife
    do {
        fprintf(stdout, "\nGeben Sie einen Vielfachen ein: ");
        fscanf(stdin, "%d", &vielf);
        fprintf(stdout, "\n");
        if (vielf<1) {
            fprintf(stdout, "\nBitte einen Wert größer-gleich 1 eingeben!\n\n");
        }
    } while (vielf<1);
    
    // Summieren der Werte und der
    while (fscanf(fp_in, "%s", (char*)&buf)==1){
        iz = atoi(buf);
        fz = atof(buf);
        // int-Zahlen
        if(fz-iz==0){
            anzahl_int++;
            if (iz%vielf==0){
                ges_vielf++;
            }
        }
        // float-Zahlen
        else {
            anzahl_fl++;
        }
    }
    
    // Schließen der Datei
    fclose(fp_in);
    
    // Ausgabe der Lösungen
    fprintf(stdout, "Summe aller Zahlen: %d\n", anzahl_int+anzahl_fl);
    fprintf(stdout, "Summe der Ganzzahlen: %d\n", anzahl_int);
    fprintf(stdout, "Summe der Kommazahlen: %d\n\n", anzahl_fl);
    fprintf(stdout, "Anzahl der Vielfachen von %d: %d\n\n\n", vielf, ges_vielf);
    
    // return 1;
    return 1;
}

