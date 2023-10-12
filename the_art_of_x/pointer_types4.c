/*** WARNING: Typecasting using generic typeless pointer (void)
 *   Messy code
 ***/
#include <stdio.h>

int main()
{
    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};

    void *void_ptr;

    void_ptr = (void *) char_array;

    int i;
    for(i = 0; i < 5; i++) { // Iterate through the int array with char_ptr
        printf("[integer pointer] points to %p, which contains the char '%c'\n",\
                void_ptr, *((char *) void_ptr));
        void_ptr = (void *) ((char *) void_ptr + 1);
    }

    void_ptr = (void *) int_array;
    for(i = 0; i < 5; i++) { // Iterate through the char array with int_ptr
        printf("[char pointer] points to %p, which contains the integer %d\n",\
                void_ptr, *((int *) void_ptr));
        void_ptr = (void *) ((int *) void_ptr + 1);
    }

    return 0;
}
