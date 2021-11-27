#include <stdio.h>

/* Smart water in C.
   pset1 from cs50 test.

   source by Taufiq Gh.
   jtaufiq1@gmail.com

   */

int main()
{
	int minutes;
	int bottles_per_minute;
	int bottles_used;

	do{
		/* low-flow shower spits Appox. 1.5 water per minute.
		   A gallon = 128 ounces.
		   shower_head_spits = 1.5 * a gallon = 128 ounce 
		   shower_spits_appox. = 192 ounce per minute
		   bottled water for drink is 16 ounce.
		   Taken a minute bath is akin to 
		   192 ounces / 16 ounce = 12 bottles per minute

		   */

		printf("Minutes: ");
		scanf("%d", &minutes);

		// return 0 if input is zero
		if(minutes == 0)
			printf("You Didn't Bath\n");
	}while(minutes < 0);

	// a minute bath 
	bottles_per_minute = 192 / 16;
	
	// bottles used in Nth minutes bath	
	bottles_used = bottles_per_minute * minutes;

	printf("%d bottles in %d-minutes\n", bottles_used, minutes);

	return 0;
}

