#include <stdio.h>
#include <string.h>

void splitString(char *str, char *secondStr, int index);

int main()
{

    char str[100], secondStr[100];
    int index;

    printf("Digite uma string de até 100 caracteres: \n");
    fgets(str, 100, stdin);
    printf("Digite o indice a ser excluido. \n");
    scanf("%d", &index);

    splitString(str, secondStr, index);

    strcat(str, secondStr);
    printf("%s", str);
    
    return 0;
}

void splitString(char *str, char *secondStr, int index)
{
    int length = strlen(str);

    if (index < length)
    {
        str[index] = '\0';
    }

    for (int i = index + 1; i < length; i++)
    {
        secondStr[i - index] = str[i];
    }
}