#include <stdio.h>
#include <math.h>

int main() {
    // Variablen
    enum {MAXW=10000};
    int zahlen_nor[MAXW]={0};
    int zahlen_uni[MAXW]={0};
    int zahl;
    int summe_n = 0, summe_u = 0;
    int anz_n = 0, anz_u = 0;
    int i;
    int max_n, min_n;
    int max_u, min_u;
    double mitw_n, mitw_u;
    double sta_n_z = 0, sta_u_z = 0;
    double sta_n, sta_u;
    FILE *fp_u;
    FILE *fp_n;
	
    // Öffnen und Lesen der Dateien
    if((fp_u=fopen("...", "r"))==NULL) {
        fprintf(stderr, "Datei konnte nicht gefunden und geöffnet werden!\n");
        return 1;
    }
    if((fp_n=fopen("...", "r"))==NULL) {
        fprintf(stderr, "Datei konnte nicht gefunden und geöffnet werden!\n");
        return 1;
    }
	
    // while-Schleifen: Lesen der Werte aus den Dateien
    while (fscanf(fp_u, "%d", &zahl)==1) {
        if (anz_u>=MAXW)
            break;
        zahlen_uni[anz_u] = zahl;
        summe_u += zahl;
        anz_u++;
    }
    fclose(fp_u);
    while (fscanf(fp_n, "%d", &zahl)==1) {
        if (anz_n>=MAXW)
            break;
        zahlen_nor[anz_n] = zahl;
        summe_n += zahl;
        anz_n++;
    }
    fclose(fp_n);
	
    // for-Schleifen: Maximum- und Minimumermittlung
    max_u = min_u = zahlen_uni[0];
    for (i=1;i<anz_u;i++) {
        zahl = zahlen_uni[i];
        if (zahl<min_u)
            min_u = zahl;
        if (zahl>max_u)
            max_u = zahl;
    }
    max_n = min_n = zahlen_nor[0];
    for (i=1;i<anz_n;i++) {
        zahl = zahlen_nor[i];
        if (zahl<min_n)
            min_n = zahl;
        if (zahl>max_n)
            max_n = zahl;
    }
	
    // Berechnung: Mittelwert
    mitw_u = (double) summe_u / anz_u;
    mitw_n = (double) summe_n / anz_n;
	
    // Berechnung: Standardabweichung
    for (i=0;i<anz_u;i++) {
        zahl = zahlen_uni[i];
        sta_u_z += pow((zahl-mitw_u), 2);
    }
    sta_u = sqrt(sta_u_z/anz_u);
    for (i=0;i<anz_n;i++) {
        zahl = zahlen_nor[i];
        sta_n_z += pow((zahl-mitw_n), 2);
    }
    sta_n = sqrt(sta_n_z/anz_n);
	
    // Ausgabe
    printf("::BERECHNUNGEN::\n\n");
    printf("{random_uniform.txt}\n");
    printf("Es wurden %d Zahlen eingelesen.\n", anz_u);
    printf("%35s%8d\n", "Das Minimum beträgt:", min_u);
    printf("%35s%8d\n", "Das Maximum beträgt:", max_u);
    printf("%35s%11.2lf\n", "Der Mittelwert beträgt:", mitw_u);
    printf("%35s%11.2lf\n\n", "Die Standardabweichung beträgt:", sta_u);
    printf("{random_normal.txt}\n");
    printf("Es wurden %d Zahlen eingelesen.\n", anz_n);
    printf("%35s%8d\n", "Das Minimum beträgt:", min_n);
    printf("%35s%8d\n", "Das Maximum beträgt:", max_n);
    printf("%35s%11.2lf\n", "Der Mittelwert beträgt:", mitw_n);
    printf("%35s%11.2lf\n\n\n", "Die Standardabweichung beträgt:", sta_n);
	
    // return
    return 0;
}
