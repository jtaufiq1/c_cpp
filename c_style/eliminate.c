#include <stdio.h>
#include <string.h>

/* Eliminate 'D' or 'd' in a string and print space

   By Taufiq Gh.
   
email: jtaufiq1@gmail.com
*/

int main(int argc, char* argv[])
{
	int i,j,k;
	for(i = 0; i < argc; i++)
	{
		for(j = 0, k = strlen(argv[i]); j < k; j++)
		{
			if(j == 0)
			{
				j=+1;
				printf("R");
			}
			//j = j + 2;

			printf("%c\n", argv[i][j]);
		}
		printf("_");

		printf("\n");
	}
//	printf("\n");
	return 0;
}
