#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 2) {
        printf("%s <number>\n", argv[0]);
        exit(0);
    }

    // Decimal: Default (-d)
    // Hexadecimal: -x
    // Octal: -o
    // Binary: -b

    long dec = strtoll(argv[1], 0, 16);
    printf("Dec: %ld hex: %lx\n", dec, dec);

    return 0;
}

// Convertion functions

