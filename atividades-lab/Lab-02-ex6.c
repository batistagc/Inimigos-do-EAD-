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
    printf("Digite a quantidade de linhas da matriz:\n");
    scanf("%d", &m);
    printf("Digite a quantidade de coluna da matriz:\n");
    scanf("%d", &n);
    printf("Digite os valores da matriz em ordem de linha da esqueda pra direita, de cima para baixo.\n");
    if (m < LIM && n < LIM)
    {
        for (i = 0; i < m; i = i + 1)
            for (j = 0; j < n; j = j + 1)
                scanf("%d", &mat[i][j]);
        printf("\n");
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