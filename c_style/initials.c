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
	char *s = malloc(20);
	printf("Enter Valid string : ");
	scanf("%[^\n]s", s);

	for(int i = 0, n = strlen(s); i < n; i++)
	{
		if (i == 0) 
			printf("%c", toupper(s[i]));
		if((s[i] == ' ' || s[i] == '\t') && s[i+1] != '\0')
		{
			printf("%c", toupper(s[i + 1]));
			i++;
		}
	}
	free(s);
	printf("\n");
	return 0;
}
