#include <stdio.h>
#include <stdlib.h>

// Open file
int main(int argc, char **argv)
{
	FILE *fp = fopen(argv[1], "r");

	if(!fp) {
		printf("Failed to Open file\n");
		return EXIT_FAILURE;
	}
	printf("File Name: %s\n", argv[1]);

	int c;
	while( (c = getc(fp) ) != EOF ) {
		putchar(c);
	}
	fclose(fp);

	return EXIT_SUCCESS;
}
