#include <stdio.h>

#define SPACE ' '	/* Space character */
#define TAB '\t'	/* Tab character */
#define NEWLINE 0xA	/* Newline in Hexadecimal */

/** BLANK COUNTER
 * DESCRIPTION: A simple program to count blanks.
 *  A blank can be a space(s), tab and/or newline
 * PROGRAM NAME: blank_counter.c
 * COMPILE: gcc -o blank_counter blank_counter.c
 *
 * DEFINE Space, Tab and Newline characters
 * SET Count = 0
 * SET character
 * WHILE character NOT end-of-file
 * 	IF character is Space or Tab or Newline
 * 		INCREASE Count by One
 * 	END IF
 * END WHILE
 * PRINT Count
 */

int main(int argc, char **argv)
{
	unsigned int ns, nt, nl, count;
	count = ns = nt = nl = 0;
	int c;

	while( (c = getchar()) != EOF ) {
		if( c == SPACE )
		       ++ns;
		if( c == TAB )
		       ++nt;
		if( c == NEWLINE )
			++nl;
	}

	printf("%c", NEWLINE);
	count = ns + nt + nl;
	printf("Total Blanks: %u\n", count);
	printf("Space(s): %u, ", ns);
	printf("Tab(s): %u, ", nt);
	printf("Newline(s): %u\n", nl);

	return 0;
}
