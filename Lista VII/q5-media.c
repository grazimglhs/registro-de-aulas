#include <stdio.h>
#include <locale.h>
int main (){
    int i;
    float n1, n2, n3, m;
    for (i = 1; i <= 10; i++){
    printf ("=======%iª  Aluno============\n", i);
    printf ("Digite a primeira nota:\n ");
    scanf ("%f", &n1);
    printf ("Digite a segunda nota:\n ");
    scanf ("%f", &n2);
    printf ("Digite a terceira nota:\n ");
    scanf ("%f", &n3);
    m = (n1 + n2 + n3) / 3;
    printf ("a media e: %2.f\n", m);
    if (m >= 9){
        printf ("conceito A\n");
}
    else if ((m >=7) && (m<9)){
        printf ("Conceito B\n");
}
    else if ((m >=6) && (m<7)){
        printf ("Conceito C\n");
}
    else if ((m >=4) && (m<6)){
        printf ("Conceito D\n");
}
    else {
        printf ("Conceito E\n");
}
}
return (0);
}