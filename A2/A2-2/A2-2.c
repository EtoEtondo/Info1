#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int x; 
    int y;
    int z1;
    int z2;
    int z3=0;
    for (y=2; y<=10; y++) {
        z2 = 0;
        for (x=1; x<=10; x++) {
            z1 = y*x;
            printf("%3d   ", z1);
            z2 = z2+z1;
        }
        printf("| %5d\n", z2);
        z3 = z3+z2;
    }
    printf("%62s", "| ");
    printf("%5d\n\n\n", z3);
    return 0;
}

