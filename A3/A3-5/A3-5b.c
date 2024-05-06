#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    // Variablen
    int ges_wert=0, ges_vielf=0;
    int wert, vielf;
	
    // file-pointer
    FILE *fp_in;
	
    // Abfrage des Vielfachen mit do-Schleife
    do {
        fprintf(stdout, "\nGeben Sie einen Vielfachen ein: ");
        fscanf(stdin, "%d", &vielf);
        fprintf(stdout, "\n");
        if (vielf<1) {
            fprintf(stdout, "\nBitte einen Wert größer-gleich 1 eingeben!\n\n");
        }
    } while (vielf<1);
	
    // Öffnen der Datei
    if((fp_in=fopen("...","r"))==NULL) {
        fprintf(stderr, "Konnte Dateinamen nicht finden!\n\n\n");
        return 1;
    }
	
    // Summieren der Werte und der
    while (fscanf(fp_in, "%d", &wert)==1){
        if (wert%vielf==0){
            ges_vielf++;
        }
        ges_wert=ges_wert+wert;
    }
	
    // Schließen der Datei
    fclose(fp_in);
	
    // Ausgabe der Lösungen
    fprintf(stdout, "Summe aller Ganzzahlen von 1 bis 10000: %d\n\n", ges_wert);
    fprintf(stdout, "Anzahl der Vielfachen von %d: %d\n\n\n", vielf, ges_vielf);
	
    // return 1;
    return 1;
}
