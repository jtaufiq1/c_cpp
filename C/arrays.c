#include <stdio.h>

/** Arrays
 *
 *
 */

int main() {
	const int size = 6;
	int prices[size];
	int arr_length = sizeof(prices) / sizeof *prices;

	int i; 
	for(i = 0; i < arr_length; i++) {
		prices[i] = 1 * i + 2;
	}

	for(i = 0; i < arr_length; i++) {
		printf("Price %u = %u.\n",i,prices[i]);
	}

	return 0;
}
