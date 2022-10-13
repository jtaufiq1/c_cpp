#include <stdio.h>

/** Character Arrays
 *
 * while (there's another line)
 * 	if(it's longer than the previous line)
 * 		save it
 * 		save its length
 * print longest line
 *
 */
#define MAXLINE 1000

int get_line(char line[]);		// Reads a line and returns it length
void copy(char to[], char from[]);	// Copies from into to

int main()
{
	int len;			// Current line length
	int max;			// Current Maximun line length 
	char line[MAXLINE];		// Current input line
	char longest[MAXLINE];		// Longest line saved here

	max = 0;
	while ((len = get_line(line)) > 0)
		if(len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

int get_line(char s[MAXLINE])
{
	int c, i, j;

	for(i = 0; ( (c = getchar()) != EOF) && (c != '\n'); ++i ) {
		s[i] = c;
	}
	if(c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[MAXLINE], char from[MAXLINE])
{
	int i,j;
	i = 0;
	j = 0;
	while( (to[i] = from[i]) != '\0') 
		++i;
}
