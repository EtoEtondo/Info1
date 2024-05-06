// ::UNVOLLSTÄNDIG::

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Variablen
    int eing;
    int i;
    int mod_r;
    
    // Ausgabe
    printf("---------------------------\n");
    printf(": NÄCHSTGRÖSSTE  PRIMZAHL :\n");
    printf("---------------------------\n\n");
    printf("Dieses Programm findet die\n");
    printf("nächstgrösste Primzahl!\n\n");
    
    // Eingabe
    do {
        printf("Geben sie dafuer eine\nnatürlich Zahl ein: ");
        scanf("%d", &eing);
        printf("\n");
        if (eing <= 0) {
            printf("Diese Zahl ist keine natür-\nliche Zahl! ");
            printf("Wiederholen Sie\nbitte die Eingabe!\n\n");
        }
    } while (eing <= 0);
    
    // if-Schleife
    if (eing >= 1 && eing <= 3) {
        printf("Die Zahl %d ist eine Prim-\nzahl!", eing);
    }
    else {
        if (eing % 2 == 0) {
            eing ++;
        }
        eing -= 2;
        do {
            eing += 2;
            i = 1;
            do {
                i += 2;
                mod_r = eing % i;
            } while (mod_r != 0 || i < eing);
        } while (mod_r != 0 || i < eing);
        printf("Die nächstgrösste Primzahl\nist %d!", eing);
    }
    printf("\n\n---------------------------\n\n");
    
    // return
    return 0;
}
