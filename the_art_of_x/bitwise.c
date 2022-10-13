#include <stdio.h>

int main()
{
    int i, bit_a, bit_b;

    printf("bitwise OR operator |\n");
    for(i = 0; i < 4; i++) {
        bit_a = (i & 2) / 2;  // Get the second bit.
        bit_b = (i & 1);      // Get the first bit.
        printf("%d | %d = %d\n", bit_a, bit_b, bit_a | bit_b);
    }

    printf("\nbitwise AND operator &\n");
    for(i = 0; i < 4; i++) {
        bit_a = (i & 2) / 2;  // Get the second bit.
        bit_b = (i & 1);      // Get the first bit.
        printf("%d & %d = %d\n", bit_a, bit_b, bit_a & bit_b);
    }

    printf("\nbitwise NOT operator !\n");
    for(i = 1; i < 3; i++) {
        bit_a = (i & 2) / 2;    // Get the second bit.
        printf("!%d = %d\n", bit_a, !bit_a);
    }

    bit_a = 24;
    printf("\nbitwise RIGHT SHIFT operator >>\n");
    for(i = 0; i < 4; i++) {
        bit_b = bit_a;
        bit_a = (bit_a >> 1);
        printf("%d >> 1 = %d\n", bit_b, bit_a);
    }

    printf("\nbitwise LEFT SHIFT operator <<\n");
    for(i = 0; i < 4; i++) {
        bit_b = bit_a;
        bit_a = (bit_a << 1);
        printf("%d << 1 = %d\n", bit_b, bit_a);
    }

}
