//Fábio Silveira Tanikawa TIA:32092563
//Gabriel Batista Cristiano TIA: 32090722
//Julia Carvalho de Souza Castro TIA: 32022298

#include  <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/wait.h>


int main(){
    pid_t childpid;
    int valor; 

    valor = shmget(IPC_PRIVATE, 1024, IPC_CREAT |  0660);
         if (valor < 0) {
             printf("Erro de compartilhamento\n");
        }
    int *novoValor = (int*)shmat(valor, NULL, 0);


    *novoValor = 1;


    printf("Valor inicial: %i\n",*novoValor);
    childpid = fork();
    printf("Processo filho: %i\n",childpid);
    if (childpid == 0){     
        *novoValor+= 2;  

        printf("Novo valor no processo filho: %i\n",*novoValor);    
    }else{
        wait(NULL);     
        *novoValor *= 4;

        printf("Valor final no processo pai: %i\n",*novoValor);    

    }


    return 0;
}