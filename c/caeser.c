#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Caeser cipher
 *
 * pset2 from cs50
 *
 * By:
 *	Taufiq Gh
 *
 * Email:
 *	jtaufiq1@gmail.com
 *
 *
 */

int main(int argc, char* argv[])
{
	/* get key.
	   Key is passed as command line argument to caeser.
	   ./caeser + key
	 */
	if(argv != 2)
	{
		break;	
	}

	// Get string to encrypt
	char string[100][10];
	printf("\nInput String to encrypt:");
	scanf("%[^\n]s",&string);

	// Test display
	printf("%s\nAnd key = %i\n",string, argv[1]);

return 0;
}
