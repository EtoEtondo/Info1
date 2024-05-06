/***********************************************************************
 * vec_testers.c
 * Sammlung von Test-Funktionen zur 3D-Vektorrechnung.
 ***********************************************************************/

#include "vec_testers.h"

/***********************************************************************/

void test_vec_out(vector_t vectors[], const int nv) {
    /* c) Test-Ausgabe Vektoren */

    int i;

    printf("=== Kontroll-Ausgabe eingelesener Test-Vektoren ===\n\n");
    for (i = 0; i < nv; i++) {
        vec_out_idx(vectors, i);
        printf("\n");
    }
    printf("\n");
}

/***********************************************************************/

void test_vec_norm(vector_t vectors[], const int nv) {
   /* c) Test-Ausgabe Betrag/Norm eines Vektors */

   int i;

   printf("Betrag:\n");
   printf("-------\n");
   for (i = 0; i < nv; i++) {
      vec_out_idx(vectors, i);
      printf(" ==> %6.3f\n", vec_norm(vectors[i]));
   }
   printf("\n");
}

/***********************************************************************/

void test_vec_add(vector_t vectors[], const int nv) {
    /* d) Test-Ausgabe Betrag/Norm eines Vektors */
    
    int i;

    printf("Vektoraddition:\n");
    printf("---------------\n");
    for (i = 0; i < nv - 1; i++) {
        vec_out_idx(vectors, i);
        printf(" +\n");
        vec_out_idx(vectors, i + 1);
        printf(" ==> ");
        vec_out(vec_add(vectors[i], vectors[i + 1]));
        printf("\n");
    }
    printf("\n");
}

/***********************************************************************/

void test_vec_smul(vector_t vectors[], const int nv) {
    /* e) Test-Ausgabe Skalar mult. mit Vektor */
    /* TODO */
    printf("Skalar(eigener Betrag) * Vektor:\n");
    printf("--------------------------------\n");
    int i;
    for (i = 0; i < nv; i++) {
        vec_out_idx(vectors, i);
        printf(" ==> ");
        vec_out(vec_smul(vectors[i], vec_norm(vectors[i])));
        printf("\n");
    }
    printf("\n");
}

/***********************************************************************/

void test_vec_equal(vector_t vectors[], const int nv) {
    /* f) Test-Ausgabe Vergleich zweier Vektoren */
    /* TODO */
    printf("Vergleichen:\n");
    printf("------------\n");
    int i,j;
    for (i = 0; i < nv; i++) {
        vec_out_idx(vectors, i);
        printf("\n");
        for (j = i+1; j < nv; j++) {
            if(vec_equal(vectors[i],vectors[j])) {
                printf("    ==");
                vec_out_idx(vectors, j);
                printf("\n");
            }
        }
    }
    printf("\n");
}

/***********************************************************************/

void test_vec_dotp(vector_t vectors[], const int nv) {
    /* g) Test-Ausgabe Skalarprodukt */
    /* TODO */
    printf("Skalarprodukt:\n");
    printf("--------------\n");
    int i;
    for (i = 0; i < nv-1; i++) {
        vec_out_idx(vectors, i);
        printf(" *\n");
        vec_out_idx(vectors, i+1);
        printf(" ==> %6.3f\n", vec_dotp(vectors[i],vectors[i+1]));
    }
    printf("\n");
}

/***********************************************************************/

void test_vec_crossp(vector_t vectors[], const int nv) {
    /* h) Test-Ausgabe Kreuzprodukt */
    /* TODO */
    printf("Kreuzprodukt:\n");
    printf("-------------\n");
    int i;
    for (i = 0; i < nv-1; i++) {
        vec_out_idx(vectors, i);
        printf(" x\n");
        vec_out_idx(vectors, i+1);
        printf(" ==> ");
        vec_out(vec_crossp(vectors[i], vectors[i + 1]));
        printf("\n");
    }
    printf("\n");
}

/***********************************************************************/

void test_vec_angle(vector_t vectors[], const int nv) {
    /* i) Test-Ausgabe eingeschlossener Winkel */
    /* TODO */
    printf("eingeschlossener Winkel:\n");
    printf("------------------------\n");
    int i;
    for (i = 0; i < nv-1; i++) {
        vec_out_idx(vectors, i);
        printf(" V\n");
        vec_out_idx(vectors, i+1);
        printf(" ==> %3.1f\n", vec_angle(vectors[i],vectors[i+1]));
    }
    printf("\n");
}

/***********************************************************************/

