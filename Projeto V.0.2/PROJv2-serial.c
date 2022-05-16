#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void) {
  clock_t tempo;
  long int T = 1000;
  double soma = 0;
  
  tempo = clock();
  
  for (long int i = 1; i <= T; i++){
      soma += 1 / (double) i;
  }
  tempo = clock() - tempo;

  printf("S = %.3f\n",soma);
  printf("Tempo de execução = %1f", ((double)tempo)/((CLOCKS_PER_SEC/1000)));
  return 0;
}