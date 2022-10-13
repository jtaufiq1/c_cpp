#include <stdio.h>
#include <stdlib.h>

// Print Binary value of Number

int main(int argc, char **argv)
{
	if(argc != 2) {
		printf("Provide a number\n");
		exit(-1);
	}

	int num = atoi(argv[1]);
	if(!num) {
		printf("Invalid number\n");
		exit(-2);
	}

	printf("Decimal: %d\n", num);
	printf("Binary: ");
	unsigned int bin = num;
	while(bin) {
		if(bin & 1)
			printf("1");
		else
			printf("0");
		bin = bin >> 1;
	}
	printf("\n");
	printf("Hex: %x\n", num);
	printf("Octal: %o\n", num);

	exit(EXIT_SUCCESS);
}
