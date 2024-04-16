#include <stdio.h>
#include <locale.h>
int main (){
    setlocale (LC_ALL ,"portuguese");
    int l = 0, c = 0, i, j, x = 1, a[l][c], b[l][c];
    //solicita e armazena o l e c da matriz
    printf ("Digite o número de linhas da matriz: ");
    scanf ("%i", &l);
    printf ("Digite o número de colunas da matriz: ");
    scanf ("%i", &c);
    //preenchimento da matriz a
    printf ("Digite os valores da matriz a:\n");
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            printf ("%i°", x++);
            scanf ("%i", &a[i][j]);
        }
        printf ("\n");
    }
    //preenchimento da matriz b
    printf ("Digite os valores da matriz b:\n");
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            b[i][j] = a[i][j] * 3;
        }
    }
    //exibição da matriz a
    printf ("\nMatriz de a:\n");
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            printf ("%i", a[i][j]);
        }
        printf ("\n");
    }
    //exibição da matriz b
    printf ("\nMatriz de b (a * 3):\n");
    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            printf ("%i", b[i][j]);
        }
        printf ("\n");
    }
    return (0);
}