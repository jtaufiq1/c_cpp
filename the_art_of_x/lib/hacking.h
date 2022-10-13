void fatal(char *);                 // Fatal error handler

void *ec_malloc(unsigned int);      // Error-checked malloc() wrapper

int print_notes(int, int, char *);  // Note printing function

int find_user_note(int, int);       // Seek in file for a note for a user

int search_note(char *, char *);    // Search for keyword function
