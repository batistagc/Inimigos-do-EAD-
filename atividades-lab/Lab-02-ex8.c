#include <stdio.h>
#include <stdlib.h>
#define LIM 25

void transposta(int a[LIM][LIM], int at[LIM][LIM], int m, int n) //recebe a matriz a ser trasposta, recebe matriz vazia para receber os valores e recebe linha e coluna para calculo
{
    int i, j;
    for (i = 0; i < m; i = i + 1)
        for (j = 0; j < n; j = j + 1) at[j][i] = a[i][j];
}
int main(void)
{
    int i, j, m, n, mat[LIM][LIM], matTransp[LIM][LIM];
    int cont = 1;
    m=3;
    n=3;    
    printf("Imprimindo a matriz...\n");
    if (m < LIM && n < LIM)
    {
        for (i = 0; i < 3; i = i + 1)
        {        
            for (j = 0; j < 3; j = j + 1)
            {            
                mat[i][j] = cont;
                cont++;  
            }             
        }
        for (i = 0; i < n; i = i + 1)
        {
            for (j = 0; j < m; j = j + 1)
                printf("%3d", mat[i][j]);
            putchar('\n');
        }
        printf("Imprimindo a transposta... \n");
        transposta(mat, matTransp, m, n);
        for (i = 0; i < n; i = i + 1)
        {
            for (j = 0; j < m; j = j + 1)
                printf("%3d", matTransp[i][j]);
            putchar('\n');
        }
    }
   else printf("Matriz maior que o tamanho permitido -25\n");
   return 0;
}