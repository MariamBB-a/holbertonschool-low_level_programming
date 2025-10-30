#include "main.h"

/**
 * _sqrt_helper - helper function to find the natural square root
 * @n: number to find the square root of
 * @i: current number to check
 *
 * Return: natural square root if found, otherwise -1
 */
int _sqrt_recursion(int n)
{
	static int i;

	if (n < 0)
		return (-1);

	if (i == 0)
		i = 1;

	if (i * i == n)
	{
		int result = i;

		i = 0;
		return (result);
	}
	else if (i * i > n)
	{
		i = 0;
		return (-1);
	}
	else
	{
		i++;
		return (_sqrt_recursion(n));
	}
}
