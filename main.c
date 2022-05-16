#include <stdio.h>
#include <assert.h>

char grade(int marks);

int main(void) {

  int marks=0;
  char gradeForMarks;

  printf("input marks : ");
  scanf("%d", &marks);

  gradeForMarks = grade(marks);

  if(gradeForMarks == 'X'){
      assert(marks < 0);
      assert(marks > -1);
    }
    else if(gradeForMarks == 'F'){
     assert(marks < 40);
    }
    else if(gradeForMarks == 'C'){
      assert(marks < 60);
    }
    else if(gradeForMarks == 'B'){
      assert(marks < 80);
    }
    else if(gradeForMarks == 'A'){
      assert(marks < 100);
    }else {
      assert(marks < 100);
    }

  printf("Grade for the Marks : %c", gradeForMarks);
  
  
  return 0;
}

char grade(int marks){

  char result;

  if(marks < 0){
      result = 'X';
    }
    else if(marks < 40){
      result = 'F';
    }
    else if(marks < 60){
      result = 'C';
    }
    else if(marks < 80){
      result = 'B';
    }
    else if(marks < 100){
      result = 'A';
    }else {
      result = 'X';
    }

  return result;
  
}