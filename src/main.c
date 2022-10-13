#include <stdio.h>

// Debugging with GDB
int main(int argc, char **argv)
{
    long double start;
    long double stop;
    long double step;

    printf("Please Enter Start: ");
    scanf("%Lf", &start);
    printf("Please Enter Stop: ");
    scanf("%Lf", &stop);
    printf("Please Enter Step Size: ");
    scanf("%Lf", &step);

    while(start != stop) {
        printf("%Lf\n", start);
        start += step;
    }

    return 0;
}
