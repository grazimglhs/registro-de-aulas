#include <stdio.h>
#include<math.h>
int main (){
float a1, a2, a3, mp, af, mf;
printf ("Digite a primeira nota: ");
scanf ("%f", &a1);
printf ("Digite a segunda nota: ");
scanf ("%f", &a2);
printf ("Digite a terceira nota: ");
scanf ("%f", &a3);
mp = (a1 +a2 +a3) / 3;
if (mp >= 3.5 && mp <7.0){
    printf ("Digite a nota para a avaliacao final: ");
    scanf ("%f", &af);
mf = ((6 * mp) + (4 * af)) /10;
printf("Media Parcial: %.2f\n", mp);
printf("Media Final: %.2f\n", mf);
if (mf >= 5.0){
        printf ("Aprovado!\n");
}   else {
        printf ("Reprovado!\n");
    } 
} else {
    printf ("Media Parcial: %2.f\n", mp);
if (mp >= 7.0){
    printf ("Aprovado!\n");
    } else {
    printf ("Reprovado!\n");
    } 
}
return(0);
}