#include <stdio.h>

#define IN 1		/* Insize a word */
#define OUT 0		/* Outside a word */

/** CHARACTER, WORD AND LINE COUNTER 
 * DESCRIPTION:
 * 	Simple word count program
 * PROGRAM NAME:
 * 	word_count.c
 * COMPILE:
 * 	gcc -o word_count word_count.c
 * **
 *
 * **
 */
int main(int argc, char **argv)
{
	char c;
	int nl, nw, nc, state;
	
	state = OUT;
	nl = nw = nc = 0;
	while( (c = getchar()) != EOF) {
		++nc;
		if( c == '\n')
			++nl;
		if( c == ' ' || c == '\t' || c == '\n' || c == '\0' )
			state = OUT;
		else if(state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("\t%d\t%d\t%d\n", nl, nw, nc);
	return 0;
}
