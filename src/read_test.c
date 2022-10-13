#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
    char byte = 0;
    
    FILE *fd = fopen("notes", "r");
    if(fd != NULL) {
        while(fread(&byte, 1, 1, fd) != 0)
            printf("%c", byte);
    }

    return 0;
}
