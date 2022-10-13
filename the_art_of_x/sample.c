#include <stdio.h>
#include <string.h>

void sample()
{
    char s[100];
    strncpy(s, "[Sample] ", 20);
    strncat(s, "This message has no meaning!", 50);
    strncat(s, "\n", 2);

    printf(s);
}

int main()
{
    sample();
    
    return 0;
}
