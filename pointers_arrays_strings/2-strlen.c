#include "main.h"

/*
 * mian returns the length of a string.
 *
 * return: success
 */
int _strlen(char *s)
{
	int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }

    return len;
}
