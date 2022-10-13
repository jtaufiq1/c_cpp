#include <stdio.h>

extern int x;

void caller(void)
{
    printf("%d\n", x);
}
