#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1[15];
    char nome2[15];
    int ab;

    printf ("Digite o primeiro nome:\n");
    scanf("%s",&nome1);
    printf ("Digite o segundo nome:\n");
    scanf("%s",&nome2);
    ab= strcoll(nome2, nome1); //Comparando o alfabeto dos nomes
    if(ab==1)
    {
        printf("%s\n%s\n\n", nome1, nome2);
    }
    else 
    {
        printf("%s\n%s\n\n",nome2, nome1);
    }
    return 0;
}