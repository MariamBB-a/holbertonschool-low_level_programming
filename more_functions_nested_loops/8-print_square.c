#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: The size of the square to be printed.
 *
 * Description: Uses only _putchar to print. Prints a square
 * made of the '#' character. If size is 0 or less, only
 * a newline is printed.
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)

	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
				_putchar('#');
		}
		_putchar('\n');
	}
}
