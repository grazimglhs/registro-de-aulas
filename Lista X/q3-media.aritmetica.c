#include <stdio.h>
#include <locale.h>
int main (){
    setlocale (LC_ALL, "portuguese");
    float notas[5][3], medias[5], m = 0;
    char nomes[5][50];
    int l, c, x = 1;
    for (l = 0; l < 5; l++){
        printf ("Digite o nome do %iº aluno: ", x++);
        gets (nomes[l]);
    }
printf ("\n--------------------------\n");
for (l = 0; l < 5; l++){
    printf ("Digite as três notas de %s\n", nomes[l]);
    m = 0;
    for (c = 0; c < 3; c++){    
        printf ("%iª: ", c + 1 );
        scanf ("%f", &notas[l][c]);
        m += notas[l][c];
    }
    medias[l]= m / 3;
    printf ("\n");
    }
    printf ("\n\n--------------------------\n*** Lista de alunos e médias ***\n");
    for (l = 0; l < 5; l++){
        printf ("%iº: %s, você obteve média %.1f\n", l + 1, nomes[l], medias[l]);
    }
    return (0);
}