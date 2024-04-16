#include <stdio.h>
void verifica (int n);
int main (){
    int a;
    printf ("Digite um valor: ");
    scanf ("%i", &a);
    verifica (a);
    return (0);
}
void verifica (int n){
    if (n % 2 ==0){
        printf ("O numero %i e par!", n);
    }
    else{
        printf ("O numero %i e impar!", n);
    }
}