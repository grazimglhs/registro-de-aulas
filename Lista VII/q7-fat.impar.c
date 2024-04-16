#include <stdio.h>
int main (){
    int i, j, f;
    printf ("fatorial dos numeros impares entre 1 e 11:\n");
    for (i = 1; i <= 11; i = i + 2){
        f = 1;
        for (j = 1; j <= i; j++){
            f = f * j;
        }
        printf ("%i! = %i\n", i, f);
    }
    return (0);
}