/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//main function begins execution

int minimum(int a, int b) {
    return a < b ? a : b;
}

int maximum(int a, int b) {
    return a > b ? a : b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");//prompt
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");//prompt
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));//prompt
   printf("%d ", maximum(no1, no2));//prompt
   printf("%d ", multiply(no1, no2));//prompt
   return 0;
}
//end of the main function
