## Como compilar os programas?

Para compilar o programa, utilizamos o gcc.

    $ gcc -g -Wall -fopenmp -o PROJv2 PROJv2.c

Como executar o programa

    $ ./PROJv2 "foi usado 6 threads, definidos dentro do codigo"

## Como provar os resultados obtidos?

Execução do código:

IN(100000000)= 22.817
10^8- "oito zeros"
Tempo serial: 3m03.779s

Tempo paralelo: 
real 2m29.043s
user 0m35.440s
sys  0m0.935

## No calculo do tempo de execução dos programas, foi utilizado o time.
Versão
$ time ./nome_do_programa
