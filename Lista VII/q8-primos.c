#include <stdio.h>
int main (){
int x, y, i, primo;
    do {
        printf ("Digite o valor de x: ");
        scanf ("%d", &x);
    }while (x <= 0);
    do {
        printf ("digite o valor de y: ");
        scanf ("%d", &y);
    }while (x <= 0);
    if (x > y){
        printf ("intervalo invalido! x deve ser menor ou igual a y.\n");
        return (1);
    }
    printf ("numeros primos entre %d e %d:\n", x, y);
    for (i = x; i <= y; i++){
        primo = 1;
        for (int j = 2; j <= i / 2; j++){
        if (i % j == 0){
            primo = 0;
            break;
        }
    }
    if (primo){
        printf ("%d", i);
    }
}
    printf ("\n");
    return (0);
}