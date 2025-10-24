#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 *
 * return: success
 */
{
    int length = 0;
    int i;

    while (s[length] != '\0')
    {
        length++;
    }

    for (i = length - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }

    _putchar('\n');
}
