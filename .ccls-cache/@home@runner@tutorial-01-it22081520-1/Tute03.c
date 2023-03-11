/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
//main function begins execution

int main() {

  	int sum = 0, n,i;
	
	
	printf("enter a positive integer n:");//prompt
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		
		sum += i;//calculate sum
		
	}
	printf("The sum of numbers from 1 to %d", n,sum);
  
  return 0;
  
}
//end of main function
