#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{    
    const char* str = "exemplo";
    int busca = 'o';
    
    int posicao = strchr(str, busca) - str;
    printf("%d\n", posicao);

    return 0;
}