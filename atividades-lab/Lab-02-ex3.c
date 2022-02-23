#include <stdio.h> 
#include <stdlib.h> 

int main(void) {

    int input, i, j;
    
    printf("Digite um numero ímpar:.\n");
    scanf("%d", &input);
    printf("\n");

    if (input % 2 ==0)
    {
       printf("Numero invalido.\n");
       return 1;
    }
    else
    {
        for( i = 0; i<= (input / 2) + 1; i++)
        {
            for ( j = i + 1; j <= input - i; j++ )
            {
                printf("%d ",j);
            }

            printf("\n");

            for ( j = 0; j < (i + 1) * 2; j++ )
              printf(" ");
         }
    }

    return 0;
}