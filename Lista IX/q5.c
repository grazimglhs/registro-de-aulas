#include <stdio.h>
#include <locale.h>
int main(){
 setlocale (LC_ALL, "portuguese");
 int cod, quant;
 float val;
 printf ("CODIGO DO ITEM       ESPECIFICACAO       PRECO UNITARIO\n");
 printf ("    100             Cachorro quente           8,00     \n");
 printf ("    101                 Bauru                 9,00     \n");
 printf ("    102                X-Salada              10,00     \n");
 printf ("    103               Hamburguer             12,00     \n");
 printf ("    104            Refrigerante (lata)        3,00     \n");
 printf ("Digite o codigo do item desejado: ");
 scanf ("%i", &cod);
 printf ("Digite a quantidade desejada: ");
 scanf ("%i", &quant);
 switch (cod){
       case 100:
        val = 8.00;
        val = quant * val;
        break;
       case 101:
        val = 9.00;
        val = quant * val;
        break;
       case 102:
        val = 10.00;
        val = quant * val;
        break;
       case 103:
        val = 12.00;
        val = quant * val;
        break;
       case 104:
        val = 3.00;
        val = quant * val;
        break;
        default:
       printf ("Escolheu a opcao invalida, tente novamente!");
              break;
       }
       printf ("O valor a ser pago e: %.2f", val);
return (0);
 }