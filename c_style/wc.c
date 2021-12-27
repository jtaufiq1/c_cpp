#include <stdio.h>

#define IN_WORD 1	/* State of buffer */
#define OUT 0

/** WORD COUNT V2 - MY IMPLEMENTATION *
 *
 *
 */
int main(int argc, char **argv)
{
	// Counting sets
	int nc, nw, nl;
	int c, state;
	nc = nw = nl = 0;

	state = OUT;
	while( (c = getchar()) != EOF ) {
		// Characters and Newline Count
		++nc;
		// Skip blanks
		if(c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		}
		else if(state == OUT) {
			state = IN_WORD;
			++nw;
		}
		// Word per line
		if(state == IN_WORD) {
			; // putchar(c);
		}
		if( c == '\n' && nw == 0) {
			c = '\0';
		}
		putchar(c);
	}
	return 0;
}
