#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
         int n = 0;

         if ( n > 0 ) {
	   printf("is positive\n");
	     }
    
         if ( n == 0) {
           printf("is 0\n");
	     }

         if ( n < 0) {
           printf("is negative\n");
	     }

         srand(time(0));
         n = rand() - RAND_MAX / 2;
         /*your code goes there */
         return (0);
}
