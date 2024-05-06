#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int fak(unsigned int a) {
    unsigned int i, x=1;
    if (a==1||a==0) return 1;
    for(i=2;i<=a;i++) {
        x *= i;
    }
    return x;
}

unsigned int rek_fak(unsigned int b) {
    if(b==1|b==0) return 1;
    return(rek_fak(b-1)*b);
}

int main() {
    int x;
    do {
        printf("\nFakultät: ");
        scanf("%d", &x);
        if(x<0)
            printf("Zahl groesser-gleich 0 eingeben!\n\n");
    } while(x<0);
    printf("iterativ: %d! = %d\n", x, fak(x));
    printf("rekursiv: %d! = %d\n\n\n", x, rek_fak(x));
    return 0;
}
