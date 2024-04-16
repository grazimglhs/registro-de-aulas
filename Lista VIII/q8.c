#include <stdio.h>
int fatorial (int p);
int main (){
    int n;
    printf ("Digite um numero inteiro: ");
    scanf ("%i", &n);
    printf ("%i! = %i\n", n, fatorial(n));
    return (0);
}
int fatorial (int p){
    int i, fatorial = 1;
    for (i = 1; i <= p; i++){
        fatorial = fatorial * i;
    }
    return (fatorial);
}