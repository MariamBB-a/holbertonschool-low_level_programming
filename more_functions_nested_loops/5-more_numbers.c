#include "main.h"

/**
 * print_most_numbers - prints numbers 10 times from 0 to 14
 *
 * Description: Uses _putchar three times to prints numbers from 0 to 14 
 *
 * Return: void
 */

void more_numbers(void)
{
    int i, num;

    for (i = 0; i < 10; i++)
    {
        for (num = 0; num <= 14; num++)
        {
            if (num > 9)
                _putchar((num / 10) + '0');  // print tens digit
            
            _putchar((num % 10) + '0');      // print ones digit
        }
        _putchar('\n');
    }
}
