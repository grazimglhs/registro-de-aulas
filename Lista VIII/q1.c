#include <stdio.h>
#include <locale.h>
void verifica (int p);
int main (){
    setlocale (LC_ALL, "portuguse");
    int a;
    printf ("Digite um numero: ");
    scanf ("%i", &a);
    verifica (a);
    return (0);
}
void verifica (int p){
    if (p == 0){
        printf ("O numero %i e igual a 0", p);
    }
    else {
        printf ("O numero %i nao e igual a 0\n", p);
    }
}