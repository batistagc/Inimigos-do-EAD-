#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

long int T = 1000000000;
double globalVar = 0.0;
void serie();

int main(int argc, char* argv[]) {
  omp_set_num_threads(5);
 
  
  #pragma omp parallel
  {
    serie();
    printf("termo(%ld) = %.3f\n", T, globalVar);
  }
  return 0;
}

void serie(){
  double my_count = 0.0;
  int my_rank = omp_get_thread_num();
  int thread_count = omp_get_num_threads();

  long int first_num = (my_rank * 200000000) + 1;
  #pragma omp for reduction(+:globalVar)
  for (long int i = first_num; i < (first_num+200000000); i++) {
    my_count += 1/ (double) i;
    globalVar += 1/ (double) i;
  }
  printf("Hello from thread %d of %d -> sum = %.3f\n", my_rank, thread_count, my_count);
}
