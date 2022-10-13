#include <stdio.h>

int main()
{
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};

    char *char_ptr;
    int *int_ptr;

    char_ptr = char_array;
    int_ptr = int_array;

    int i;
    // Iterate through the int array with the int pointer.
    for(i = 0; i < 5; i++) {
        printf("[integer pointer] points to %p, which contains the integer %d\n",\
                int_ptr, *int_ptr);
        int_ptr = int_ptr + 1;
    }

    // Iterate through the char array with the char pointer.
    for(i = 0; i < sizeof(char_array) / sizeof(char); i++) { 
        printf("[char pointer] points to %p, which contains the char '%c'\n",\
                char_ptr, *char_ptr);
        char_ptr = char_ptr + 1;
    }

    return 0;
}
