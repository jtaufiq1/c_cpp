#include <stdio.h>
#include <stdlib.h>

// FACTORIAL OF A NUMBER 
int fact(int);

int main(int argc, char **argv)
{
	if(argc != 2)
		return -1;

	int base = 1;
	int n = atoi(argv[1]);

	if(!n)
		return -2;

	printf("%d, ", base);
	for(int i = base; i <= n/2; ++i) {
		for(int j = n/2; j >= base; --j) {
			if(i * j == n)
				printf("%d, ", i);
		}
	}
	printf("%d\n", n);
	return 0;
}

// Calculates the factorial of arg: n
int fact(int n)
{
	if(n == 0)
		return n;
	return n * fact(n - 1);
}
