#include <stdio.h>

#define IN_WORD 1	/* State of buffer */
#define OUT 0

/** WORD COUNT V2 - MY IMPLEMENTATION *
 *
 *
 */
int main(int argc, char **argv)
{
	int nc, nw, nl;
	nc = nw = nl = 0;

	int c, state;
	state = OUT;
	while( (c = getchar()) != EOF ) {
		++nc;
		if( c == '\n' ) {
			++nl;
		}
		if(c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		}
		else if(state == OUT) {
			state = IN_WORD;
			++nw;
		}
	}
	printf("%d,\t%d,\t%d\n", nc, nw, nl);
	return 0;
}
