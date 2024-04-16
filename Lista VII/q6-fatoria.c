#include <stdio.h>
int main (){
    int i, n, f = 1;
    printf ("Digite um valor inteiro: ");
    scanf ("%i", &n);
    if (n < 0){
        printf ("Nao existe fatorial de numero negativo.");
    }
    else{
        for (i = 1; i <= n; i++){
            f = f * i;
        }
        printf ("%i! = %i", n, f);
    }
    return (0);
}