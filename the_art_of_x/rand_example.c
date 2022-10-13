#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("RAND_MAX_ is %u\n", RAND_MAX);
    srand(time(0));

    int i;
    printf("\nrandom values from 0 to RAND_MAX\n");
    for(i = 0; i < 8; i++)
        printf("%d\n", rand());

    printf("\nrandom values from 1 to 20\n");
    for(i = 0; i < 8; i++)
        printf("%d\n", (rand()%20)+1);

    return 0;
}
