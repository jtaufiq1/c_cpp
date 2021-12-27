#include <stdio.h>

/* 
 * Inserting an Element in an Array
 * of a fixed size.
 */

void main(){
	
	int n = 5; // Size of the Array
	int item = 10; // Item to insert
	int k = 3; // Position to Insert Item
	int i, j = n; // declaration and New Array size

	int LA[] = {1,3,5,7,8}; // Elements in the Array;

	printf("\t\t\tThe original array elements are: \n");
	
	// Initial elements of the Array
	for(i = 0; i<n; i++){
		printf("\tLA[%d] = %d \n", i, LA[i]);
	}

	n += 1; // Increased Array size by One

	// If j >= K 
	while( j >= k) {
		LA[j+1] = LA[j]; // LA[6] = LA[5]
		j -= 1; // Decrease j by One
	}

	LA[k] = item; // Insert item at the Kth Position

	// Print the Array element after Insertion
	printf("\n\t\t\tAfter Insertion of New Element: \n");

	// New Elements of the Array
	for(i = 0; i<n; i++){
		printf("\tLA[%d] = %d\n", i, LA[i]);
	}
}
