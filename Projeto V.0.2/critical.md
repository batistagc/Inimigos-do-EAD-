## Controle de acesso

O controle de acesso é feito através do comando "#pragma omp critical". 
Esta função identifica uma seção de código que deve ser executada por uma thread de cada vez, esta seção fica conhecida como região crítica. 
Assim, evita-se erros no resultado final do código.

No código que desenvolvemos, utilizamos o comando "#pragma omp critical" antes de acumular os valores dos cálculos dos termos, executados em threads paralelas 
em uma variável global, afim de evitar erros de cálculo no resultado final.

<img src="https://github.com/batistagc/Inimigos-do-EAD-/blob/main/ASSETS/print_global_var.PNG">
