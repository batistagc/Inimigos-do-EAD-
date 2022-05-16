#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

long int T = 1000;

void serie(double* globalVar);

int main(int argc, char* argv[]) {

  double globalVar = 0.0;
  int thread_count;
  clock_t tempo;

  tempo = clock();
  thread_count = strtol(argv[1], NULL, 10);
# pragma omp parallel num_threads(thread_count)
  serie(&globalVar);
  tempo = clock() - tempo;
  printf("S = %.3f\n", globalVar);
  printf("Tempo de execução = %1f", ((double)tempo)/((CLOCKS_PER_SEC/1000)));
  
  return 0;
}

void serie(double* globalVar) {
  double my_result = 0.0;
  int my_rank = omp_get_thread_num();
  int thread_count = omp_get_num_threads();

  long int first_num = (my_rank * 200) + 1;
  
  for (long int i = first_num; i < (first_num+200); i++) {
    my_result += 1/ (double) i;
  }

# pragma omp critical
  *globalVar += my_result;
}