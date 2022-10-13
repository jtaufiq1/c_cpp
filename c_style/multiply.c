#include <stdio.h>
#include <stdlib.h>

/* Multiplication Table */

int main(int argc, char **argv)
{
	if(argc != 2)
		return -1;

	long num = atol(argv[1]);
	for(int i = 1; i < 13; ++i)
		printf("%ld * %d = %ld\n", num, i, num * i);
	return 0;
}
