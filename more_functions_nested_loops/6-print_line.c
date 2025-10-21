#include "main.h"

/*
 * print line -  a straight line in the terminal
 * @n: number of times the character _ should be printed
 * description: can only use _putchar function to print
 * 
 */

void print_line(int n)
{
	int i;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 0; i <= n; i++)
		{
			_putchar('-');
		}
			_putchar('\n');
		}
	}
}
