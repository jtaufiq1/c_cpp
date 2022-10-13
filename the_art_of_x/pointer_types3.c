/*** WARNING: Pointer points to imcompatible data type; line 12-13
 *   Typecasting into the pointer's data type solves the issue
 ***/
#include <stdio.h>

int main()
{
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};

    char *char_ptr;
    int *int_ptr;

    char_ptr = (char *) int_array;  // Typecast into
    int_ptr = (int *) char_array;   // pointer's data type.

    int i;
    for(i = 0; i < 5; i++) { // Iterate through the int array with char_ptr
        printf("[integer pointer] points to %p, which contains the char '%c'\n",\
                int_ptr, *int_ptr);
        int_ptr = (int *) ((char *) int_ptr + 1);
    }

    for(i = 0; i < 5; i++) { // Iterate through the char array with int_ptr
        printf("[char pointer] points to %p, which contains the integer %d\n",\
                char_ptr, *char_ptr);
        char_ptr = (char *) ((int *)char_ptr + 1);
    }

    return 0;
}
