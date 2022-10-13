#include <stdio.h>

#define TAB '\t'		/* Tab character, Escaped Tab */
#define TAB_LITERAL "\\t"

#define SPACE ' '		/* Space character, Escaped Backspace */
#define BACKSPACE_LITERAL "\\b"

#define BACKSLASH '\\'		/* BACKSLASH character, Backslash Literal */
#define BACKSLASH_LITERAL "\\\\"

/** BLANK REPLACER
 * DESCIPTION:
 * 	Simple program to replace every occurrence
 * 	of tab with \t, space with \b and backslash
 * 	with \\. Making it visible in the output of
 * 	the program.
 * 
 * PROGRAM NAME:
 * 	blank_replacer.c
 * COMPILE:
 * 	gcc -o blank_replacer blank_replacer.c
 *
 * ALGORITHM:
 * 	DEFINE Tab, Space, Backslash
 * 	GET INPUT from STDIN 
 * 	REPLACE Tab with \\t
 * 	REPLACE Space with \\b
 * 	REPLACE Backslash with \\
 * 	PRINT OUTPUT
 *
 * PSEUDO:
 * 	DEFINE TAB Literal \t
 * 	DEFINE BACKSPACE Literal \b
 * 	DEFINE BACKSLASH Literal \\
 *
 * 	WHILE INPUT NOT End-Of-File
 * 		IF INPUT is TAB
 * 			REPLACE with TAB Literal
 * 		END IF
 * 		IF INPUT is SPACE
 * 			REPLACE with BACKSPACE Literal
 * 		END IF
 * 		IF INPUT is BACKSLASH
 * 			REPLACE with BACKSLASH Literal
 * 		END IF 
 * 	END WHILE
 * 	PRINT OUTPUT
 */

int main(int argc, char **argv)
{
	int c;
	printf("\t*** INPUT & OUTPUT MODE ***\n");
	while( (c = getchar()) != EOF) {
		if(c == TAB) {
			printf("%s", TAB_LITERAL);
		}
		else if(c == SPACE) {
			printf("%s", BACKSPACE_LITERAL);
		}
		else if( c == BACKSLASH) {
			printf("%s", BACKSLASH_LITERAL);
		}
		else {
			putchar(c);
		}
	}
	return 0;
}
