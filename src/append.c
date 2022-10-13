#include <stdio.h>
#include <string.h>

// Append character
int main() {
	char a = 'a';
	char b = 't';
	char n = '\0';
	char at = '@';
	char nl = '\n';

	char str[] = { a, b, at, nl, n };
	printf("%s: %d", str, strlen(str));

	return 0;
}
