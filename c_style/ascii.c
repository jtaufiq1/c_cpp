#include <stdio.h>

#define START 0		/* ASCII Begin */
#define END 128		/* ASCII End */ 

/** ASCII PRINT
 * DESCRIPTION:
 * 	Simple program to print ASCII letters and numbers
 * 	along sides.
 * PROGRAM NAME:
 * 	ascii.c
 * COMPILE:
 * 	gcc -o ascii ascii.c
 */
int main(int argc, char **argv)
{
	for(int i = START; i < END; ++i) {
		if( i % 10 == 0)
			printf("\n");
		else
			printf("%d: %c ", i, i);
	}
	return 0;
}
