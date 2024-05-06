#ifndef VEC_TESTERS_H
#define VEC_TESTERS_H
/***********************************************************************
 * vec_testers.h
 * Headerfile der Sammlung von Test-Funktionen zur 3D-Vektorrechnung.
 *
 ***********************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "vec_funcs.h"

void test_vec_out(vector_t vectors[], const int nv);
/* b) Test-Ausgabe Vektoren */

void test_vec_norm(vector_t vectors[], const int nv);
/* c) Test-Ausgabe Betrag/Norm eines Vektors */

void test_vec_add(vector_t vectors[], const int nv);
/* d) Test-Ausgabe Betrag/Norm eines Vektors */

void test_vec_smul(vector_t vectors[], const int nv);
/* e) Test-Ausgabe Skalar mult. mit Vektor */

void test_vec_equal(vector_t vectors[], const int nv);
/* f) Test-Ausgabe Vergleich zweier Vektoren */

void test_vec_dotp(vector_t vectors[], const int nv);
/* g) Test-Ausgabe Skalarprodukt */

void test_vec_crossp(vector_t vectors[], const int nv);
/* h) Test-Ausgabe Kreuzprodukt */

void test_vec_angle(vector_t vectors[], const int nv);
/* i) Test-Ausgabe eingeschlossener Winkel */

#endif
