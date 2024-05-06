#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int nStart, nEnd;
    do {
        printf("%8s", "nStart: ");
        scanf("%d", &nStart);
        printf("%8s", "nEnd: ");
        scanf("%d", &nEnd);
        printf("\n");
        if (nStart > nEnd) {
            printf("Geben Sie einen kleineren nStart, als nEnd ein!\n\n");
        }
    } while (nStart > nEnd);
    int n = log10(nEnd)+1;
    int x;
    for (x=nStart; x<=nEnd; x++) {
        printf("text0%0.*d.txt\n", n, x);
    }
    printf("\n");
    return 0;
}
