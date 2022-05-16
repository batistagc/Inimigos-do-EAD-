## Controle de acesso

O controle de acesso é feito através do comando "#pragma omp critical". 
Esta função identifica uma seção de código que deve ser executada por uma thread de cada vez, esta seção fica conhecida como região crítica. 
Assim, evita-se erros no resultado final do código.
