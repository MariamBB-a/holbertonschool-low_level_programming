#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 *
 */

void _puts(char *str)
{

    while (*str)
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}
