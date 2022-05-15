#include <stdio.h>
# include <string.h>
# define SIZE1 25
# define SIZE2 15

int main ( void )
{

 float num[3][4];

/*




*/
  
  // Using nested loop to store values in a 2d array
  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 4; ++j)
    {
      printf("Array Index [%d, %d] : ", i + 1, j + 1);
      scanf("%f", &num[i][j]);
    }
  }

  // Using nested loop to display vlues of a 2d array
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      printf(" Value of Array Index [%d, %d] : %f", i + 1, j + 1, num[i][j]);
    }
  }

  
return 0;
  
} 