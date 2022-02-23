#include<stdio.h>
#include<conio.h>
int main (void )
{
    int k, m, i, j; //Linha,Coluna 
    
    printf("Digite o numero de linhas:\n");
    scanf("%d", &k);

    printf("Digite o numero de colunas:\n");
    scanf("%d", &m);

    int a[k][m];

    printf("Digite os valores da matriz em ordem de linha da esqueda pra direita, de cima para baixo.\n");
    for (i=0; i<k; i++)
    {        
        for (j=0; j<m; j++)
        {       
        scanf("%d", &a[i][j]);
        }
    }
    
    int num;
    printf("Digite o numero inteiro a ser multiplicado:\n");
    scanf("%d", &num);

    for ( i=0; i<k; i++ )
      for ( j=0; j<m; j++ )
      {
          a[i][j] = a[i][j]*num;
      }

    printf("\nSaida de Dados\n");
    for ( i=0; i<k; i++ )
      for ( j=0; j<m; j++ )
      {
          printf ("\nElemento[%d][%d] = %d\n", i, j,a[ i ][ j ]);
      }    
    return(0);
}