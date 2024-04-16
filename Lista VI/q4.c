#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL, "portuguese");
    int i, v[10], m = 0;
    for (i = 0; i <= 9; i++){
        printf ("Digite o %i valor: ", i + 1);
        scanf ("%i", &v[i]);
        if (v[i] > m){
            m = v[i];
        }
    }
    printf ("O maior valor encontrado no vetor e: %d\n", m);
    return(0);
}