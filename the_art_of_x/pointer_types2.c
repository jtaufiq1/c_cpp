/* WARNING: Pointer points to imcompatible data type; line 12-13 */
#include <stdio.h>

int main()
{
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};

    char *char_ptr;
    int *int_ptr;

    char_ptr = (char *) int_array;  // The char_ptr and int_ptr now
    int_ptr = (int *) char_array;  // point to incompatible data types.

    int i;
    for(i = 0; i < 5; i++) { // Iterate through the int array with char_ptr
        printf("[integer pointer] points to %p, which contains the char '%c'\n",\
                int_ptr, *int_ptr);
        int_ptr = (int_ptr + 1);
    }

    for(i = 0; i < 5; i++) { // Iterate through the char array with int_ptr
        printf("[char pointer] points to %p, which contains the integer %d\n",\
                char_ptr, *char_ptr);
        char_ptr = (char_ptr + 1);
    }

    return 0;
}
