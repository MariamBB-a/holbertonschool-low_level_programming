#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root, -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	if (n < 4)
		return (-1);

	int candidate = _sqrt_recursion(n - 1);
	if (candidate != -1)
	{
		if ((candidate + 1) * (candidate + 1) == n)
			return (candidate + 1);
	}

	return (-1);
}
