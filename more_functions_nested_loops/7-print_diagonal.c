#include "main.h"

/*
 *
 * print_line - draws a diagonal line in the terminal
 * @n: number of times the character _ should be printed
 * Description: uses only _putchar to print, ends with newline
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
