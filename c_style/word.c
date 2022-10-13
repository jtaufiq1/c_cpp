#include <stdio.h>

#define OUT 0		/* Character state: in word or is blank */
#define IN 1
/** WORD PER LINE 
 *
 * PROGRAM NAME:
 * 	
 * DESCRIPTION:
 *	A simple program to print input to output one word per line
 *	INPUT is from the default STDIN (Keyboard)
 *	OUTPUT is the default STDOUT (Display)
 *	Word is a sequence of character terminated by a blank or newline character.
 * PSEUDO-CODE:
 * 	Activate Character state to OUT;
 * 	Activate blank counter to 0;
 * 	while(character is not EOF)
 * 		if(character is space || tab || newline)
 * 			Increased blank counter by 1;
 * 			Character state = out;
 * 		else 
 * 			Character state = in;
 * 			Reset blank counter to 0;
 * 			Print character;
 * 		end if
 * 		if(state = OUT && blank count is 1)
 * 			print newline;
 * 		end if
 * 	end while
 * 	Exit Program
 */
int main()
{
	int blank = 0;
	int state = OUT;
	int c;
	while( (c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n') {
			++blank;
			state = OUT;
		}
		else  {
			state = IN;
			blank = 0;
			putchar(c);
		}
		if(state == OUT && blank == 1) {
			putchar('\n');
		}
	}
	return 0;
}
