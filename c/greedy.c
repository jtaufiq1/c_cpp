#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/*	 Greedy Algorith in C

   Test from cs50 pset1.

   By:
   Taufiq Gh
   jtaufiq1@gmail.com

 */

int main()
{
	float amount;
	int quarters, dimes, nickel, pennies;
	int change, total;

	do{
		printf("Enter amount owed:");
		scanf("%f", &amount);

		// return 0 if amount = 0

		 if(amount == 0)
			return 0;
		
	}while(amount <= 0);

// converting and calculating change 

	change = (int)round(amount * 100);

	// quarters to use 25
	 quarters = change / 25;
	 pennies = change % 25;
	    
	// dimes to use 10
	 dimes =  pennies / 10;
	 pennies = pennies % 10;

	// nickel to  use 5
	  nickel = pennies / 5;
	  pennies = pennies % 5;

 	// pennies to use 1 
	 pennies;

	 // total minimum coins
	total = quarters + dimes + nickel + pennies;

	// printing change now
	printf("%d\n", total);

return 0;
}
