#include "main.h"

/**
 * print_alphabet_x10 - make it 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
    int i = 0;
    char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";

    while (i < 10)
    {
        int j = 0;
        while (alphabet[j] != '\0')
        {
            _putchar(alphabet[j]);
            j++;
        }
        i++;
    }
}
