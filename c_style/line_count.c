#include <stdio.h>

#define NEWLINE 0xA		/* Hex value for new line */

/** Line Counter
 * DESCRIPTION: A simple program to count number
 *+ lines in text.
 * PROGRAM NAME: line_counter.c
 * COMPILE: gcc -o line_counter line_counter.c
 */

int main(int argc, char **argv)
{
	unsigned long line_count = 0;
	int c;
	while( (c = getchar()) != EOF ) {
		if(c == NEWLINE)
			++line_count;
	}
	printf("Line: %lu\n", line_count);
	return 0;
}
