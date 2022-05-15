#include <stdio.h>
# include <string.h>
# define SIZE1 25
# define SIZE2 15

int main ( void )
{

float num[5];

/*
One Diamentional Array

dataType arrayName[arraySize];

num{

[1]
[2]
[3]
[4]
[5]

}

Ex: - int mark[5] = {19, 10, 8, 17, 9};

*/

  // taking input and storing it in an array
  printf("Enter 5 Inputs To The Array: ");
  
  for(int i = 0; i < 5; ++i) {
     scanf("%f", &num[i]);
  }

  // printing elements of an array
  printf("Print Stored Data in Array: ");
  
  for(int i = 0; i < 5; ++i) {
     printf("%f\n", num[i]);
  }
  
return 0;
  
} 