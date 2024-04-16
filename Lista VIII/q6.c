#include <stdio.h>
#define pi 3.14
float area (int p);
int main (){
    float r;
    printf ("Digite o valor do raio: ");
    scanf ("%f", &r);
    printf ("A area e %.2f", area(r));
    return (0);
}
float area (int p){
    return (pi * p * p);
}