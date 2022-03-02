#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
   int i, num, j;
   printf ("Enter the number: ");
   scanf ("%d", &num);
   j = num;

   int id = fork();

   if(id == 0)
   {
        for (i=1; j > k; j = j -1) {
            i=i*j;
        }
        printf("The factorial of %d is %d\n",num, i);
   }else if(id < 0)
   {
        printf("failed to create child\n");
         exit(0);
   }
    
    return 0;
}