#include <stdio.h>

int main()
{
    int int_var = 5;
    int *int_ptr;

    int_ptr = &int_var;     // put the address of int_var into int_ptr
    printf("int_var @ (%p) --> %d\n", &int_var, int_var);
    printf("int_ptr @ (%p) --> %d\n", int_ptr, *int_ptr);

    return 0;
}
