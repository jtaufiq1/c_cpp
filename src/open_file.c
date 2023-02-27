#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Open file, Read Content of file

int main(int argc, char **argv)
{
    if(argc != 2) {
        printf("Requires a file\n");
        printf("%s  filename\n", argv[0]);
        return EXIT_FAILURE;
    }

	char *file_name = argv[1];
	FILE *fp = fopen(file_name, "r");

	if(!fp) {
		printf("Failed to open %s\n", file_name);
		return EXIT_FAILURE;
	}

    if(strlen(argv[1]) == 0)
	    printf("File Name: %s\n", file_name);

	int c;
	while( (c = getc(fp)) != EOF ) {
		putchar(c);
	}
	fclose(fp);

	return EXIT_SUCCESS;
}
