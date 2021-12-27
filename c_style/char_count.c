#include <stdio.h>

/** Character count
 *  A simple program to count characters
 *  NAME: char_count.c
 *  COMPILE: gcc -o char_count char_count.c
 *
 * SET count to 0
 * WHILE not end-of-file
 *	increase count by 1
 * END WHILE
 * PRINT count
 */

int main(int argc, char **argv)
{
	unsigned long count = 0;
	while(getchar() != EOF) {
		++count;
	}
	printf("Char Count: %lu\n", count);
	return 0;
}
