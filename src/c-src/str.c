#include <stdio.h>
#include <string.h>

/* 
 * string 
 */

int main(void)
{
	// variables declaration and string initialized.
	char s[100],c;
	int i,j,k,n;


	// get string 
	printf("Input: ");
	scanf("%[^\n]c", &s);

	printf("%c",s);
	// print characters line by line
	for(i = 0, n = strlen(s); i < n; i++)
	{
	if(s[i] == ' ' && (s[i+1]) != '\0')
		{
			printf("%c",s[i+1]);
			i++;

		}
	}
	
	// print new and exit
	printf("\n");

	return 0;
}
