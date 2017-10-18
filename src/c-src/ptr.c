#include <stdio.h>
#include <stdlib.h>

/* pointer practice
 *
 *
 * By:
 *   Taufiq Gh.
 * Email:
 *	jtaufiq1@gmail.com
 */

int main(void)
{
	int num;
	int *ptr;
	
	// get input now
	printf("Input: ");
	scanf("%i",&num);

	// assign to ptr

	ptr = &num;

	// print ptr
	printf("Address of ptr:%x and content of num: %i\n",&ptr, *ptr);

	// print num
	printf("Address of num: %x\nThe main variable: %i\n",&num, num);

	// change num using *ptr
	 *ptr = 3;
	 printf("changed using *ptr:%i\n", num + &num);
	printf("Size of num: %i\nSize of *ptr:%i\n", sizeof((int)num), sizeof((int)*ptr));

	return 0;

}
