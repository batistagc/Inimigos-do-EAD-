#include <stdio.h>
#include <string.h>

void splitString(char *str, char *secondStr, char insert, int index);

int main()
{

    char str[100], secondStr[100], insert;
    int index;

    printf("Digite uma string de até 100 caracteres: \n");
    fgets(str, 100, stdin);
    printf("Digite o carácter a ser inserido. \n");
    scanf("%c", &insert);
    printf("Digite o indice que deseja inserir um caracter. \n");
    scanf("%d", &index);
   

    splitString(str, secondStr, insert, index);

    strcat(str, secondStr);
    printf("%s", str);


    return 0;
}

void splitString(char *str, char *secondStr, char insert, int index)
{
    
    int length = strlen(str);

    if (index < length)
    {
        for (int i = index; i < length; i++)
        {
            secondStr[i - index] = str[i];
        }
        str[index] = insert;
        str[index + 1] = '\0';
    }



}