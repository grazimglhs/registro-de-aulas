#include <stdio.h>
#include <locale.h>
int main (){
    setlocale (LC_ALL, "portuguese");
    int i, j, x = 1, A[2][3], B[2][3];
    printf ("Preenchimento da matriz A:\n ");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf ("%iº valor: ", x++);
            scanf ("%i", &A[i][j]);
        }
    }
    printf ("\n\nPreenchimento da matriz B:\n ");
    x = 1;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf ("%iº valor: ", x++);
            scanf ("%i", &B[i][j]);
        }
    }
    printf ("\n\nSoma das matrizes A e B:\n ");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
           printf ("%i ", A[i][j] + B[i][j]);
        }
    }
    return (0);
}