#include <stdio.h>
#include <stdlib.h>

// Open file, Read Content of file
int main(int argc, char **argv)
{
	unsigned char *file_name = argv[1];

	FILE *fp = fopen(argv[1], "r");
	if(!fp) {
		printf("Failed to open %s\n", argv[1]);
		return EXIT_FAILURE;
	}
	printf("File Name: %s\n", argv[1]);

	int c;
	while( (c = getc(fp)) != EOF ) {
		putchar(c);
	}

	fclose(fp);
	return EXIT_SUCCESS;
}
// Always Close file after opening
