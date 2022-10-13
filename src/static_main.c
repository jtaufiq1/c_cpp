#include <stdio.h>

// Static keyword
// Static variable
// Static global variable | function
//
int x = 10;
void print_num(void)
{
    static int y = 0;
    printf("%d\n", y);
    y++;
}

void caller(void);

int main(void)
{
    caller();
    return 0;
}
