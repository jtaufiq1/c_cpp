#include <stdio.h>

// array test

int main(int argc, char* argv[])
{
	int i, j, n;
	for(i = 1; i = argc; i++)
	{
		for(j = 0, n = strlen(argv[i]); j < n; j++)
		{
			if(j == 0)
			printf("%s", argv[i][j]);
		}
	}
	printf("\n");
	return 0;
}
