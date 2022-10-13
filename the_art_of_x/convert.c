#include <stdio.h>
#include <stdlib.h>

void usage(char *program_name)
{
    printf("Usage: %s <message> <# of times to repeat>\n", program_name);
    exit(-1);
}

/* main */
int main(int argc, char *argv[])
{
    if(argc < 3)
        usage(argv[0]);

    int count;
    count = atoi(argv[2]);
    // count = strtol(argv[2], 0, 0);
    printf("Repeating %d times...\n", count);

    for(int i = 0; i < count; i++)
        printf("%3d - %s\n", i, argv[1]);   // Print the 1st arg.

    exit(0);
}
