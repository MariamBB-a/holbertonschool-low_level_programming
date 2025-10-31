#include "main.h"

/**
 * _sqrt_helper - helper function to find the natural square root
 * @n: number to find the square root of
 * @i: current number to check
 *
 * Return: natural square root if found, otherwise -1
 */
int _sqrt_helper(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (-1);
	return (_sqrt_helper(n, m + 1));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
