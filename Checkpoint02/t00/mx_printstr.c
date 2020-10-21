#include <unistd.h>

static int mx_strlen(const char *s) 
{
    int i = 0;
    
    if (!s)
        return 0;
    while (s[i])
        i++;
    return i;
}

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}