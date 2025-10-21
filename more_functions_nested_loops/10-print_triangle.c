#include "main.h"

/**
 *
 * print_triangle - Prints a triangle using '#' characters.
 * @size: The size of the triangle.
 *
 * Description: Only uses _putchar. Prints a right-aligned triangle.
 * If size is 0 or less, prints only a newline.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			/* Print spaces */
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}

			/* Print hashes */
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
