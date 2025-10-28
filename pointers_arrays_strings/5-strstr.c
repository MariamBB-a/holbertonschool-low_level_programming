#include "main.h"

/**
 * @5strstr.c - finding substring inside a string
 * needle: is the substring
 * haystack: is the string
 *
 * result: return pointer to the begining of sunstring,or
 * null if not found.
 */
char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    if (*needle == '\0')
        return (haystack); /* empty substring always matches at start */

    while (*haystack)
    {
        h = haystack;
        n = needle;

        /* Compare characters one by one */
        while (*h && *n && (*h == *n))
        {
            h++;
            n++;
        }

        /* If we reached the end of needle, substring found */
        if (*n == '\0')
            return (haystack);

        haystack++;
    }

    return (NULL);
}
