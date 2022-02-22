#include <stdio.h>

struct Pessoas
    {
        int idade;
        float peso;
        float altura;
    };

void printInfo(struct Pessoas pessoa1, struct Pessoas pessoa2, struct Pessoas pessoa3);

int main() {

    struct Pessoas pessoa1, pessoa2, pessoa3;

    printf("---- Digite os dados da 1 pessoa ---- \n");
    printf("idade: ");
    scanf("%d", &pessoa1.idade);
    printf("\nPeso: ");
    scanf("%f", &pessoa1.peso);
    printf("\nAltura: ");
    scanf("%f", &pessoa1.altura);

    printf("---- Digite os dados da 2 pessoa ---- \n");
    printf("idade: ");
    scanf("%d", &pessoa2.idade);
    printf("\nPeso: ");
    scanf("%f", &pessoa2.peso);
    printf("\nAltura: ");
    scanf("%f", &pessoa2.altura);

    printf("---- Digite os dados da 3 pessoa ---- \n");
    printf("idade: ");
    scanf("%d", &pessoa3.idade);
    printf("\nPeso: ");
    scanf("%f", &pessoa3.peso);
    printf("\nAltura: ");
    scanf("%f", &pessoa3.altura);


    printInfo(pessoa1, pessoa2, pessoa3);


    return 0;
}

void printInfo(struct Pessoas pessoa1, struct Pessoas pessoa2, struct Pessoas pessoa3)
{
    printf("----- Informações das pessoas ----- \n");
    printf("Pessoa 1\n");
    printf("Idade: %d \n", pessoa1.idade);
    printf("Peso: %.2f\n", pessoa1.peso);
    printf("Altura: %.2f\n", pessoa1.altura);
    printf(" --------------------------------- \n");
    printf("Pessoa 2\n");
    printf("Idade: %d \n", pessoa2.idade);
    printf("Peso: %.2f\n", pessoa2.peso);
    printf("Altura: %.2f\n", pessoa2.altura);
    printf(" --------------------------------- \n");
    printf("Pessoa 3\n");
    printf("Idade: %d \n", pessoa3.idade);
    printf("Peso: %.2f\n", pessoa3.peso);
    printf("Altura: %.2f\n", pessoa3.altura);

}