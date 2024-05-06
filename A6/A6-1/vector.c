/***********************************************************************
 * vector
 * Testprogramm fuer Verwendung von Funktionen zur 3D-Vektorrechnung.
 * Liest Testvektoren von Datei, ruft damit alle Vektor-Funktionen auf.
 *
 ***********************************************************************/
#include <stdlib.h>
#include <stdio.h>

#include "vec_funcs.h"
#include "vec_testers.h"

int main() {

   enum { MAXV  = 30 };    /* Maximalzahl array-Elemente/Test-Vektoren */

   vector_t vectors[MAXV]; /* array der eingelesen Testvektoren */
   int nv;                 /* Anzahl eingelesener Vektoren */
   char infilename [] = "testvectors.dat";

   printf("\n3D-Vektorrechnung\n");
   printf("=================\n\n");

   /* Test-Vektoren einlesen und speichern */
   nv = vec_read(infilename, vectors, MAXV);
   if (nv <= 0) return 1;

   /* b) Kontroll-Ausgabe der Test-Vektoren */
   test_vec_out(vectors, nv);

   /*************************************************************
    * 1) Verwendung aller definierten Vektor-Funktionen
    *************************************************************/

   printf("=== Funktionsaufrufe mit Test-Vektoren ===\n\n");

   /* c) Betrag/Norm */
   test_vec_norm(vectors, nv);

   /* d) Vektoraddition */
   test_vec_add(vectors, nv);

   /* e) Mult. mit Skalar */
   test_vec_smul(vectors, nv);

   /* f) Vergleich */
   test_vec_equal(vectors, nv);

   /* g) Skalarprodukt */
   test_vec_dotp(vectors, nv);

   /* h) Kreuzprodukt */
   test_vec_crossp(vectors, nv);

   /* i) Winkel */
   test_vec_angle(vectors, nv);

   printf("\n");
   return 0;
}


