#include <stdio.h>
#include <string.h>

char *nstrcat(char *dest, const char *src, size_t size)
{
    size_t dest_len = 0; // strlen(dest);
    size_t i;

    for(i = 0; i < size && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';

    return dest;
}

/*
size_t nstrcat(char dest[], const char *src, size_t size)
{
    size_t i, src_l, dest_l;

    i = src_l = dest_l = 0;

    src_l = strlen(src);
    dest_l = size + 1;

    while(src[i] != '\0' && i < size) {
        dest[i] = src[i];
        i++;
    }
    
    dest[dest_l] = '\0';
    return dest_l;
}
*/

int main()
{
    unsigned int s_l, d_l = 0;
    char *str, *chars;

    str = "this is a string of unknown size";

    s_l = strlen(str);
    chars = nstrcat(chars, str, s_l); 

    printf("[src]--> (%d) '%s'\n", s_l, str);
    printf("[dest]--> (d) '%s'\n", chars);

    return 0;
}
