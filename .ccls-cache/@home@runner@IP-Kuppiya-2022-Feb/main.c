#include <stdio.h>

int main(void) {

  
/*

for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}

*/

  // Print numbers from 1 to 10
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }

/*
-Example Question-

int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d", sum);

*/


  
  return 0;
}