#include <stdio.h>
#include <locale.h>
int main (){
    setlocale (LC_ALL, "portuguese");
    int i, j, x = 1, m[3][3];
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf ("Digite i %iº valor: ", x++);
            scanf ("%i", &m[i][j]);
        }
    }
    printf ("\nMatriz Inversa:\n");
    for (i = 2; i >= 0; i--){
        for (j = 2; j >= 0; j--){
            printf ("%i ", m[i][j]);
        }
    }
    printf ("\n");
    return (0);
}