#include <stdio.h>
# include <string.h>

int main ( void )
{

 float num[3][4];

 /*
Two Dimensional Array 

1D Array = {1,2,3,4,5,6}
2D Array = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

num{
  {[1],[2],[3],[4]}, //3
  {[5],[6],[7],[8]}, //3
  {[9],[10],[11],[12]}  //3
};

num{
  {[0,0],[0,1],[0,2],[0,3]}, //3
  {[1,0],[1,1],[1,2],[1,3]}, //3
  {[2,0],[2,1],[2,2],[2,3]}  //3
};


*/
  
  // Using nested loop to store values in a 2d array
  
    // float num[3][4];
  
  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 4; ++j)
    {
      printf("Array Index [%d, %d] : ", i + 1, j + 1);
      scanf("%f", &num[i][j]);
    }
  }

  // Using nested loop to display vlues of a 2d array
  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 4; ++j)
    {
      printf(" Value of Array Index [%d, %d] : %.1f \n", i + 1, j + 1, num[i][j]);
    }
  }

  
return 0;
  
} 