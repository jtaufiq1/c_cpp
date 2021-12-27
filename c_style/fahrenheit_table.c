#include <stdio.h>

#define LOWER 0		/* Lower Limit of Table */
#define UPPER 300	/* Upper Limit of Table */
#define STEP 20		/* Step Size */

// Farhenheit to Celcius Table
// Fahrenheit Table: C = (5/9) * (F-32)
// Program to print the Fahrenheit Table
//
// Name: Fahrenheit_table
// Compile: gcc -o fahrenheit_table fahrenheit_table.c
int main(int argc, char **argv)
{
	float fahr = 0.0;
	float celsius = 0.0;

	fahr = LOWER;
	printf("\t\tFahrenheit-Celsius Table\n");
	printf("\tFahrenheit\tCelsius\n");
	while(fahr <= UPPER) {
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("\t %3.0f\t\t%6.1f\n", fahr, celsius);
		fahr += STEP;
	}
	return 0;
}
