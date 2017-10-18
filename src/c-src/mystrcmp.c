#include <stdio.h>
#include <stdlib.h>

char mystrcmp(char *str1[], char *str2[]);
/* copy of strcmp
 * from eskimo.com/~scs/cclass/notes/sx10b.html.
 *
 *
 *
 *
 *
 *
 *
 */
int main(int argc, char* argv[])
{
	char ptr1[26], ptr2[36];
	
	do{
		if(argc > 3)
			printf("Takes 2 arguments:", argc);

	}while(argc > 3 || (!(char)argv[1]) || (!(char)argv[2]));
	/* ask for input 
	printf("String1:");
	scanf("%s",&ptr1);

	// second input
	printf("String2:");
	scanf("%s",&ptr2);
	*/

	// check for equality
	if(mystrcmp(argv[1], argv[2]) == 0)
		printf("They're equal\n");
	else
		printf("They're not equal\n");

//	mystrcmp(ptr1, ptr2);
return 0;

}

char mystrcmp(char *str1[], char *str2[])
{

	char *p1 = &str1[0], *p2 = &str2[0];

	while(1)
	{
		if(*p1 != *p2)
			return *p1 - *p2;

		if(*p1 == '\0' || *p2 == '\0')
			return 0;
		p1++;
		p2++;
	}
}
