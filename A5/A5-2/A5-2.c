#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "myfuncs.h"

int main() {
    int a=1;
    double matrix[DIM][DIM];
    FILE *fp;
    if((fp=fopen("...", "r"))==NULL) {
        printf("Datei konnte nicht gefunden und geöffnet werden!\n");
        return 0;
    }
	
    while(read_mat(matrix,fp)) {
        printf("%d. Matrix (original)\n\n", a);
        print_mat(matrix);
        transp_mat(matrix);
        printf("\n%d. Matrix (transponiert)\n\n", a);
        print_mat(matrix);
        printf("\n");
        a++;
    }
    fclose(fp);
	
    return 0;
}

