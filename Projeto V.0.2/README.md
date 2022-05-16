## Como compilar os programas?

Para compilar o programa, utilizamos o gcc.

    $ gcc -g -Wall -fopenmp -o PROJv2 PROJv2.c

Como executar o programa

    $ ./PROJv2.c 5

## Como provar os resultados obtidos?

Execução do código:

IN(1000)= 5.485

Tempo serial: 0.005

Tempo paralelo: 0.001666

## No calculo do tempo de execução dos programas, foi utilizado a função time.
biblioteca --- include <time.h>
