#include <string.h>
#include <time.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
# define LIM 4000000
    int j;
    char p[LIM];
    time_t base;

    base = time(NULL);
    p[19] = '\0';

    for(j = 0; j < LIM; j++){
        if ((j & 10000) == 0)
            printf("%d %ld\n", j, (long) (time(NULL) - base));
        strcat(p, "a");
    }

    return 0;
}
