/* WARNING: Buffer Overflow */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "../lib/hacking.h"

#define FILENAME "/var/notes"

/* main program */
int main(int argc, char *argv[])
{
    int userid, printing = 1, fd;
    char searchstring[500];

    if(argc > 1)
        strcpy(searchstring, argv[1]);
    else
        searchstring[0] = 0;

    fd = open(FILENAME, O_RDONLY);
    if(fd == -1)
        fatal("in main() while opening file for reading");

    userid = getuid();
    while(printing)
        printing = print_notes(fd, userid, searchstring);

    exit(0);
}
