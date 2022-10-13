#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define OUT 0
#define IN 1

#define TAB '\t'		/* Tab character, Escaped Tab */
#define SPACE ' '		/* Space character, Escaped Backspace */

/** SINGLE BLANK REPLACER
 * DESCIPTION:
 * 	Simple program to replace every occurrence
 * 	of tab with \t, space with a single space 
 * 	in the program output.
 * PROGRAM NAME:
 * 	single_blank.c
 * COMPILE:
 * 	gcc -o single_blank single_blank.c
 *
 * ALGO:
 * 	DEFINE Tab, Space, Backslash
 * 	GET INPUT from STDIN 
 * 	IF character is space or a tab, count
 * 	IF space or tab is greater than one in a row,
 * 	REPLACE with a single blank (space).
 * 	PRINT OUTPUT
 *
 * PSEUDO-CODE:
 * 	WHILE character is NOT End-Of-File
 * 		IF character is SPACE || TAB
 * 			Increase blank count by 1;
 * 			state = OUT;
 * 			IF blank == 1;
 * 				Write space to file;
 * 		ELSE
 * 			Reset blank count to 0;
 * 			State = IN;
 * 			Write character to file;
 * 		END IF
 * 	END WHILE
 */
int main(int argc, char **argv)
{
	if(argc != 3) {
		printf("Requires 2 Arguments\n");
		exit(-1);
	}

	char *input_file = argv[1];
	char *output_file = argv[2];

	FILE *in = fopen(input_file, "r");
	if(!in) {
		printf("%s Not Found\n", input_file);
		exit(-2);
	} 
	FILE *out = fopen(output_file, "w");

	int c, blank, state;
	state = blank = OUT;
	while( (c = fgetc(in)) != EOF ) {
		if( c == SPACE || c == TAB ) {
			++blank;
			state = OUT;
			if(blank == 1)
				fputc(SPACE, out);
		}
		else {
			state = IN;
			blank = 0;
			fputc(c, out);
		}
	}
	exit(EXIT_SUCCESS);
}
