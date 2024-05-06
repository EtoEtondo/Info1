#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    // Zufallszahl
    srand(time(NULL));
	
    // Variablen & file-pointer
    FILE *fp;
    int a, end;
    char fname [200];
	
    // Abfrage des Endweerts mit do-Schleife
    do {
        fprintf(stdout, "\nGeben Sie einen Endwert ein: ");
        fscanf(stdin, "%d", &end);
        fprintf(stdout, "\n");
        if (end<10000) {
            fprintf(stdout, "\nBitte einen Wert größer-gleich 10000 eingeben!\n\n");
        }
    } while (end<10000);
	
    // Erstellung der Datei
    sprintf(fname, "...");
	
    // Öffnen/Schreiben der Datei
    if((fp=fopen(fname,"w"))==NULL) {
        fprintf(stderr, "ERROR!");
        return 1;
    }
	
    // Erstellen d. Texts innerhalb der Datei
    int ab = log10(end)+6;
    for(a=1; a<=end; a++){
        int r=rand();
        if(r%2==0){
            fprintf(fp, "%*d", ab, a);
            fprintf(stdout, "%*d", ab, a);
        }
        else {
            fprintf(fp, "%*.3lf", ab, a +((double)sqrt(r)-(int)sqrt(r)));
            fprintf(stdout, "%*.3lf", ab, a +((double)sqrt(r)-(int)sqrt(r)));
        }
        if(a%10==0){
            fprintf(stdout, "\n");
            fprintf(fp, "\n");
        }
    }
	
    // Datei schließen
    fclose(fp);
	
    // return 1;
    return 1;
}
