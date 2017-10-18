#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>


/* Simple code to calculate 
 *
 * integers.
 *
 * By:
 *	Taufiq Gh.
 *
 * Email:
 *	jtaufiq1@gmail.com
 */

int main(void)
{
	
	float a,b,c;
	float x = 0;

	printf("Formulae: (a - b) / c = x\n");
	printf("Input : a, b, and c\n");
	scanf("%f%f%f", &a, &b ,&c);

	// calculating 
	printf("calculating now ...!\n");

//	int atoi(a);

	// output 
	x = (a - b) / c;   
	int al = 'a';
	int atoi(al);

	printf("a - %c / %c = %.2f\n",al+1,al+2, x);

	
//	printf("Results: %.2f\n", x);
	
	// exit(); return 0; for success

	return 0;


}
