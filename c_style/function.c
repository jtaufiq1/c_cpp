#include <stdio.h>
#include <stdlib.h>

// Function Prototype
long power(int b, int x);

/** Functions
 *
 * power(base, exponent)
 */

int main(int argc, char **argv)
{
	if(argc != 3) {
		puts("Requires 2 arguments: base and exponent");
		exit(EXIT_FAILURE);
	}
	int base = atol(argv[1]);
	int exponent = atoi(argv[2]);
	if(!base || !exponent)
		exit(EXIT_FAILURE);

	/* Function Call/Invocation */
	printf("%d^%d = %ld\n", base, exponent, power(base, exponent));

	exit(EXIT_SUCCESS);
}
// Function Definition
long power(int base, int exponent) /* return_type function_name(opt args) { body } */
{
	// function body
	long p;
	for(p = 1; exponent > 0; --exponent)
		p = p * base;
	return p;	/* Return Value */
}
