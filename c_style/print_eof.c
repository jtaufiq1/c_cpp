#include <stdio.h>

/* Simple Program Print the value of EOF */

int main(int argc, char **argv)
{
	printf("EOF: %d\n", EOF);
	printf("char: %c, EOF: %d\n", getchar(), EOF);

	return 0;
}
