#include <stdio.h>

/*
 *
 * Add two Numbers 
 *
 */

void main(){


	int Number_1, Number_2, Sum_;

	// get input
	printf("Input Two Numbers To Add\n");

	printf("Number_1: ");
	scanf("%d", &Number_1);
	printf("Number_2: ");
	scanf("%d", &Number_2);

	// Add Number_1 and Number_2 
	
	Sum_ = Number_1 + Number_2;

	// Print to Output
	
	printf("%d + %d = %d\n", Number_1, Number_2, Sum_);

}
