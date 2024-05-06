#include <stdio.h>

int main() {
    // Variablen, Arrays, Pointer
    enum {DIM=3};
    int i, j;
    double matrix[DIM][DIM];
    double vec_a[DIM];
    FILE *fp;
	
    // Öffnen der Datei
    if((fp=fopen("...", "r"))==NULL) {
            fprintf(stderr, "Datei konnte nicht gefunden und geöffnet werden!\n");
            return 1;
    }
    // Matrix
    for(i=0;i<DIM;i++) {
        for(j=0;j<DIM;j++) {
            if(fscanf(fp, "%lf", &matrix[i][j])!=1) {
                fprintf(stderr,"Nicht genügend Matrix-Elemente auf der Datei!\n\n\n");
                return 1;
            }
        }
    }
	
    // Vektor(en)
    while(1) {
        double vec_b[DIM] = {0};
        for(i=0;i<DIM;i++) {
            if(fscanf(fp, "%lf", &vec_a[i])!=1) {
                fprintf(stderr,"Nicht genügend Vektor-Elemente auf der Datei!\n\n\n");
                fclose(fp);
                return 1;
            }
        }
        for(i=0; i<DIM; i++) {
            for(j=0; j<DIM; j++) {
                vec_b[i] += matrix[i][j]*vec_a[j];
            }
        }
        // äußere Schleife: komplette Ausgabe der Gleichung
        for(i=0; i<DIM; i++) {
            printf("[");
            // innere Schleife: nur für Matrix-Werte verantwortlich
            for(j=0; j<DIM; j++) {
                printf(" %.1lf", matrix[i][j]);
            }
            printf(" ] %c ( %5.1lf ) %c ( %5.1lf )\n", i==DIM/2? '*': ' ', vec_a[i], i==DIM/2? '=': ' ', vec_b[i]);
        }
        printf("\n");
    }
	
    return 0;
}
