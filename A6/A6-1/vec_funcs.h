#ifndef VEC_FUNCS_H
#define VEC_FUNCS_H
/***********************************************************************
 * vec_funcs.h
 * Headerfile der Sammlung von Funktionen zur 3D-Vektorrechnung.
 ***********************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Struktur zur Definition eines 3D-Punktes/Ortsvektors */
typedef struct {

    double x,y,z;

} vector_t;

int vec_read(char *infilename, vector_t vectors[], const int MAXV);
/* liest Vektoren von Datei in struct-array vectors ein,
 * gibt Anzahl gelesener Vektoren zurück */

vector_t vec_gen(const double x, const double y, const double z);
/* erzeugt einen Ortsvektor aus drei kartesischen Koordinaten */

void vec_out(const vector_t a);
/* gibt einen Ortsvektor formatiert nach stdout aus */

void vec_out_idx(vector_t vectors[], const int idx);
/* gibt ein Element des Vektor-Feldes mit Index formatiert nach stdout aus */

double vec_norm(const vector_t a);
/* Betrag/Norm eines Vektors */

vector_t vec_add(const vector_t a, const vector_t b);
/* Addiert zwei Ortsvektoren */

vector_t vec_smul(const vector_t a, const double skalar);
/* Multipliziert Skalar mit Vektor */

int vec_equal(const vector_t a, const vector_t b);
/* Vergleicht zwei Vektoren */

double vec_dotp(const vector_t a, const vector_t b);
/* Berechent Skalarpodukt */

vector_t vec_crossp(const vector_t a, const vector_t b);
/* Bildet Kreuzprodukt zweier Vektoren */

double vec_angle(const vector_t a, const vector_t b);
/* Winkelberechnung zweier Vektoren */

/* TODO */

#endif
