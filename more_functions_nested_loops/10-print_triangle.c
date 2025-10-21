#include "main.h"

/**
 *
 * main - rints a triangle, followed by a new line
 * description: only use _putchar function to print
 * return: print space or new line.
 */
void print_triangle(int size);
{
	int i; j;
	
	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		for(i = 0; i <= size; i++)
		{
			for(j =0; j<= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
