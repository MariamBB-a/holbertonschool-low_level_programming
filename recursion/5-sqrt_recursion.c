#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root, -1 if none
 */
int _sqrt_recursion(int n)
{
	int candidate;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	candidate = 1;

	if (candidate * candidate > n)
		return (-1);
	if (candidate * candidate == n)
		return (candidate);

	candidate = _sqrt_recursion(n - 1);
	if (candidate * candidate == n)
		return (candidate);

	return (-1);
}
