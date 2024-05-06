#include "myfuncs.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int read_mat(double matrix[DIM][DIM],FILE *fp) {
    int i, j;
    for(i=0;i<DIM;i++) {
        for(j=0;j<DIM;j++) {
            if(fscanf(fp, "%lf", &matrix[i][j])!=1) {
                if(i>0 && j>0) {
                    fprintf(stderr,"Nicht genügend Matrix-Elemente auf der Datei!\n\n\n");
                }
                return 0;
            }
        }
    }
    return 1;
}

void print_mat(double matrix[DIM][DIM]) {
    int i, j;
    for(i=0; i<DIM; i++) {
        printf("[");
        for(j=0; j<DIM; j++) {
            printf(" %.1lf", matrix[i][j]);
        }
        printf(" ]\n");
    }
    printf("\n");
}

void swap_val(double *a, double *b) {
    double c;
    c = *a;
    *a = *b;
    *b = c;
}

void transp_mat(double matrix[DIM][DIM]) {
    int i, j;
    for(i=0;i<DIM;i++) {
        for(j=i;j<DIM;j++) {
            swap_val(&matrix[i][j], &matrix[j][i]);
        }
    }
}


