#include <stdio.h>
#include <stdlib.h>

void transposta(int , int );

int main() 
{
    int k, m, i, j; //Linha,Coluna 
    
    printf("Digite o numero de linhas:\n");
    scanf("%d", &k);

    printf("Digite o numero de colunas:\n");
    scanf("%d", &m);

    int a[k][m];

    printf("Digite os valores da matriz\n");
    for (i=0; i<i; i++)
    {
        printf("Agora, digite os valores das linhas:\n", i+1);
        for (j=0; j<m; j++)
        {       
        scanf("%d", &a[i][j]);
        }
    }

    printf("A matriz não trasposta é:\n");
    for (i=0; i<k; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("%d", a[i][j]);
        }
    }
    transposta(m,k);
    void matriztrans(int m, int k)
    {
        int a[i][j];
        printf("A matriz transposta é:\n");
        for (i=0; i<m; i++)
        {
            for (j=0; j<k; j++)
            {
                printf("%d ", a[j][i]);
            }
        printf("\n");
        }
    }    
    return 0;
}


