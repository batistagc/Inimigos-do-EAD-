#include <stdio.h>
#include <stdlib.h>
#include <omp.h>


long int T = 1000000000;

void serie(double* globalVar);

int main(int argc, char* argv[]) {

  double globalVar = 0.0;
  int thread_count;
  

  
  thread_count = strtol(argv[1], NULL, 10);
# pragma omp parallel num_threads(thread_count)
  serie(&globalVar);
  
  printf("termo(%ld) = %.3f\n", T, globalVar);

  
  return 0;
}

void serie(double* globalVar) {
  double my_result = 0.0;
  int my_rank = omp_get_thread_num();
  int thread_count = omp_get_num_threads();

  long int first_num = (my_rank * 200000000) + 1;
  
  for (long int i = first_num; i < (first_num+200000000); i++) {
    my_result += 1/ (double) i;
  }

# pragma omp critical
  *globalVar += my_result;

  printf("Hello from thread %d of %d -> sum = %.3f\n", my_rank, thread_count, my_result);
  
}
