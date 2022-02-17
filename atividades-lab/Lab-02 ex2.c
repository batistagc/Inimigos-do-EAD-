#include <stdio.h>
#include <stdlib.h>

int main() 
{

    int nota1, nota2, nota3;
    float me, ma;

    printf("Digite a 1 nota do aluno");
    scanf("%d", &nota1);
    printf("Digite a 2 nota do aluno");
    scanf("%d", &nota2);
    printf("Digite a 3 nota do aluno");
    scanf("%d", &nota3);
    printf("Digite a media de exercicios do aluno");
    scanf("%f", &me);

    ma = (nota1 + (nota2*2) + (nota3*3) + me) / 7;

    if(ma >= 9) {
        printf("Nota: A");
    } else if (ma >= 7.5){
        printf("Nota: B");
    } else if (ma >= 6){
        printf("Nota: C");
    } else if (ma >= 4){
        printf("Nota: D");
    } else {
       printf("Nota: E");
    }

    return 0;
}