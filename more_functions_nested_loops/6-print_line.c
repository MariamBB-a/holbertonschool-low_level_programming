#include "main.h"

/*
 * main - draws a straight line in the terminal
 * description: can only use _putchar function to print
 * return: 0 if print new line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('-');
			_putchar('\n');
		}
	}
}
