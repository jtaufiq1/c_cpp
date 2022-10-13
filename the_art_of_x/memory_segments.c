#include <stdio.h>
#include <stdlib.h>

int global_var;
int global_init_var = 5;

void function() // Demo function
{
    int stack_var; // static variable, same as the one in main

    printf("the function's stack_var is at address %p\n", &stack_var);
}

/* main() */
int main()
{
    int stack_var;
    static int static_init_var = 5;
    static int static_var;
    int *heap_var_ptr;

    heap_var_ptr = (int *) malloc(4);

    // These variables are in the data segment.
    printf("global_init_var is at %p\n", &global_init_var);
    printf("static_init_var is at %p\n\n", &static_init_var);

    // These variables are in the bss segment.
    printf("static_var is at address %p\n", &static_var);
    printf("global_var is at address %p\n\n", &global_var);

    // This variable is in the heap segment.
    printf("heap_var is at address %p\n\n", heap_var_ptr);

    // These variables are in the stack segment.
    printf("stack_var is at address %p\n", &stack_var);
    function();

    return 0;
}
