#include <stdio.h>
void verifica (int p);
int main (){
    int a;
    printf ("Digite a sua idade: ");
    scanf ("%i", &a);
    verifica (a);
    return (0);
}
void verifica (int p){
    if (p >= 18){
        printf ("Voce e maior de idade!");
    }
    else {
        printf ("Voce e menor de idade!");
    }
}