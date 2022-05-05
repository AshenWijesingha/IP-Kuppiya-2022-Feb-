#include <stdio.h>
# include <string.h>
# define SIZE1 25
# define SIZE2 15

int main ( void )
{
  
char x[ ]= "Happy Birthday to You";
char y[ SIZE1];
strcpy( y , x );
printf("The string in array y is : %s\n", y);
  
return 0;
  
} 