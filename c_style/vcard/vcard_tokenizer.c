#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define FWD_SLASH '/'
#define EOL '\n'
#define null '\0'

/** VCARD TOKENIZER
 * 
 * DESCRIPTION:
 * 	Vcard Tokenizer is a simple program that
 * 	reads VCard (Virtual Contact Card).
 * 	The program takes one arguments as the VCard to read.
 * 	
 * 	Tokenize and Assigns the Name(s) and Telephone(s) fields
 * 	to a structure.
 * 	And saves the content into a text file.
 *
 * AUTHOR:
 * 	Taufiq Gh
 *
 *
 */

int main(int argc, char **argv)
{
	// Argument: VCard File
	const unsigned short ARG_COUNT = 2;
	const unsigned char *PROGRAM_NAME = argv[0];
	char *VCARD_FILE = argv[1]; 

	if(argc != ARG_COUNT) {
		printf("%s Requires 1 argument\n", PROGRAM_NAME);
		printf("\n");
		printf("USAGE:\n");
		printf("\t%s VCARD FILE\n", PROGRAM_NAME);

		exit(1);
	}

	// Open VCard File
	FILE *fp = fopen(VCARD_FILE, "r");
	if(!fp) {
		printf("Failed to Open File: %s\n", VCARD_FILE);
		exit(2);
	}

	// Read VCard File
	printf("File Name: %s\n", VCARD_FILE);

	unsigned int nl, nc;
	nl = nc = 0;
	
	int c;
	char line[30];
	while( (c = getc(fp)) != EOF ) {
		if( c == EOL ) {
			nc = 0;
		}
		
		if( (nc >= 0 ) && c == FWD_SLASH)
			printf("%c", c);
		if( nc > 1 && (c != FWD_SLASH && c != EOL) ) {
			putchar(c);
		} else if(c == EOL) {
			putchar(EOL);
		}
		nc++;
	}
	// Close VCard File
	fclose(fp);

	return EXIT_SUCCESS;
}
