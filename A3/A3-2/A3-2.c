#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double pi=acos(-1);
    int a;
	
    // linksbündig
    for (a=1; a<=10; a++) {
        printf("%.*lf\n", a, pi);
    }
    printf("\n");
	
    // rechtsbündig
    for (a=1; a<=10; a++) {
        printf("%20.*lf\n", a, pi);
    }
    printf("\n");
	
    return 0;
}
