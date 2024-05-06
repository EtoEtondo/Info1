#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    // Variablen
    unsigned int nStart, nEnd;
    char fname [200];
    int x;
    FILE *fp;
	
    // Abfrage der Werte mit do-Schleife
    do {
        fprintf(stdout, "%8s", "nStart: ");
        fscanf(stdin, "%d", &nStart);
        fprintf(stdout, "%8s", "nEnd: ");
        fscanf(stdin, "%d", &nEnd);
        fprintf(stdout, "\n");
        if (nStart > nEnd) {
            fprintf(stdout, "Geben Sie einen kleineren nStart, als nEnd ein!\n\n");
        }
    } while (nStart > nEnd);
	
    // Ausgabe der Datei mit for-Schleife
    int n = log10(nEnd) + 1;
    for (x=nStart; x<=nEnd; x++) {
        fprintf(stdout, "text0%.*d.txt\n", n, x);
        sprintf(fname, "...", n, x);
        if((fp=fopen(fname,"w"))==NULL) {
            fprintf(stderr, "Dateiname nicht gefunden!\nEs wird eine Datei mit diesem Namen angelegt!");
        }
        fprintf(fp, "/* text0%.*d.txt", n, x);
        fclose(fp);
    }
    printf("\n");
    return 1;
}
