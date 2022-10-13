#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
        exit(0);
    printf("argv[1] = %s\n", argv[1]);

    int n = atoi(argv[1]);
    if(n != 0)
        printf("n = %d\n", n);

    exit(0);
}
