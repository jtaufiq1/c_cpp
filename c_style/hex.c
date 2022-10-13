#include <stdio.h>
#include <stdlib.h>

/** Print HEX
 *
 *
 */
int main(int argc, char **argv)
{
	unsigned long t = 0;
	t = atol(argv[1]);

	if(!t)
		exit(EXIT_FAILURE);

	printf("%lu = %lx\n", t, t);

	exit(EXIT_SUCCESS);
}
