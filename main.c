#include <stdio.h>
# include <string.h>

int main ( void )
{

float num[5];


/*
One Diamentional Array

dataType arrayName[arraySize];

num{

[1]-0
[2]-1
[3]-2
[4]-3
[5]-4

}
                      0   1  2  3   4 
Ex: - int mark[5] = {19, 10, 8, 17, 9};

mark[2] == 8
mark[3] == 17

*/

  // taking input and storing it in an array
  printf("Enter 5 Inputs To The Array: \n");
  
  for(int i = 0; i < 5; ++i) {
     scanf("%f", &num[i]);
  }

  // printing elements of an array
  printf("Print Stored Data in Array: \n");
  
  for(int i = 0; i < 5; ++i) {
     printf("num[ %d ] - %.1f\n",i, num[i]);
  }
  
return 0;
  
} 