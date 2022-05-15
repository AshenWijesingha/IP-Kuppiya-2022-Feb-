#include <stdio.h>
# include <string.h>
# define SIZE1 25
# define SIZE2 15

int main ( void )
{

float num[2][4][3];

 /*
Three Dimensional Array

{
  {//2
    {4,4,4,4}, //3
    {4,4,4,4}, //3
    {4,4,4,4}  //3
  },

  {//2
      {4,4,4,4}, //3
      {4,4,4,4}, //3
      {4,4,4,4}  //3
  }
};


*/

//store 12 values entered by the user to the Three Diamentional Array
  
printf("Enter 12 values: \n");

  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 4; ++k)
      {
        scanf("%f", &num[i][j][k]);
      }
    }
  }

// Printing values with the proper index.

  printf("\nDisplaying values:\n");
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 4; ++k)
      {
        printf("test[%d][%d][%d] = %f\n", i, j, k, num[i][j][k]);
      }
    }
  }

  
return 0;
  
} 