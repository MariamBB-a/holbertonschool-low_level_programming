#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
    int i = 0;
    char c;

    while (i < 10)
    {
        c = 'a';
        while (c <= 'z')
        {
            _putchar(c);
            c++;
        }
        _putchar('\n');
        i++;
    }
    return (0);
}
