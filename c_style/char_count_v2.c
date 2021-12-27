#include <stdio.h>

/** Character Count v2
 * See char_count.c for details
 * 
 * Another variation of character count program
 *+ using a for loop.

 * NAME: char_count_v2.c
 * COMPILE: gcc -o char_count_v2 char_count_v2.c
 */
int main(int argc, char **argv)
{
	char c;
	unsigned long count;
	for(count = 0; getchar() != EOF; ++count) {
	//       ;
	}
	printf("Char count: %lu\n:", count);	
	return 0;
}
