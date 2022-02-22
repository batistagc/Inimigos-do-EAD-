#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int input = 0;
    int *repo;

    while(input%2 == 0) {
        printf("Insira um número máximo Ímpar: ");
        scanf("%d", &input);
    }

    repo = (int *)malloc(input * sizeof(int));

    for(int i = 0; i <= input; i++){
        repo[i] = i+1;
    }
    for(int i = 0; i < input; i++){
        printf("%d ", repo[i]);
    }

    free(repo);
    return 0;
}