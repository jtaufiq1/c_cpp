#include <stdio.h>

int main(int argc, char **argv)
{
	if(argc != 2)
		return 1;

	char *filename = argv[1];
	FILE *fp = fopen(filename, "r");
	if(!fp)
		return 2;

	/* Count digits, white space, and others */
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for(i = 0; i < 10; ++i)
		ndigit[i] = 0;	// Initialize digit count to 0
	while( (c = fgetc(fp)) != EOF )
		if(c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if(c == ' ' || c == '\n' || c == '\n')
			++nwhite;
		else
			++nother;
	printf("digits =");
	for(i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
	return 0;
}

// 1234567890
