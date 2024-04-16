#include <stdio.h>
#include <locale.h>
int main (){
    setlocale (LC_ALL, "portuguese");
    float A[4][2], B[4][2];
    int l, c, x = 1;
    //preenchimento da matriz A
    for (l = 0; l < 4; l++){ 
        for (c = 0; c < 2; c++){
            printf ("Digite o %iº valor: ", x++);
            scanf ("%f", &A[l][c]);
        }
    }
    //preechimento da matriz B
    for (l = 0; l < 4; l++){ 
        for (c = 0; c < 2; c++){
            B[3 - l][1 -c] = A[l][c];
        }
    }
    //exibição de A
    printf ("\nMatriz A:\n"); 
    for (l = 0; l < 4; l++){
        for (c = 0; c < 2; c++){
            printf ("%.0f ", A[l][c]);
        }
        printf ("\n");
    }
    //exibição de B
    printf ("\nMatriz B:\n"); 
    for (l = 0; l < 4; l++){
        for (c = 0; c < 2; c++){
            printf ("%.0f ", B[l][c]);
        }
        printf ("\n");
    }
    return (0);
}