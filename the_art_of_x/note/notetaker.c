/* WARNING: Remote Code Execution... */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "../lib/hacking.h"

void usage(char *prog_name, char *filename)
{
    printf("Usage: %s<data to add to %s>\n", prog_name, filename);
    exit(0);
}

/* main notetaker app */
int main(int argc, char *argv[])
{
    char *buffer, *datafile;
    datafile = (char *) ec_malloc(11);
    strncpy(datafile, "/var/notes", 11);

    // Check argument Count: If there aren't command-line argument,
    // display usage message and exit.
    if(argc < 2)
        usage(argv[0], datafile);

    // Use argv[1] Length as buffer size
    unsigned int buf_size = 180, argv_len = 0;

    argv_len = strlen(argv[1]);
    if(argv_len != 0)
        buf_size = argv_len;

    buffer = (char *) ec_malloc(buf_size);
    strncpy(buffer, argv[1], buf_size + 1); // Copy note into buffer

    printf("[DEBUG] buffer   @ %p, size: %d bytes\n", buffer, buf_size);
    printf("\t\t : \'%s\'\n", buffer);
    printf("[DEBUG] datafile @ %p: \'%s\'\n", datafile, datafile);
    
    // Opening the file
    int fd; // File Descriptor.
    unsigned int FILE_MODE, FILE_PERM;
    FILE_MODE = O_WRONLY|O_CREAT|O_APPEND;
    FILE_PERM = S_IRUSR|S_IWUSR;

    fd = open(datafile, FILE_MODE, FILE_PERM);
    if(fd == -1)
        fatal("in main() while opening file");
    printf("[DEBUG] file descriptor is %d\n", fd);
    
    int userid = getuid();
    /* Writing UserID and Note data
    if(dprintf(fd, "%d", userid) == -1)   // Write user ID before note data.
        fatal("in main() while writing userid to file.");
    write(fd, "\n", 1); */

    // Todo: Test write() with OR sizeof(userid)
    if(write(fd, &userid, sizeof(userid)) == -1)
        fatal("in main() while writing userid to file.");
    write(fd, "\n", 1); // Terminate line.

    if(write(fd, buffer, buf_size) == -1)
        fatal("in main() while writing buffer to file");
    write(fd, "\n", 1);

    // Closing the file
    if(close(fd) == -1)
        fatal("in main() while closing file");

    printf("Note has been saved.\n");
    free(buffer);
    free(datafile);

    exit(0);
}
