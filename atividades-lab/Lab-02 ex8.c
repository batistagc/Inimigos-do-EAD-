#include <stdio.h>
#include <stdlib.h>
#define LIM 25

void transposta(int a[LIM][LIM], int at[LIM][LIM], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i = i + 1)
        for (j = 0; j < n; j = j + 1) at[j][i] = a[i][j];
}

int main(void)
{
    int i, j, m, n, mat[LIM][LIM], matTransp[LIM][LIM];
    scanf("%d", &m);
    scanf("%d", &n);
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