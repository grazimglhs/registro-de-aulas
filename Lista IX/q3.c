#include <stdio.h>
#include <locale.h>
int main(){
 setlocale(LC_ALL, "Portuguese");
 float n1, n2;
 int op;
 printf ("calculadora simples\n");
 printf ("1- adicao\n");
 printf ("2- subtracao\n");
 printf ("3- multiplicacao\n");
 printf ("4- divisao\n");
 printf ("===================\n");
 printf ("Escolha a operacao: " );
 scanf ("%i", &op);
 printf ("Digite um valor real: ");
 scanf ("%f", &n1);
 printf ("Digite outro valor real: ");
 scanf ("%f", &n2);
 switch (op){
        case 1: 
            printf ("O resultado da adiçao: %.1f", n1 + n2);
            break;
        case 2: 
             printf ("O resultado da subtracao: %.1f", n1 - n2);
            break;    
         case 3: 
             printf ("O resultado da multiplicacao: %.1f", n1 * n2);
            break;    
         case 4: 
             if (n2 != 0){
                printf ("Resultado da divisao: %.1f", n1 / n2);
             }
             break;
        default:
            printf ("Opcao invalida");
        }
return (0);
}