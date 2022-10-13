#include <stdio.h>

// Loop counter

int main()
{
	unsigned short a = 97;
	for(int i = 1; i <= 25; ++i) {

		printf("%c ", a+i);
	}	
	printf("\n");
	return 0;
}
