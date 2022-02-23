#include <stdio.h>
#include <stdlib.h>
#define LIM 25

void transposta(int a[LIM][LIM], int at[LIM][LIM], int m, int n) //recebe a matriz a ser trasposta, recebe matriz vazia para receber os valores e recebe linha e coluna para calculo
{
    int i, j;
    for (i = 0; i < m; i = i + 1)
        for (j = 0; j < n; j = j + 1) at[j][i] = a[i][j];
}