#include <stdio.h>
#include <locale.h>
int main (){
    setlocale (LC_ALL, "portuguese");
    char nome[50];
    int i, cont = 1;
    printf ("Digite seu nome completo: ");
    gets (nome);
    for (i = 0; nome[i] != '\0'; i++){
        cont++;
    }
    printf ("Seu nome possui %i caracteres", cont);
    return (0);
}