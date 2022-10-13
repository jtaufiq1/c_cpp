#include <stdio.h>

void function() // An example function, with its own context
{
    int var = 5;
    static int static_var = 5;  // Static variable initialization

    printf("\t[in function] var = %d\n", var);
    printf("\t[in function] static_var = %d\n", static_var);
    var++;          // Add one to var.
    static_var++;   // Add one to static_var.
}

/* main */
int main()  // The main function with its own context
{
    static int static_var = 1337; // Another static, in a different context.

    for(int i =0; i < 5; i++) {
        printf("[in main] static_var = %d\n", static_var);
        function(); // Call the function
    }

    return 0;
}
