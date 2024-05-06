#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    int x;
    int y;

    printf("-------------------------------------------------------\n");
    printf("Berechnung des Funktionswert y eines Polynoms 3. Grades\n");
    printf("-------------------------------------------------------\n\n");
    printf("\t****************************\n");
    printf("\t* y = ax^3 + bx^2 + cx + d *\n");
    printf("\t****************************\n\n");
    printf("\tGeben Sie a an: ");
    scanf("%d", &a);
    printf("\tGeben Sie b an: ");
    scanf("%d", &b);
    printf("\tGeben Sie c an: ");
    scanf("%d", &c);
    printf("\tGeben Sie d an: ");
    scanf("%d", &d);
    printf("\tGeben Sie x an: ");
    scanf("%d", &x);
    printf("\n");

    y = a*(x*x*x)+b*(x*x)+c*x+d;

    printf("\ty = %d*%d^3 + %d*%d^2 + %d*%d + %d\n\n", a, x, b, x, c, x, d);
    printf("\tIhr y-Wert: %d\n\n", y);
    printf("-------------------------------------------------------\n");
    printf("-------------------------------------------------------\n\n");

    return 0;
}
