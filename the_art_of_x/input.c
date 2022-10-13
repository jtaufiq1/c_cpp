#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEFAULT 180  // Default bytes 

// This function is used to input the player name, since
// scanf("%s", &whatever) will stop input input at the first space.
void input_name()
{
    char *name_ptr, input_char = 0xA, username[0x64];

    printf("input field: ");
    while(input_char == '\n')
        scanf("%c", &input_char);

    name_ptr = username;

    while(input_char != 0xA) {
        *name_ptr = input_char;
        scanf("%c", &input_char);
        printf("char: %c, %s\n", input_char, name_ptr++);
        //name_ptr++;
    }
    *name_ptr = 0;

    printf("name_ptr @(%p): %s; size: %lu\n", name_ptr, name_ptr, sizeof(name_ptr));
    printf("username @(%p): %s; size: %lu\n", username, username, sizeof(username));
}

int main(int argc, char *argv[])
{
    /*
    char *message;
    unsigned mem_size = DEFAULT;
    int count;
    
    *** ARGUMENTS
     * ARGV[0] = Program_Name
     * ARGV[1] = Message
     * ARGV[2] = Message_Count
     * ARGV[3] = Message_Size (Optional, Default to 50 if not present)
     * ...
     ***
    
    if(argc >= 3) {
        // Nullify args beyond 3
        for(int i = 4; i <= argc; i++)
            argv[i] = "";

        // Optional size
        if(argv[3] != NULL)
            mem_size = strtol(argv[3], NULL, 0);
        
        if(mem_size < DEFAULT)
            mem_size = DEFAULT;

        // Message
        message = (char *) malloc(mem_size);
        strcpy(message, argv[1]);
        argv[1] = "";
        
        // Count
        count = strtol(argv[2], NULL, 0);
        if(!count)
            count = 1;
    }
    else {
        printf("Message: ");
        message = (char *) malloc(mem_size);
        scanf("%[^\n]c", message);

        printf("Repeat how many times? ");
        scanf("%d", &count);
    }

    for(int i = 1; i <= count; i++) {
        printf("%3d - %s\n", i, message);
    }

    // Stats
    printf("[stats] Address: %p\n\tBuffer Size: %u bytes\n\tMessage length: %d\n",\
            &message, mem_size, (unsigned) strlen(message));
    free(message);

    */
    input_name();

    return 0;
}
