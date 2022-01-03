#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAB '\t'
#define NEWLINE '\n'
#define SPACE ' '

int main(int argc, char **argv)
{
	if(argc != 2) {
		printf("Provide a file name\n");
		exit(-1);
	}

	// Open a file to read
	char *filename = argv[1];
	FILE *fp; 
	if( !(fp = fopen(filename, "r")) ) {
		printf("Can't Open file: %s\n", filename);
		exit(-2);
	}
	
	// Read File: Character
	int c, nc, nl, cf_slash;
	nc = nl = cf_slash = 0;
	char line_comment[2];
	while( (c =getc(fp)) != EOF ) {
		// Count Characters
		++nc;
		// Check for Line Comment: 2 Successive Forward Slashes
		if(c == '/' && cf_slash == 0){
			line_comment[cf_slash++] = c;
		} else if(line_comment[0] == '/' && c == '/' && cf_slash == 1) {
			line_comment[cf_slash++] = c;
			printf("%c", line_comment[0]);
		} else if( cf_slash != 2 && c != NEWLINE) {
			cf_slash = 0;
			line_comment[0] = '\0';
			line_comment[1] = '\0';
		}

		if(cf_slash == 2 && c != NEWLINE){
			if(line_comment[0] == '/' && line_comment[1] == '/')
				printf("%c", c);
		}
		if(c == NEWLINE && cf_slash == 2) {
			++nl; 		// Count Commented Lines and Reset
			cf_slash = 0;
			line_comment[0] = '\0';
			line_comment[1] = '\0';
			printf("\n");
		}
	}
	printf("Comment Lines: %d\n", nl);
	// Close File
	fclose(fp);

	// Exit Program
	exit(0);
}
