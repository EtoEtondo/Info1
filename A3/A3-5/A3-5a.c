#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    // Variablen
    FILE *fp;
    int a;
    char fname [200];
	
    // Erstellung der Datei
    sprintf(fname, "...");
    
	// Öffnen/Schreiben der Datei
    if((fp=fopen(fname,"w"))==NULL) {
        fprintf(stderr, "Dateiname nicht gefunden!\nEs wird eine Datei mit diesem Namen angelegt!");
    }
    
	// Erstellen d. Texts innerhalb der Datei
    for(a=1; a<=10000; a++){
        fprintf(fp, "%5d   ", a);
        if(a%10==0){
            fprintf(fp, "\n");
        }
    }
    
	// Schließen der Datei
    fclose(fp);
    
	// return 1;
    return 1;
}
