#include <stdlib.h>

#include <stdio.h>

int main(void) {

  long int T = 100000000;
  double soma = 0;
  
  for (long int i = 1; i <= T; i++){
      soma += 1 / (double) i;
  }


  printf("S = %.3f\n",soma);
  return 0;
}
