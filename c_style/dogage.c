#include <stdio.h>

// Calculate Dog Age 
int main()
{
	printf("Please enter your age: ");

	int age;
	scanf("%d", &age);

	int dogage = age * 7;
	printf("In dog years, you are %d years old.\n", dogage);

	return 0;
}
