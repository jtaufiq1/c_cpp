#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include "hacking.h"

// A function to display an error message and then exit
void fatal(char *message)
{
    char error_message[100];

    strcpy(error_message, "[!!] Fatal Error ");
    strncat(error_message, message, 83);
    perror(error_message);
    exit(-1);
}

// An error-checked malloc() wrapper function
void *ec_malloc(unsigned int size)
{
    void *ptr;
    ptr = malloc(size);
    if(ptr == NULL) {
        fatal("in ec_malloc() on memory allocation");
    }
    return ptr;
}

// A function to pring the notes for a given uid that match
// an optional search string;
// returns 0 at end of file, 1 if there are still more notes.
int print_notes(int fd, int uid, char *searchstring)
{
    int note_length;
    char byte = 0, note_buffer[500];

    note_length = find_user_note(fd, uid);
    if(note_length == -1)                       // If end of file is reached,
        return 0;                               //   return 0.

    read(fd, note_buffer, note_length);         // Read note data.
    note_buffer[note_length] = byte;            // Terminate the string.

    if(search_note(note_buffer, searchstring))  // If searchstring found,
        printf("%s",note_buffer);               // print the note.
    return 1;
}

// A function to find the next for a given userID;
// returns -1 if the end of the file is reached;
// otherwise, it returns the length of the found note.
int find_user_note(int fd, int user_uid)
{
    int note_uid = -1;
    unsigned char byte;
    int length;

    while(note_uid != user_uid){         // Loop until a note for user_id is found.
       if(read(fd, &note_uid, 4) != 4)   // Read the uid data.
            return -1;                   // If 4 bytes aren't read, return end of file code.
       if(read(fd, &byte, 1) != 1)       // Read the newline separator.
          return -1;

       byte = length = 0;
       while(byte != '\n') {             // Figure out how many byte to the end of line.
            if(read(fd, &byte, 1) != 1)  // Read a single byte.
                return -1;               // If byte isn't read, return end of file code.
            length++;
        }
    }
    lseek(fd, length * -1, SEEK_CUR);    // Rewind file reading by length bytes.

    //printf("[DEBUG] found a %d byte note for user id %d\n", length, note_uid);
    return length;
}

// A function to search a note for a given keyword;
// returns 1 if a match is found, 0 if there is no match.
int search_note(char *note, char *keyword)
{
    int keyword_length = strlen(keyword);
    if(keyword_length == 0)                // If there is no search string,
        return 1;                          // always "match".

    int match = 0;
    for(int i = 0; i < strlen(note); i++){ // Iterate over bytes in note.
        if(note[i] == keyword[match])      // If byte matchs keyword,
            match++;                       // get ready to check the next byte;
        else {                             // otherwise,
            if(note[i] == keyword[0])      // if the byte matches first keyword byte,
                match = 1;                 // start the match count at 1.
            else
                match = 0;                 // Otherwise it is zero.
        }
        if(match == keyword_length)        // If there is a full match,
            return 1;                      // return matched.
    }
    return 0;                              // Return not matched.
}
