/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

//main function begins execution
int main() {

  float mark1,mark2,average;//variable decleration
	
	
	printf("enter the marks of subject1:");//prompt
	scanf("%f", &mark1);
	
	printf("enter the marks of subject2:");//prompt
	scanf("%f", &mark2);
	
	average = (mark1 + mark2) / 2.0;//calculate avaerage
	
	printf("The average of the two marks is: %.2f\n", average);

  return 0;
  
}//end of main function

