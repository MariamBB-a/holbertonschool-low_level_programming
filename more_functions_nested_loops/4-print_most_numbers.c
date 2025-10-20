#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Description: Do not print 2 and 4,
 * using the _putchar function.
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num +'0');
	}
	_putchar('\n');
}
