#include <stdio.h>
#include <math.h>

/* It's mario time.
   mario.c 
   pset1 from cs50 test.

   By Taufiq Gh.

   jtaufiq1@gmail.com


 */

// This code needs some work. Feel free to edit 

int main()
{
	int height;
	int space;
	int hash;
	int i, n; // for looping

	do{
		printf("Height:");
		scanf("%d", &height);

		if(height < 0 || height > 23)
			printf("Enter valid Number between 1 and 23\n");
	}while(height < 0 || height > 23);

	// main loop 
	for(i = 0; i < height; i++)
	{
		// print spaces
		for(space = 0; space < height - i - 1; space++)
		{	
			printf(" ");

		}
		
		// print hashes 
		for(hash = 0; hash < i + 2; hash++)
		{
	
		
			printf("#");
		}

		// print newline after every spaces and hashes
		printf("\n");
	}

	return 0;

}
