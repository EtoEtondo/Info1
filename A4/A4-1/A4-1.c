#include <stdio.h>

int main() {
    // Variablen und Arrays
    enum {DIM=3};
    int i, j;
    double matrix[DIM][DIM] = {2.1, 0.7, 0.2, 3.4, 1.3, 4.0, 2.3, 3.7, 1.1};
    double vec_a[DIM], vec_b[DIM]={0};
	
    // Vektor a eingeben
    printf("Bitte die %d Komponenten des Vektors a eingeben: \n", DIM);
    for(i=0;i<DIM;i++) {
        printf("a%d: ", i);
        scanf("%lf", &vec_a[i]);
    }
	
    // Vektor b wird berechnet
    for(i=0; i<DIM; i++) {
        for(j=0; j<DIM; j++) {
            vec_b[i] += matrix[i][j]*vec_a[j];
        }
    }
	
    // äußere Schleife: komplette Ausgabe der Gleichung
    printf("\nMatrix-/Vektor-Multiplikation\n");
    for(i=0; i<DIM; i++) {
        printf("[");
        // innere Schleife: nur für Matrix-Werte verantwortlich
        for(j=0; j<DIM; j++) {
            printf(" %.1lf", matrix[i][j]);
            }
        printf(" ] %c ( %5.1lf ) %c ( %5.1lf )\n", i==DIM/2? '*': ' ', vec_a[i], i==DIM/2? '=': ' ', vec_b[i]);
    }
    printf("\n\n");
	
    return 0;
}
