#include "main.h"

/**
 * print_line - draws a diagonal line in the terminal
 * @n: number of times the character _ should be printed
 * Prints a diagonal line on the terminal by printing the character \
 * n times, each on a new line and preceded by spaces to form a diagonal.
 * If n is 0 or less, prints only a newline.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
