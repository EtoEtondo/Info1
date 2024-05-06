/***********************************************************************
 * vec_funcs.c
 * Sammlung von Funktionen zur 3D-Vektorrechnung.
 ***********************************************************************/

#include "vec_funcs.h"

/***********************************************************************/

int vec_read(char *infilename, vector_t vectors[], const int MAXV) {
    /* liest Vektoren von Datei in struct-array vectors ein,
     * gibt Anzahl gelesener Vektoren zurück */

    FILE *infile;
    double c1, c2, c3;
    int nv = 0;

    /* Eingabedatei oeffnen und pruefen */
    if ((infile = fopen(infilename, "r")) == NULL) {
        fprintf(stderr, " *** Fehler: Kann '%s' nicht zum Lesen oeffnen!\n",
                infilename);
        return 0;
    }

    /* Schleife ueber alle Test-Vektoren(je 3 doubles), speichern */
    while (fscanf(infile, "%lf %lf %lf", &c1, &c2, &c3) == 3) {
        if (nv >= MAXV) {    /* Feldgroesse absichern */
            fprintf(stderr,
                    " *** Hinweis: Mehr als %d Testvektoren auf der Datei!\n", MAXV);
            break;
        }
        vectors[nv] = vec_gen(c1, c2, c3);
        nv++;
    }

    /* Eingabedatei schliessen und Kontrollmeldung */
    fclose(infile);
    printf("Es wurden %d Testvektoren eingelesen.\n\n", nv);
    
    return nv;
}

/***********************************************************************/

vector_t vec_gen(const double xcoord,
                 const double ycoord,
                 const double zcoord) {
    /* erzeugt einen Ortsvektor aus drei kartesischen Koordinaten */
    /* TODO */
    
    vector_t vec = {xcoord,ycoord,zcoord};

    return vec;
}

/***********************************************************************/

void vec_out(const vector_t a) {
    /* gibt einen Ortsvektor formatiert nach stdout aus */
    /* TODO */
    
    printf("[ %6.3lf | %6.3lf | %6.3lf ]",a.x,a.y,a.z);

}

/***********************************************************************/

void vec_out_idx(vector_t vectors[], const int idx) {
    /* gibt ein Element des Vektor-Feldes mit
     * Index formatiert nach stdout aus */

    printf("%3d:", idx);
    vec_out(vectors[idx]);
}

/***********************************************************************/

double vec_norm(const vector_t a) {
    /* Betrag/Norm eines Vektors */
    /* TODO */
    
    double norm = sqrt(pow(a.x,2)+pow(a.y,2)+pow(a.z,2));
    
    return norm;
}

/***********************************************************************/

vector_t vec_add(const vector_t a, const vector_t b) {
    /* Addiert zwei Ortsvektoren */
    /* TODO */
    
    vector_t vsum = {
        a.x+b.x,
        a.y+b.y,
        a.z+b.z };

    return vsum;
}

/***********************************************************************/

vector_t vec_smul(const vector_t a, const double skalar) {
    /* Multipliziert ein Skalar mit einem Vektor */
    /* TODO */
    
    vector_t smul = {
        a.x*skalar,
        a.y*skalar,
        a.z*skalar };
    
    return smul;
}

/***********************************************************************/

int vec_equal(const vector_t a, const vector_t b) {
    /* Vergleicht zwei Vektoren auf Identität */
    /* TODO */
    
    if((a.x==b.x)&&(a.y==b.y)&&(a.z==b.z)) return 1;
    else return 0;
    
}

/***********************************************************************/

double vec_dotp(const vector_t a, const vector_t b) {
    /* Bildet Skalarprodukt des Vektors */
    /* TODO */
    
    double skalar = a.x*b.x + a.y*b.y + a.z*b.z ;
    
    return skalar;
}

/***********************************************************************/

vector_t vec_crossp(const vector_t a, const vector_t b) {
    /* Bildet Kreuzprodukt zweier Vektoren */
    /* TODO */
    
    vector_t kreuzp = {
        ((a.y*b.z)-(a.z*b.y)),
        ((a.z*b.x)-(a.x*b.z)),
        ((a.x*b.y)-(a.y*b.x)) };
    
    return kreuzp;
}

/***********************************************************************/

double vec_angle(const vector_t a, const vector_t b) {
    /* Winkelberechnung zweier Vektoren */
    /* TODO */
    double innAcos = vec_dotp(a,b)/(vec_norm(a)*vec_norm(b));
    
    if (innAcos < -1)
        innAcos = -1;
    else if (innAcos > 1)
        innAcos = 1;
    
    double winkel;
    if (vec_norm(a) == 0 || vec_norm(b) == 0)
        winkel = 0;
    else
        winkel = 180 * ((acos(innAcos))/acos(-1));
    
    return winkel;
}

/***********************************************************************/
    
    

