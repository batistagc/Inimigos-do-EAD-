#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int D, i, j; //Dimensão,Linha,Coluna  
    int r; //Resultado
    int ex=1; //print para linha

    printf ("Digite o valor da dimensão da matriz quadrada:\n");
    scanf ("%d", &D);

    int a[D][D];

    printf ("Digite os valores da matriz:\n");
    for (i=0; i<D; i++)
    {
        printf("Agora, digite os valores das %d linhas: \n", i+1);
        for (j=0; j<D; j++)
        scanf("%d", &a[i][j]);

        r= a[0][0];        
    }
    for (i=0; i<D; i++)
    {
        for (j=0; j<D; j++)
        {
            if (a[i][j] < r)
            {
                r= a[i][j];
                ex= i+1;
            }                
        }
    }
    printf("A linha que contem o menor valor é %d\n", ex);
    return 0;      
}
