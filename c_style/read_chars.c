#include <stdio.h>

/*
 * Input & Output Operation
 * Read a character and output to STDOUT
 *
 * getchar() & putchar() function
 *
 * Algorithm:
 * 	read a character
 * 	while( character not end-of-file)
 * 		output the character
 * 		read a character
 */

int main(int argc, char **argv) 
{
	char c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
	return 0;
}
