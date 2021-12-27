#include <stdio.h>

#define UPPER_LIMIT 148.9 	/* Upper Limit of Table */
#define LOWER_LIMIT 0.0		/* Lower Limit of Table */
#define STEP_SIZE -6.7		/* Step Size */

// CELSIUS TO FAHRENHEIT TABLE
// PROGRAM NAME: celsius_to_fahr.c
// COMPILE: gcc -o celsius_to_fahr celsius_to_fahr.c  
//
// Simple Program to Convert Celsius to Fahrenheit
//+ using the formular: F = (5/9) * (C + 32) | C * 1.8 + 32;
//+ Range Values between 0.0 to 148.9 
//+ Print in reverse order.

int main(int argc, char **argv)
{
	printf("\t\tCELCIUS - FAHRENHEIT TABLE\n");
	printf("CELSIUS\tFAHRENHEIT\n");

	float celsius = 0.0;
	int fahr = 0;

	celsius = UPPER_LIMIT;
	while(celsius >= LOWER_LIMIT) {
		fahr = celsius * 1.8 + 32; 
		printf("%6.1f\t%3d\n", celsius, fahr);
		celsius += STEP_SIZE;
	}
	return 0;
}
