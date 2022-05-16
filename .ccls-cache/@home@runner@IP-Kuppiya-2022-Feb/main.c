#include <stdio.h>

int main(void) {

  
/*
//Type 1

for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}

##############################

//Type 2

initializationStatement

for ( ; testExpression; updateStatement)
{
    // statements inside the body of loop
}

##############################

//type 3

initializationStatement

for ( ; testExpression; )
{
    // statements inside the body of loop
    updateStatement; //++, --, 
}

*/

  // Print numbers from 1 to 10
  

  for (int i = 1; i < 11; ++i) // type 1
  {
    printf("%d ", i);
  }
/*#######################################*/
  int j = 1;
  
  for (; j < 11; ++j) // type 2
  {
    printf("%d ", j);
  }
/*#######################################*/
  int k = 1;
  
  for (; k < 11;) // type 3
  {
    printf("%d ", k);
    ++k;
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