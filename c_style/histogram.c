#include <stdio.h>
#include <stdlib.h>

#define OUT 0
#define IN 1
#define SIZE 10

#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'

/** HISTOGRAM
 * 
 * DESCRIPTION:
 * 	Program to print the histogram of words in its
 * 	input.
 * 	Histogram in horizontal bars
 * 	Set Character counter to 0
 * 	If character is not EOF, continue
 * 	Get characters from input source
 * 	If character is newline
 * 	  Print newline
 * 	Else If character is space or tab
 * 	  Increase space count by 1
 * 	  If space count = 1
 * 	    Print space	
 * 	Else print histrogram of word
 * 	 Histogram:
 * 	   Increase character counter by 1
 * 	   If character counter is 5
 * 	     Reset character counter 
 * 	     Print an asterick
 * 	   Else print horizontal bar
 *	End Program
 * 	Histogram in vertical bars
 */
int main(int argc, char **argv)
{
	int nc, nw, c, state;
	nc = nw = 0;
	state = OUT;
	while( (c = getchar()) != EOF ) {
		if(c == NEWLINE){
			putchar(c);
		}
		if( c == SPACE || c == TAB || c == NEWLINE ) {
			state = OUT;
			++nw;
			if(nw == 1 && c != NEWLINE) {
				putchar(SPACE);
			}
			nc = 0;
		} else {
			state = IN;
			nw = 0;
			++nc;
			if(nc == 5) {
				nc = 0;
				c = '*';
			} else {
				c = '-';
			}
			putchar(c);
		}
	}
	exit(EXIT_SUCCESS);
}
