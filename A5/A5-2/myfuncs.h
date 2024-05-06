#ifndef MYFUNCS_H
#define MYFUNCS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum {DIM=3};

int read_mat(double matrix[DIM][DIM],FILE *fp);
void print_mat(double matrix[DIM][DIM]);
void transp_mat(double matrix[DIM][DIM]);
void swap_val(double *a, double *b);

#endif 
