#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
/*
Main File Operations

1. Creating a new file
2. Opening an existing file
3. Closing a file
4. Reading from and writing information to a file


## declare a pointer of type file 

FILE *fptr; 

## Opening a file - for creation and edit

ptr = fopen("fileopen","mode");

Ex:- 
    fopen("E:\\cprogram\\newprogram.txt","w"); - open for writing
    fopen("E:\\cprogram\\newprogram.txt","r"); - open for reading
    fopen("E:\\cprogram\\oldprogram.bin","a"); - open for append
    fopen("E:\\cprogram\\oldprogram.bin","r+"); - open for both reading and writing
    fopen("E:\\cprogram\\oldprogram.bin","w+"); - open for both reading and writing
    fopen("E:\\cprogram\\oldprogram.bin","a+"); - open for both reading and append

    fopen("E:\\cprogram\\oldprogram.bin","rb"); - open for reading in binary mode
    fopen("E:\\cprogram\\oldprogram.bin","wb"); - open for writing in binary mode
    fopen("E:\\cprogram\\oldprogram.bin","ab"); - open for append in binary mode
    fopen("E:\\cprogram\\oldprogram.bin","rb+"); - open for both reading and writing in binary mode
    fopen("E:\\cprogram\\oldprogram.bin","wb+"); - open for both reading and writing in binary mode
    fopen("E:\\cprogram\\oldprogram.bin","ab+"); - open for both reading and append in binary mode

## Closing a File

fclose(fptr);

*/

  int num;
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("C:\\program.txt","w"); //opening the file

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

    fprintf(fptr,"%d",num); //write to the file
    printf("Value of n=%d", num);

    fscanf(fptr,"%d", &num); //Read from the file
    printf("Value of n=%d", num);

   fclose(fptr);  //closing the file

  
  return 0;
}