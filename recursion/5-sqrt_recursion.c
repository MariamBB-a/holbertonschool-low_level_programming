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
	int i = 1;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n - 1));
}
