#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more header goes there*/

/*betty style doc for function main goes there*/
int main(void)
{
  int n, lastdigit;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /*your code goes there*/
  lastdigit=n%10;
  if(lastdigit>5)
    printf("last digit of: %d is: %d and is greater than 5", n, lastdigit);
  else if("lastdigit==0")
    printf("last digit of: %d is: %d and is 0", n, lastdigit);
  else
    printf("last digit of: %d is: %d and is less than 6 and not zero", n, lastdigit);

  return (0);
}
