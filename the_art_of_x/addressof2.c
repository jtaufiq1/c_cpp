#include <stdio.h>

int main()
{
    int int_var = 5;
    int *int_ptr;

    int_ptr = &int_var;     // put the address of int_var into int_ptr

    printf("int_ptr = %p\n", int_ptr);
    printf("&int_ptr = %p\n", &int_ptr);
    printf("*int_ptr = 0x%08x\n", *int_ptr);
    printf("\n");
    printf("int_var is located at %p and contains %d\n", &int_var, int_var);
    printf("int_ptr is located at %p, contains %p, and points to %d\n",\
            &int_ptr, int_ptr,  *int_ptr);

    return 0;
}
