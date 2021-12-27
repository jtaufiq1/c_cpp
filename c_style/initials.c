#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* 
 * Initials
 * print out all the initials of every word
 *
 * pset2 from cs50
 *
 * By :
 *	Taufiq Gh.
 * Email:
 *	jtaufiq1@gmail.com
 *
 */

int main(void)
{
	char s[100];
	int i, j, k, n;

	// get input
	printf("Enter Valid string : ");
	scanf("%[^\n]c", &s);
	
//	printf("%c", toupper(s[0]));

	// Loop for individual character of string
	for(i = 0, n = strlen(s); i < n; i++)
	{
		if (i == 0) 
			printf("%c", toupper(s[i]));
		if(s[i] == ' ' && s[i+1] != '\0')
		{
			printf("%c", toupper(s[i + 1]));
			i++;
		}
	}
	printf("\n");
	return 0;
}
