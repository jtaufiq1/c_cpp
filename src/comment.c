#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAB '\t'
#define NEWLINE '\n'
#define SPACE ' '

void usage(char *prog_name) 
{
    printf("Usage:\n\t\t%s <file>", prog_name);
    exit(-1);
}
void fatal(char *);             // print fatal Error 
void *ec_malloc(unsigned int);  // Error-checked malloc wrapper

int main(int argc, char **argv)
{
	if(argc != 2) {
        usage(argv[0]);

	// Open a file to read
	char *filename = ec_malloc(10);
    strcpy(filename, argv[1]);

	FILE *fp = fopen(filename, "r");
	
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
		} else if((line_comment[0] != '/' || line_comment[1] != '/') && c != NEWLINE) {
			cf_slash = 0;
		}
		if(cf_slash == 2 && c != NEWLINE){
			if(line_comment[0] == '/' && line_comment[1] == '/')
				printf("%c", c);
		}
		if(c == NEWLINE && cf_slash == 2) {
			++nl; 		// Count Lines and Reset
			cf_slash = 0;
			line_comment[0] = '\0';
			line_comment[1] = '\0';
			printf("\n");
		}
	}
	printf("Comment Lines: %d\n", nl);

	// Close File
	fclose(fp);
}
}

void fatal(char *message)
{
    char error_message[100];
    strcpy(error_message, "[!!] Fatal Error ");
    strncat(error_message, message, 83);
    perror(error_message);
}

// 
void *ec_malloc(unsigned int size)
{
    void *ptr;
    ptr = malloc(size);
    if(ptr == NULL) {
        fatal("in ec_malloc(), failed to allocated memory\n");
        exit(-10);
    }
    return ptr;
}
