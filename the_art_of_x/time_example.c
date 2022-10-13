#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define _POSIX_C_SOURCE || _BSD_SOURCE || _SVID_SOURCE

int main(int argc, char *argv[])
{
    long int seconds_since_epoch;
    struct tm current_time, *time_ptr;
    int hour, minute, second, day, month, year;
    unsigned int *int_ptr;

    seconds_since_epoch = time(0);  // Pass time a null pointer as arguments.
    printf("time() - seconds since epoch: %ld\n", seconds_since_epoch);

    time_ptr = &current_time;   // Set time_ptr to the address of
                                // the current_time struct.
    localtime_r(&seconds_since_epoch, time_ptr);

    // Three different ways to access struct elements:
    hour = current_time.tm_hour;    // Direct access
    minute = time_ptr->tm_min;      // Access via pointer
    second = *((int *) time_ptr);   // Hacky pointer access

    printf("Current time is: %02d:%02d:%02d\n", hour, minute, second);
    day = time_ptr->tm_mday;
    month = time_ptr->tm_mon;
    year = time_ptr->tm_year;
    printf("Current date is: %02d:%02d:%4d\n", day, month, year);
    
    minute = hour = 0;
    int_ptr = (unsigned *) time_ptr;

    for(int i = 0; i < 3; i++){
        printf("int_ptr @ %p : %d\n", int_ptr, *int_ptr);
        int_ptr++;
    }

    exit(0);
}
