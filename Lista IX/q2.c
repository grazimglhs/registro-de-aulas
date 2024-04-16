#include <stdio.h> 
#include <locale.h>
int main (){
    setlocale (LC_ALL, "portuguese");
    int n;
    printf ("Digite um valor inteiro: ");
    scanf ("%i", &n);
    if (n > 0){
        printf ("%i e positivo!", n);
    }
    else {
         if (n < 0){
            printf ("%i e negativo!", n);
    }
    else {
        printf ("0 e neutro");
    }
}
    return (0);
}