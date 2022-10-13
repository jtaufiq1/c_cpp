#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Examine Memory leak using valgrind
int main(int argc, char **argv)
{
    // Memory Allocation without freeing
    char *str = malloc(20);
    strcpy(str, "Hello, World!");
    printf("%s\n", str);
    free(str);

    // Opening a file without closing
    FILE *f_ptr = fopen("test", "w");
    fprintf(f_ptr, "%s", "Hello!\nDebugging with valgrind");
    fclose(f_ptr);

    return 0;
}
