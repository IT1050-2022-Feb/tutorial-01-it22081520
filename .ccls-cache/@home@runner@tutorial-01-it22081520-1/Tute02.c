/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
//main function begins execution
int main() {

  float distance,amount;
	
	printf("enter the distance travelled:");//prompt
	scanf("%f", &distance);
	
	if(distance <= 30){
		
		amount = distance * 50;//calculate amount
		
	}else{
		
		amount = 30 * 50.0 + (distance - 30) * 40;//calculate amount
		
	}
	printf("amount to be paid :%.2f", amount);

  
  
  return 0;
}//end of the main function
