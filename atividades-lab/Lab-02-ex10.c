#include <stdio.h>
#include <stdlib.h>

int main() 
{
    float sample[3][3] = {{7.5, -4.3, -1.5},
                          {9.1, 15.5, -12.3},
                          {-0.3, 5, -2.2}};
    int multip;

    printf("Dada a matriz: \n");

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%.2f ", sample[i][j]);
    }

    printf("\nDigite um numero para multiplicar uma linha e uma coluna da matriz: \n");
    scanf("%d", &multip);
    
    for (int i = 0; i < 3; i++)
    {
        if(i == 2)
        {
            for (int j = 0; j < 3; j++)
                sample[i][j] = sample[i][j]*multip;
        }
        for (int j = 0; j < 3; j++)
            if(j == 2)
            {
                sample[i][j] = sample[i][j]*multip;
            }
    }

    printf("Resultado final: \n");

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%.2f ", sample[i][j]);
    }



    return 0;
}