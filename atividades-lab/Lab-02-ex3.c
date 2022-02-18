#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int input = 0;
    char str[100], strFinal[100];

    while(input%2 == 0) {
        printf("Insira um número máximo Ímpar: ");
        scanf("%d", &input);
    }

    for(int i=1; i>=input; i++) {
        sprintf(str, "%d ", i);
        strcat(strFinal, str);
    }

    printf("Valor: %s", strFinal);

//     for(int j=0; j<input; j++){
//         if(j>0){
//            printf("\n%c", strFinal[j]);
//         }

//     }
//  //   printf("Valor: %s", str);
//     return 0;
}